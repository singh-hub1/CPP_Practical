#include<iostream>
#include<iomanip>
using namespace std;
class Learn_Info
{
protected:
	int Roll_No;
	string Stud_Name,Class;
	float Percentage;
public :	
	Learn_Info(){}
	Learn_Info(int Roll_No, string Stud_Name, string Class, float Percentage){
		this->Roll_No = Roll_No;
		this->Stud_Name = Stud_Name;
		this->Class=Class;
		this->Percentage =Percentage;
	}
		
};
class Earn_Info
{
protected:
	int No_of_hours_worked; 
	float Charges_per_hour;
public :	
	Earn_Info(){}
	Earn_Info(int No_of_hours_worked,float Charges_per_hour){
		this->Charges_per_hour = Charges_per_hour;
		this->No_of_hours_worked = No_of_hours_worked;
	}
			
};

class Earn_Learn_info:protected Earn_Info,protected Learn_Info
{
	
public :
	Earn_Learn_info(){}
	Earn_Learn_info(int rollno, string sname, string Class, float per,int no_of_work,float charges):Earn_Info(no_of_work,charges),Learn_Info(rollno,sname,Class,per){}
	void display();
};

void Earn_Learn_info::display(){
		cout<<setw(6)<<Roll_No<<setw(3)<<"|"<<setw(9)<<Stud_Name<<setw(6)<<"|"<<setw(7)<<Class<<"  |"<<setw(6)<<Percentage<<setw(7)<<"|"<<setw(10)<<No_of_hours_worked<<setw(11)<<"|"<<setw(10)<<Charges_per_hour<<setw(9)<<"|"<<setw(6)<<No_of_hours_worked*Charges_per_hour<<setw(4)<<"|"<<endl; 
}	


int main()
{
	int rollno,work,n;
	string name,Class;	
	float charges,per;
	
	cout<<"How many records you wants to enter : ";
	cin>>n;
	
	Earn_Learn_info eli[n];
	
	cout<<endl<<"Enter a details : ";
	for (int i = 0; i < n; i++)
	{
		cout<<endl<<"Record : "<<i+1<<endl;
		cout<<"Roll No. : ";
		cin>>rollno;
		cout<<"Name : ";
		cin>>name;
		cout<<"Class : ";
		cin>>Class;
		cout<<"Percentage : ";
		cin>>per;
		cout<<"No of hours worked : ";
		cin>>work;
		cout<<"Charges per hour : ";
		cin>>charges;
		
		eli[i] = Earn_Learn_info(rollno,name,Class,per,work,charges);
		
	}

	
	cout<<endl<<"Given Details Are : ";
	cout<<endl<<"Roll No | Student Name |  Class  | Percentage | No of hours worked | Charges per hour |  Total  |"<<endl;
	for (int i = 0; i < n; i++)
	{
		eli[i].display();
	}
	return 1;
}
