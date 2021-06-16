#include<iostream>
#include<iomanip>
using namespace std;
class Person
{
protected:
	int id;
	string name;
	//float bonus;
public :	
	Person(){}
	virtual void getData()=0;
	virtual void display()=0;
	virtual void count_bonus()=0;
};

class Admin:public virtual Person
{
protected:
	float bonus;
public :
	Admin(){}	
};
class Account:public virtual Person
{
protected:
	float basic_salary,with_bonus_salary;
	
public :
	Account(){}
};

class Master: public Admin,public Account
{

public :
	Master(){}
	void getData();
	void display();
	void count_bonus();	
};
		
void Master::getData(){
	cout<<endl<<"Enter a ID : ";
	cin>>id;
	cout<<"Enter a Name : ";
	cin>>name;
	cout<<"Basic Salary : ";
	cin>>basic_salary;
	cout<<"Bonus (In %): ";
	cin>>bonus;
}

void Master::display(){
	cout<<setw(5)<<id<<setw(4)<<"|"<<setw(8)<<name<<setw(4)<<"|"<<setw(10)<<basic_salary<<setw(8)<<"|"<<setw(5)<<bonus<<setw(4)<<"|"<<setw(8)<<with_bonus_salary<<setw(7)<<"|"<<endl;
}

void Master::count_bonus(){
	with_bonus_salary = basic_salary+(basic_salary * bonus)/100;
}
	
int main()
{
	int n;
	
	cout<<"How many details of employees : ";
	cin>>n;
	
	Person *master[n];
	
	for (int i = 0; i < n; i++)
	{
		master[i] = new Master;
		master[i]->getData();
	}
	
	for (int i = 0; i < n; i++)
	{
		master[i]->count_bonus();
	}
	
	cout<<endl<<"Given Data is : "<<endl;
	cout<<"   ID   |    NAME   |   BASIC SALARY  |  BONUS | TOTAL SALARY |"<<endl;
	for (int i = 0; i < n; i++)
	{
		master[i]->display();
	}
	
	return 1;
}
