/*
Write a C++ program to create a class Worker that has data members as Worker_Name, 
No_of_Days_worked, Pay Rate. Create and initialize the object using default constructor, 
parameterized constructor and copy constructor. Also write necessary member function to calculate 
and display the salary of worker.
*/

#include<iostream>
using namespace std;
class Worker
{
	int No_of_Days_worked, Pay_rate; 
	string Worker_Name;
public:
	Worker(){}
	Worker(int day,string name, int rate)
    {
		No_of_Days_worked=day;
		Worker_Name = name;
		Pay_rate = rate;
	}
	
	void display()
    {
		cout<<endl<<"Name : "<<Worker_Name<<endl;
		cout<<"No of Days worked : "<<No_of_Days_worked<<endl;
		cout<<"Pay Rate : "<<Pay_rate<<endl;	
		cout<<"Salary : "<<Pay_rate*No_of_Days_worked<<endl;
	}
};
		
int main()
{
	int nday,rate;
	string name;
	Worker worker;
	
	cout<<"Enter a details of Worker : "<<endl;
	cout<<"Name : ";
	cin>>name;
	cout<<"No of Days worked : ";
	cin>>nday;
	cout<<"Pay Rate : ";
	cin>>rate;
	
	worker = Worker(nday,name,rate);
	
	worker.display();
	
	
	return 1;
}
