#include <iostream>
#include "registerhandler.h"
#include "simplepayment.h"
#include "statepayment.h"
#include "preferencialpayment.h"
#include "innerbankpayment.h"

using namespace std;

int main()
{
    cout << "Type(simple/state/preferencial/innerbank): " << endl;
    string type;
    cin >> type;

    cout << "Sender: " << endl;
    string sender;
    cin >> sender;

    cout << "Receiver: " << endl;
    string receiver;
    cin >> receiver;

    cout << "Money: " << endl;
    int money;
    cin >> money;

    Payment* payment;
    if (type == "state")
    {
        payment = new StatePayment(sender, receiver, money);
    }
    else if (type == "preferencial")
    {
        payment = new PreferencialPayment(sender, receiver, money);
    }
    else if (type == "innerbank")
    {
        payment = new InnerBankPayment(sender, receiver, money);
    }
    else
    {
        payment = new SimplePayment(sender, receiver, money);
    }

    Handler* handler = new RegisterHandler;
    payment->handle(handler);

    return 0;
}

