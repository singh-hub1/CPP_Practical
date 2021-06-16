/*
Write a C++ program to create two classes DM and DB which stores the value of distances. DM stores 
distance in m and cm and DB stores distance in feet and inches. Write a program that can read valuefor 
the class objects and add oneobject of DM with the other object of DB by using friend function.
*/

#include <iostream>
using namespace std;
class DB;
class DM
{
    int meter, centimeter;

public:
    DM(int m, int cm)
    {
        meter = m;
        centimeter = cm;
    }

    friend void result_feet_inches(DM, DB);
    friend void result_meter_centimeter(DM, DB);
};

class DB
{
    int feet, inches;

public:
    DB(int f, int i)
    {
        feet = f;
        inches = i;
    }

    friend void result_feet_inches(DM, DB);
    friend void result_meter_centimeter(DM, DB);
};

void result_feet_inches(DM obj1, DB obj2)
{
    cout << endl
         << "Total Feet : " << obj2.feet + (obj1.meter * 3.281) << endl;
    cout << "Total Inches : " << obj2.inches + (obj1.centimeter / 2.54) << endl;
}

void result_meter_centimeter(DM obj1, DB obj2)
{
    cout << endl
         << "Total Meter  : " << obj1.meter + (obj2.feet / 3.281) << endl;
    cout << "Total Centimeter : " << obj1.centimeter + (obj2.inches * 2.54) << endl;
}

int main()
{
    int m, cm, feet, inches;

    cout << "Enter  a Meter : ";
    cin >> m;

    cout << "Enter a centimeter : ";
    cin >> cm;

    cout << endl
         << "Enter a Feet : ";
    cin >> feet;

    cout << "Enter a Inches : ";
    cin >> inches;

    DB obj2(feet, inches);
    DM obj1(m, cm);

    result_feet_inches(obj1, obj2);
    result_meter_centimeter(obj1, obj2);

    return 1;
}
