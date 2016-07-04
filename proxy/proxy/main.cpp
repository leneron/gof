#include <iostream>
#include "owner.h"
#include "customer.h"
#include "realtor.h"

using namespace std;

int main()
{
    //Customer initialization
    cout << "Your name: ";
    string name;
    cin >> name;
    Customer* customer = new Customer(name);

    cout << endl;

    //Do something with the real subject
    cout << "Buying the building#1..." << endl;
    Seller* firstSeller = new Owner();
    customer->buyBuilding(firstSeller);

    cout << endl;

    //Do something via proxy
    cout << "Buying the building#2..." << endl;
    Seller* secondSeller = new Realtor();
    customer->buyBuilding(secondSeller);

    delete customer;
    delete firstSeller;
    delete secondSeller;
    return 0;
}

