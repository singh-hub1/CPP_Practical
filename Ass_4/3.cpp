/*
Write a C++ Program to store GPA of a number of students and display it where n is thenumber of students 
entered by the user
*/

#include<iostream>
#include<iomanip>
using namespace std;
class Student
{
	int *rollNo;
	float *GPA;
	string *name;
	
public:
	Student()
    {
		rollNo = new int;
		GPA = new float;
		name = new string;
	}
	
	~Student(){
		delete rollNo;
		delete GPA;
		delete name;
	}
	
	void getData(){
		cout<<"Roll no. : ";
		cin>>*rollNo;	
		cout<<"Name : ";
		cin>>*name;
		cout<<"GPA (out of 1.0 to 4.0) : ";
		cin>>*GPA;
		cout<<endl;
	}	
	
	void display(){
		cout<<setfill(' ')<<setw(6)<<*rollNo<<setfill(' ')<<setw(7)<<" | "<<setfill(' ')<<setw(5)<<*name<<setfill(' ')<<setw(5)<<" | "<<setfill(' ')<<setw(4)<<*GPA<<endl;
	}	
				
};
int main()
{
	Student s[100];
	int n;
	
	cout<<"How many details of students you wants to enter : ";
	cin>>n;
	
	cout<<"Enter a data : "<<endl;
	for (int  i = 0; i < n; i++)
	{
		cout<<"Student "<<i+1<<endl;
		s[i].getData();
	}
	
	
	cout<<endl<<"Given Details are : "<<endl;
	cout<<" Roll No. "<<setfill(' ')<<setw(3)<<" | "<<setfill(' ')<<setw(3)<<" Name" <<setfill(' ')<<setw(5)<<" | "<<setfill(' ')<<setw(5)<<" GPA "<<endl;
	for (int i = 0; i < n; i++)
	{
		s[i].display();		
	}
	cout<<endl;
	
	return 1;
}
