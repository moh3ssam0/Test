#include <iostream>
#include <string>
#include "Car.h"
#include <cmath>
using namespace std;

int main()
{
    string m, c;
    int mo;
    cin >> m >> mo >> c;
    Car c1(m, mo, c);
    /*c1.setMaker("Nissan");
    c1.setModel(2020);
    c1.setColor("Red");*/

    cout << "The car c1 made by " << c1.getMaker() << endl;
    cout << "The car c1 model is " << c1.getModel() << endl;
    cout << "The car c1 color is " << c1.getColor() << endl;

    return 0;
}
