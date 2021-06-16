#include<iostream>
using namespace std;
class Car
{
	float average;
	char color[10];
public :
	Car(){}
	void setAverage();
	void setColor();	
	void getAverage();
	void getColor();
};
void Car::setAverage(){
	cout<<endl<<"Average : ";
	cin>>average;
}	
void Car::setColor(){
	cout<<"Color : ";
	cin>>color;
}	
void Car::getAverage(){
	cout<<endl<<"Average : "<<average<<endl;
}	
void Car::getColor(){
	cout<<"Color : "<<color<<endl;
}
class Maruti: public Car
{
	int no_of_seat;
public :	
	Maruti(){}
	void setNoOfSeat();
	void getNoOfSeat();
};
void Maruti::setNoOfSeat(){
	cout<<"No. of seat : ";
	cin>>no_of_seat;
}

void Maruti::getNoOfSeat(){
	cout<<"No. of seat : "<<no_of_seat<<endl;
}

class Maruti800: public Maruti
{
	float price;
public : 
	void setPrice();
	void getPrice();
};		
void Maruti800::setPrice(){
	cout<<"Price : ";
	cin>>price;
}	
void Maruti800::getPrice(){
	cout<<"Price : "<<price<<endl;
}	
int main()
{
	Maruti800 maruti800;
	cout<<endl<<"Given Data is : "<<endl;
	maruti800.setAverage();
	maruti800.setColor();
	maruti800.setNoOfSeat();
	maruti800.setPrice();
	maruti800.getAverage();
	maruti800.getColor();
	maruti800.getNoOfSeat();
	maruti800.getPrice();
	return 1;
}
