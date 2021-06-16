/*
Write a C++ program to create a class employee having Emp_no, Name, Basic, DA, HRA, Allowances. 
Write necessary member functions to accept and display details of Employee and generate a Pay slip 
using appropriate manipulators for formatted display.
*/

#include<iostream>
#include<iomanip>
using namespace std;
class Employee
{
	int emp_id,basic_salary;
	float DA,HRA,other_Allowances;
	string name;
public:
	void getData();
	void display();
	void pay_slip();	
};

void Employee::getData()
{
	cout<<"Employee ID : ";
	cin>>emp_id;
	cout<<"Name : ";
	cin>>name;
	cout<<"Basic Salary : ";
	cin>>basic_salary;
	cout<<"DA (in % on basic salary) : ";
	cin>>DA;
	cout<<"HRA (in % on basic salary) : ";
	cin>>HRA;
	cout<<"Other Allowances (in % on basic salary) : ";
	cin>>other_Allowances;
}
	
void Employee::display()
{
	cout<<"Employee ID : "<<emp_id<<endl;
	cout<<"Name : "<<name<<endl;
	cout<<"Basic Salary : "<<basic_salary<<endl;
	cout<<"DA (in % on basic salary) : "<<DA<<endl;
	cout<<"HRA (in % on basic salary) : "<<HRA<<endl;
	cout<<"Other Allowances (in % on basic salary) : "<<other_Allowances<<endl<<endl;
}	

void Employee::pay_slip()
{
	cout<<"Employee ID"<<setfill(' ')<<setw(9)<<": "<<emp_id<<endl;
	cout<<"Name"<<setfill(' ')<<setw(16)<<": "<<name<<endl;
	cout<<"Basic Salary "<<setfill(' ')<<setw(7)<<": "<<basic_salary<<endl;
	cout<<"DA"<<setfill(' ')<<setw(18)<<": "<<setfill(' ')<<DA<<endl;
	cout<<"HRA "<<setfill(' ')<<setw(16)<<": "<<HRA<<endl;
	cout<<"Other Allowances "<<setfill(' ')<<setw(3)<<": "<<other_Allowances<<endl;
	cout<<"Total Salary "<<setfill(' ')<<setw(7)<<": "<<basic_salary+((basic_salary * DA)/100)+((basic_salary * HRA)/100)+((basic_salary * other_Allowances)/100)<<endl;
}
	
int main()
{
	Employee emp;
	
	cout<<"Enter Details of Employee : "<<endl;
	emp.getData();
	
	cout<<"\nGiven Data is : "<<endl<<endl;
	emp.display();
	
	cout<<"Pay Slip as follow"<<endl;
	emp.pay_slip();
	
	return 1;
}
