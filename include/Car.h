#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>
using namespace std;

class Car
{

private:
    string maker;
    int model;
    string color;

public:
    void setMaker(string m);
    string getMaker();
    void setModel(int mo);
    int getModel();
    void setColor(string c);
    string getColor();

    Car(string m, int mo, string c);
    ~Car();

    protected:

};

#endif // CAR_H
