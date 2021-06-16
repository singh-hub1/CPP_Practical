/*
Create a class named „DISTANCE‟ with: - feet and inches as data members. The class has the following 
member functions:
a. To input distance
b. To output distance
c. To add two distanceobjects
Write a C++ program to create objects of DISTANCE class. Input two distances and output the sum.
*/

#include<iostream>
using namespace std;
class Distance
{
	int feet,inches;
public :
	void getFeet(int f);
	void getInches(int i);
	void putFeet();
	void putInches();
	void add(Distance d1, Distance d2);
};

void Distance::getFeet(int f)
{
	feet = f;
}

void Distance::getInches(int i)
{
	inches = i;
}
		
void Distance::putFeet()
{
	cout<<"Feet : "<<feet<<endl;
}
			
void Distance::putInches()
{
	cout<<"Inches : "<<inches<<endl;
}

void Distance::add(Distance d1, Distance d2)
{
	feet = d1.feet + d2.feet;
	inches = d1.inches + d2.inches;
	feet = feet + (inches/12);
	inches = inches%12;
}

			
			
int main()
{
	Distance d1,d2,d3;
	int feet,inches;
	
	cout<<"For Distance 1"<<endl;
	cout<<"Enter a feet : ";
	cin>>feet;
	
	cout<<"Enter a inches : ";
	cin>>inches;
		
	d1.getFeet(feet);
	d1.getInches(inches);	
		
	cout<<"\nFor Distance 2"<<endl;
	cout<<"Enter a feet : ";
	cin>>feet;
	
	cout<<"Enter a inches : ";
	cin>>inches;
		
	d2.getFeet(feet);
	d2.getInches(inches);	
		
	cout<<"Given Data for Distance 1"<<endl;
	d1.putFeet();
	d1.putInches();
	
	cout<<"\nGiven Data for Distance 2"<<endl;
	d2.putFeet();
	d2.putInches();
	
	d3.add(d1,d2);
	
	cout<<endl<<"Total"<<endl;
	
	d3.putFeet();
	d3.putInches();
	
	return 1;
}
