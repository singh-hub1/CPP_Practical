/*Create a class for different departments in a college containing data members as Dept_Id, Dept_Name, 
Establishment_year, No_of_Faculty, No_of_students. Write a C++ program with following member 
functions:
a. To accept „n‟ Department details
b. To display department details of a specific Department
c. To display department details according to a specified establishment year
*/

#include<iostream>
using namespace std;
class Department
{
	int Dept_Id, Establishment_year, No_of_Faculty, No_of_students;
	string Dept_Name;
public :
	void getData();
	static void search_by_name(Department d[100],int n);
	static void search_by_year(Department d[100],int n);
	void display();
};

void Department::getData()
{
	cout<<"ID : ";
	cin>>Dept_Id;
	cout<<"Name : ";
	cin>>Dept_Name;
	cout<<"Establishment year : ";
	cin>>Establishment_year;
	cout<<"no of Faculty : ";
	cin>>No_of_Faculty;
	cout<<"No of Students : ";
	cin>>No_of_students;
}

void Department::display()
{
	cout<<"ID : "<<Dept_Id<<endl;
	cout<<"Name : "<<Dept_Name<<endl;
	cout<<"Establishment year : "<<Establishment_year<<endl;
	cout<<"no of Faculty : "<<No_of_Faculty<<endl;
	cout<<"No of Students : "<<No_of_students<<endl;
}

void Department::search_by_name(Department d[100],int n)
{
	string dname;
	
	cout<<"Enter a Department Name : ";
	cin>>dname;
	
	for (int i = 0; i < n; i++)
	{
		if (dname == d[i].Dept_Name)
		{
			cout<<"Data is Found..."<<endl;
			d[i].display();
			return;
		}
	}
	cout<<"Data Not Found..."<<endl;
}
	
	
void Department::search_by_year(Department d[100],int n)
{
	int year;
	
	cout<<"Enter a Establishment year : ";
	cin>>year;
	
	for (int i = 0; i < n; i++)
	{
		if (year == d[i].Establishment_year)
		{
			cout<<"Data is Found..."<<endl;
			d[i].display();
			return;
		}
	}
	cout<<"Data Not Found..."<<endl;
}

		
int main()
{
	Department d[100];
	int n,ch;
	
	cout<<"How many Departments you wants to enter : ";
	cin>>n;
	
	for (int i = 0; i < n; i++)
	{
		cout<<"\nDepartment "<<i+1<<endl;
		d[i].getData();
	}
	
	while(1){
		cout<<"\n1. To display department details of a specific Department.\n2. To display department details of a specific Establishment year \n3. EXIT\nEnter a choice : ";
		cin>>ch;
		
		switch(ch){
			case 1 : Department::search_by_name(d,n);
				 break;
			case 2 : Department::search_by_year(d,n);
				 break;	 
			case 3 : cout<<"Thank you..."<<endl;
				 exit(0);
			default : cout<<"Invalid Choice..."<<endl;
		}
	}	
			  

	return 1;
}
