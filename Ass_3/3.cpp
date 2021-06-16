/*
Write a C++ program to create a class Mobile which contains data members as Mobile_Id, 
Mobile_Name, Mobile_Price. Create and Initialize all values of Mobile object by using parameterized 
constructor. Display the values of Mobile object where Mobile_price should be right justified with a 
precision of two digits*/

#include<iostream>
#include<iomanip>
using namespace std;
class Mobile
{
	int Mobile_Id;
	string Mobile_Name;
	float Mobile_Price;
public:
	Mobile(int id, string name, float price)
    {
		Mobile_Id = id;
		Mobile_Name = name;
		Mobile_Price = price;
	}
	
	float mob_value()
    {
		return Mobile_Price;
	}	
};		
			
int main()
{
	int id;
	string name;
	float price;
	
	cout<<"Enter a details of Mobile : "<<endl;
	cout<<"ID : ";
	cin>>id;
	cout<<"Name : ";
	cin>>name;
	cout<<"Price : ";
	cin>>price;
	
	Mobile mob(id,name,price);
	
	cout<<"Price of Mobile "<<setprecision(2)<<mob.mob_value()<<endl;	

	return 1;
}
