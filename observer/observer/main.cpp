#include <iostream>
#include "office.h"
#include "papersubscriber.h"
#include "magazinesubscriber.h"

using namespace std;

int main()
{
    //Creating the office
    Office* office = new Office;

    int peopleN = 5;
    //creating an example situation
    //5 subscribers
    //2 of them are 'Paper' readers
    //3 of them are 'Magazine' readers
    for (int i = 0; i < peopleN; i++)
    {
        if (i < 2)
        {
            Subscriber* subscriber = new PaperSubscriber;
            office->addSubscriber(subscriber);
        }
        else
        {
            Subscriber* subscriber = new MagazineSubscriber;
            office->addSubscriber(subscriber);
        }
    }

    //4 new issues
    for (int i = 0; i < 4; i++)
    {
        cout << "Week " << i << endl;
        office->setNewPress(i);
        office->updatePress();
        cout << endl;
    }
}

