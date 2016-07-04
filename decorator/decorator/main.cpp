#include <iostream>
#include "detail.h"
#include "baserobot.h"
#include "wheel.h"
#include "boosterengine.h"

using namespace std;


int main()
{
    //Creating the different robots
    Detail* robotWheel = new Wheel(new BaseRobot);
    Detail* robotBoosterEngine = new BoosterEngine(new BaseRobot);
    Detail* robotWheelBoosterEngine = new Wheel(new BoosterEngine (new BaseRobot));

    //Moving all the robots
    robotWheel->move();
    cout << endl;

    robotBoosterEngine->move();
    cout << endl;

    robotWheelBoosterEngine->move();
    cout << endl;
    return 0;
}

