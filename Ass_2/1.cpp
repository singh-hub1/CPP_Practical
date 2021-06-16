/*
Write the definition for a class called Cylinder that contains data member’s radius and height. The class has 
the following member functions:
a. void setradius(float) to set the radius of data member
b. void setheight(float) to set the height of data member
c. float volume( ) to calculate and return the volume of thecylinder
d. float area( ) to calculate and return the area of the cylinder.
Write a C++ program to create two cylinder objects and display each cylinder and its area and volume.

*/

#include<iostream>
using namespace std;
class Cylinder
{
	float radius,height;
public :
	void setRadius(float r);
	void setHeight(float h);
	float getArea();
	float getVolume();
};

void Cylinder::setRadius(float r)
{
	radius = r;
}

void Cylinder::setHeight(float h)
{
	height = h;
}

float Cylinder::getArea()
{
	return (2*3.14*radius*height) + (2*3.14*(radius*radius));
}

float Cylinder::getVolume()
{
	return 3.14*(radius*radius)*height;
}

int main()
{
	float r,h;
	Cylinder c;
	
	cout<<"Enter a radius of Cylinder : ";
	cin>>r;
	
	cout<<"Enter a height of Cylinder : ";
	cin>>h;
	
	c.setRadius(r);
	c.setHeight(h);
	
	
	cout<<"Area of Cylinder : "<<c.getArea()<<endl;
	cout<<"Volume of Cylinder : "<<c.getVolume()<<endl;	

	return 1;
}
