#include "Car.h"
#include <iostream>
#include <string>
Car::Car(string m, int mo, string c):maker(m), model(mo), color(c)
{

}

Car::~Car()
{
    cout << "GOOD BYE";
}

void Car::setMaker(string m)
{
    maker = m;

}
string Car::getMaker()
{
    return maker;
}

void Car::setModel(int mo)
{
    model = mo;

}
int Car::getModel()
{
    return model;
}

void Car::setColor(string c)
{
    color = c;

}
string Car::getColor()
{
    return color;
}
