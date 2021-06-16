#include<iostream>
using namespace std;
class Bus
{
	int Bus_No; 
	string Bus_Name; 
	int No_of_Seats; 
	string Starting_point; 
	string Destination;
	
public:
	void getData();
	void display();
	static void s_point(Bus *b,int);
	static void d_point(Bus b[100],int);//Both are same
};

void Bus::getData()
{
	cout<<"No : ";
	cin>>Bus_No;
	cout<<"Name : ";
	cin>>Bus_Name;
	cout<<"No of Seats : ";
	cin>>No_of_Seats;
	cout<<"Starting point : ";
	cin>>Starting_point;
	cout<<"Destination : ";
	cin>>Destination;
}

void Bus::display()
{
	cout<<"\nNo : "<<Bus_No<<endl;
	cout<<"Name : "<<Bus_Name<<endl;
	cout<<"No of Seats : "<<No_of_Seats<<endl;
	cout<<"Starting point : "<<Starting_point<<endl;
	cout<<"Destination : "<<Destination<<endl<<endl;
}		

void Bus::s_point(Bus b[100],int n)
{
	string start;
	int flag=1;
	cout<<"Enter a Starting point for Search : ";
	cin>>start;
	for (int i = 0; i < n; i++)
	{
		if(start == b[i].Starting_point){
			flag=0;
			b[i].display();
		}
	}
	if (flag)
	{
		cout<<"\nInvalid Starting Point..."<<endl<<endl;
	}						
}

void Bus::d_point(Bus b[100],int n)
{
	string destination;
	int flag=1;
	cout<<"Enter a Destination for Search : ";
	cin>>destination;
	for (int i = 0; i < n; i++)
	{
		if(destination == b[i].Destination){
			flag=0;
			b[i].display();
		}
	}	
	if (flag)
	{
		cout<<"\nInvalid Destination Point..."<<endl<<endl;
	}						
}

int main()
{
	Bus bus[100];
	int n,ch;
	cout<<"How many details of Bus you wants to enter : ";
	cin>>n;
	cout<<"Enter Data : "<<endl;
	for (int i = 0; i < n; i++)
	{
		cout<<"Bus  "<<i+1<<endl;
		bus[i].getData();
		cout<<endl;
	}
	while(1){
		cout<<"1. Display all details.\n2. Search by Starting point. \n3. Search by Destination\n4. EXIT\nEnter Choice : ";
		cin>>ch;
		switch(ch){
			case 1 : cout<<"Given details : "<<endl;
                    for (int i = 0; i < n; i++)
                    {
                        bus[i].display();
                        cout<<endl;
                    }	
				    break;
			case 2 : Bus::s_point(bus,n);
				    break;
			case 3 : Bus::d_point(bus,n);	
				    break;
			case 4 : cout<<"Thank You..."<<endl;
                    exit(0);
                    break;
			default : cout<<"Invalid Choice..."<<endl;
		}	 	 	  	 
	}
	
	return 1;
}
