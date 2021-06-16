#include<iostream>
#include<iomanip>
using namespace std;
class Student
{
protected:	
	int Roll_no;
	string Name;	
public :	
	Student(){}
	Student(int roll, string name){this->Roll_no = roll; this->Name = name;}
	virtual void display()=0;
	virtual void accept()=0;
};
class Theory: virtual public  Student
{
protected :
	int tm1,tm2,tm3,tm4,tm5;
public :	
	Theory(){}
	/*Theory(int tm1,int tm2,int tm3,int tm4,int tm5 ){
		this->tm1 = tm1;
		this->tm2 = tm2;
		this->tm3 = tm3;
		this->tm4 = tm4;
		this->tm5 = tm5;
	}*/	
	
		 
};

class Pratical: virtual public Student
{
protected :
	int pm1,pm2;
public :
	Pratical(){}
	/*Pratical(int pm1, int pm2){
		this->pm1 = pm1;
		this->pm2 = pm2;
	}*/		
};
class Result: public Pratical, public Theory
{
	string Class;
	float Total_theory_marks,Total_practical_marks;
public :	
	Result(){}
	void accept(){
		cout<<endl<<"Roll No : ";
		cin>>Roll_no;
		cout<<"Name : ";
		cin>>Name;
		cout<<"Enter a Theory marks of 5 subject (out of 100) : ";
		cin>>tm1>>tm2>>tm3>>tm4>>tm5;
		cout<<"Enter a Pratical marks of 2 subject (out of 50) : ";
		cin>>pm1>>pm2;
		cout<<"Class : ";
		cin>>Class;
		Total_theory_marks = tm1+tm2+tm3+tm4+tm5;
		Total_practical_marks = pm1+pm2;
	}
	
	void display(){
		cout<<setw(6)<<Roll_no<<setw(4)<<"|"<<setw(6)<<Name<<setw(3)<<"|"<<setw(7)<<Class<<setw(2)<<"|"<<setw(13)<<Total_theory_marks<<setw(11)<<"|"<<setw(13)<<Total_practical_marks<<setw(13)<<"|"<<endl;

	}
};


int main()
{
	int n;
	
	cout<<"How many records you wants to enter : ";
	cin>>n;
	
	Student *s[n];
	
	
	cout<<endl<<"Enter a Details : "<<endl;
	for (int i = 0; i < n; i++)
	{
		s[i] = new Result();
		s[i]->accept();
	}
	
	cout<<endl<<"Given Data is : "<<endl;
	cout<<" Roll No |  Name  |  Class | Total Marks of Theory | Total Marks of Pratical |"<<endl;
	for (int i = 0; i < n; i++)
	{
		s[i]->display();
	}
	
	for (int i = 0; i < n; i++)
	{
		delete s[i];
	}
	

	return 1;
}
