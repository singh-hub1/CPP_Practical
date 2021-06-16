#include<iostream>
#include<iomanip>
using namespace std;
class Employee 
{
protected :
	string Name, Designation;
public :	
	Employee(){}
	Employee(string Name,string Designation){
		this->Name = Name;
		this->Designation = Designation;
	}		 
};

class Project 
{
protected :
	string title;
	int Project_id;
public :	
	Project(){}
	Project(string title,int Project_id){
		this->title = title;
		this->Project_id = Project_id;
	}		 
};

class Emp_Proj:protected Project,protected Employee 
{
	int Duration;
public :	
	Emp_Proj(){}
	Emp_Proj(string Name,string Designation,string title,int Project_id,int Duration):Project(title,Project_id),Employee(Name, Designation){
		this->Duration = Duration;
	}
	
	static void masterTable(Emp_Proj *p, int n);
	static void projectDetails(Emp_Proj *p, int n);
};


void Emp_Proj::masterTable(Emp_Proj *p, int n){
	
	cout<<"Project ID | Employee Name | Designation | Project Name | Duration |"<<endl;
	for (int i = 0; i < n; i++){	 		cout<<setw(7)<<p[i].Project_id<<setw(5)<<"|"<<setw(8)<<p[i].Name<<setw(8)<<"|"<<setw(10)<<p[i].Designation<<setw(4)<<"|"<<setw(10)<<p[i].title<<setw(5)<<"|"<<setw(6)<<p[i].Duration<<setw(5)<<"|"<<endl;	
	} 
}

void Emp_Proj::projectDetails(Emp_Proj *p, int n){
	Emp_Proj t;
	
	int i;
	for ( i= 0; i < n; i++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			if (p[j].Duration > p[j+1].Duration)
			{
				t = p[j];
				p[j] = p[j+1];
				p[j+1] = t;				
			}
		}
	}	
	
	
	cout<<"Project ID | Project Name | Duration |"<<endl;
	for (int i = 0; i < n; i++)
	{
		cout<<setw(7)<<p[i].Project_id<<setw(5)<<"|"<<setw(10)<<p[i].title<<setw(5)<<"|"<<setw(5)<<p[i].Duration<<setw(6)<<"|"<<endl;
	}

}

int main()
{
	int n,pid,dur;
	string ename,desig,pname;
	
	cout<<"How many records you wants to enter : ";
	cin>>n;
	
	Emp_Proj ep[n];
	
	cout<<endl<<"Enter a details : "<<endl;
	for (int i = 0; i < n; i++)
	{
		cout<<"Record : "<<i+1<<endl;
		cout<<"Employee Name : ";
		cin>>ename;
		cout<<"Designation : ";
		cin>>desig;
		cout<<"Project ID : ";
		cin>>pid;
		cout<<"Project Name : ";
		cin>>pname;
		cout<<"Duration";
		cin>>dur;
		cout<<endl;
		ep[i] = Emp_Proj(ename,desig,pname,pid,dur);

	}
	
	Emp_Proj::masterTable(ep,n);
	
	cout<<endl<<endl;
	Emp_Proj::projectDetails(ep,n);
	
	return 1;
}
