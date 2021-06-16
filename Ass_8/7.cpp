#include<iostream>
#include<iomanip>
using namespace std;
inline string putGrade(int t){
	return (t >= 90)?"A":(t >= 70)?"B":(t >=50)?"C":(t>=30)?"D":"Fail";
}	
class Student
{
protected:
	int Roll_No;
	string Name, Class;
public :	
	Student(){}
	Student(int Roll_no, string Name, string Class){
		this->Roll_No = Roll_no;
		this->Name = Name;
		this->Class= Class;
	}
	virtual void display()=0;	
};

class Internal_Marks: virtual public Student
{
protected:
	int internal_Marks;
public :
	Internal_Marks(){}
	Internal_Marks(int internal_Marks){
		this->internal_Marks = internal_Marks;
	}	
};

class External_Marks: virtual public Student
{
protected:
	int external_Marks;
public :
	External_Marks(){}
	External_Marks(int external_Marks){
		this->external_Marks = external_Marks;
	}	
};

class Result:public External_Marks,public Internal_Marks
{
	int total;
	string grade;
	
public :	
	Result(){}
	Result(int roll,string name ,string Class,int internal_Marks,int external_Marks ):Internal_Marks(internal_Marks),External_Marks(external_Marks),Student(roll,name,Class){
	total = internal_Marks + external_Marks;
	grade = putGrade(total);
	}

	void display(){
		cout<<setw(6)<<Roll_No<<setw(5)<<"|"<<setw(8)<<Name<<setw(5)<<"|"<<setw(8)<<Class<<setw(4)<<"|"<<setw(10)<<internal_Marks<<setw(9)<<"|"<<setw(10)<<external_Marks<<setw(9)<<"|"<<setw(5)<<total<<setw(5)<<"|"<<setw(5)<<grade<<setw(5)<<"|"<<endl;	
	}
};



int main()
{
	int n,roll,internal,external;
	string name,Class;
	
	cout<<"How many records you wants to enter : ";
	cin>>n;
	
	Student *result[n];
	
	cout<<endl<<"Enter a details : "<<endl;
	for (int i = 0; i < n; i++)
	{
		cout<<endl<<"Record "<<i+1<<endl;
		cout<<"Roll No. : ";
		cin>>roll;
		cout<<"Name : ";
		cin>>name;
		cout<<"Class : ";
		cin>>Class;
		cout<<"Internal Marks (out of 30) : ";
		cin>>internal;
		cout<<"External Marks (out of 70): ";
		cin>>external;
		
		result[i] = new Result(roll,name,Class,internal,external);
	}
	

	
	cout<<"Given Details are : "<<endl;
		
	cout<<" Roll No. |    Name    |   Class   |  Internal Marks  |  External Marks  |  Total  |  Grade  |"<<endl;
	for (int i = 0; i < n; i++)
	{
		result[i]->display();
	}

	for (int i = 0; i < n; i++)
	{
		delete result[i];
	}
	return 1;
}
