#include<iostream>
#include<iomanip>
using namespace std;
class Person
{
protected:	
	int P_code;
	string P_name;
	
public :	
	Person(){}
	Person(int P_code,string P_name){this->P_code=P_code; this->P_name=P_name;}
	virtual void display()=0;
	virtual void display_details_HOD()=0;
};
class Account:virtual public Person		
{
protected:
	string Acc_no;
	float Balance;
	
public :	
	Account(){}
	Account(string Acc_no, float Balance){this->Acc_no = Acc_no; this->Balance = Balance;}
	
};
class Official:virtual public Person
{
protected:
	string Designation;
	int Experience;
public :
	Official(){}
	Official(string Designation,int Experience){this->Designation = Designation; this->Experience = Experience;}	
};

class Employee:public Account,public Official
{
	
public :	
	Employee(){}
	Employee(int P_code,string P_name,string Acc_no, float Balance,string Designation,int Experience):Official(Designation,Experience),Account(Acc_no,Balance),Person(P_code,P_name){}
	
	void display(){
		cout<<setw(9)<<P_code<<setw(5)<<"|"<<setw(12)<<P_name<<setw(9)<<"|"<<setw(13)<<Acc_no<<setw(5)<<"|"<<setw(10)<<Balance<<setw(4)<<"|"<<setw(10)<<Designation<<setw(8)<<"|"<<setw(10)<<Experience<<setw(7)<<"|"<<endl;
	}
	
	void display_details_HOD(){
		if (Designation == "HOD" || Designation=="Hod" || Designation=="hod")
		{
			cout<<setw(9)<<P_code<<setw(5)<<"|"<<setw(12)<<P_name<<setw(9)<<"|"<<setw(13)<<Acc_no<<setw(5)<<"|"<<setw(10)<<Balance<<setw(4)<<"|"<<setw(10)<<Designation<<setw(8)<<"|"<<setw(10)<<Experience<<setw(7)<<"|"<<endl;

		}
	}			
};



int main()
{

	int pcode,n,exp;
	string name,desig,accno;
	float bal;
	
	cout<<"How many records you wants to enter : ";
	cin>>n;
	
	Person *emp[n];
	
	for (int i = 0; i < n; i++)
	{
		cout<<endl<<"Record : "<<i+1<<endl;
		cout<<"Person Code : ";
		cin>>pcode;
		cout<<"Person Name : ";
		cin>>name;
		cout<<"Account No. : ";
		cin>>accno;
		cout<<"Balance : ";
		cin>>bal;
		cout<<"Designation : ";
		cin>>desig;
		cout<<"Experience : ";
		cin>>exp;
		
		emp[i] = new Employee(pcode,name,accno,bal,desig,exp);
	}
	
	cout<<endl<<endl<<"Given Records are : "<<endl;
	cout<<" PERSON CODE |     PERSON NAME    |    ACCOUNT NO   |   BALANCE   |   DESIGNATION   |   EXPERIENCE   |"<<endl;
	for (int i = 0; i < n; i++)
	{
		emp[i]->display();
	}
	
	cout<<endl<<"Details of H.O.D : "<<endl;
	cout<<" PERSON CODE |     PERSON NAME    |    ACCOUNT NO   |   BALANCE   |   DESIGNATION   |   EXPERIENCE   |"<<endl;
	for (int i = 0; i < n; i++)
	{
		emp[i]->display_details_HOD();
	}
	

	return 1;
}
