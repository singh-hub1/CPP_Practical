#include<iostream>
#include<iomanip>
using namespace std;
class Flight
{
protected:
	int Flight_no;
	string Flight_Name;
public :	
	Flight(){}
	Flight(int fno, string fname){Flight_no = fno; Flight_Name = fname;}
};

class Route :protected Flight
{
protected:	
	string Source, Destination;
	
public :	
	Route(){}
	Route(string S,string D,int fno,string fname):Flight(fno,fname){Source = S; Destination = D;}
};
class Reservation:protected Route
{
	int Number_Of_Seats; 
	string Class,Travel_Date; 
	float Fare; 	
public :	
	Reservation(){}
	Reservation(int fno, string fname,string S,string D,int no_seat, string c, string date, float rate):Route(S,D,fno,fname){
		Number_Of_Seats = no_seat;
		Class = c;
		Travel_Date = date;
		Fare = rate;
	}	
	
	static void display(Reservation *p,int n);
	static void display_Business_class(Reservation *p,int n);
	
};

void Reservation::display(Reservation *p,int n){
	cout<<"Flight No | Flight Name | Source | Destination | Number Of Seats |    Class    |   Date   |   Fare   |"<<endl;
	for (int i = 0; i < n; i++){	 		cout<<setw(7)<<p[i].Flight_no<<setw(4)<<"|"<<setw(8)<<p[i].Flight_Name<<setw(6)<<"|"<<setw(6)<<p[i].Source<<setw(3)<<"|"<<setw(8)<<p[i].Destination<<setw(6)<<"|"<<setw(8)<<p[i].Number_Of_Seats<<setw(10)<<"|"<<setw(10)<<p[i].Class<<setw(4)<<"|"<<setw(9)<<p[i].Travel_Date<<setw(2)<<"|"<<setw(6)<<p[i].Fare<<setw(5)<<"|"<<endl;	
	} 
}
	
void Reservation::display_Business_class(Reservation *p,int n){
		cout<<"Flight No | Flight Name | Source | Destination | Number Of Seats |    Class    |   Date   |   Fare   |"<<endl;
	for (int i = 0; i < n; i++){
		if ("Business" == p[i].Class || "business" == p[i].Class )
		{
			cout<<setw(7)<<p[i].Flight_no<<setw(4)<<"|"<<setw(8)<<p[i].Flight_Name<<setw(6)<<"|"<<setw(6)<<p[i].Source<<setw(3)<<"|"<<setw(8)<<p[i].Destination<<setw(6)<<"|"<<setw(8)<<p[i].Number_Of_Seats<<setw(10)<<"|"<<setw(10)<<p[i].Class<<setw(4)<<"|"<<setw(9)<<p[i].Travel_Date<<setw(2)<<"|"<<setw(6)<<p[i].Fare<<setw(5)<<"|"<<endl;	

		}	 			
	} 
}

int main()
{
	int n,fno,seat;
	string fname,fclass,s,d,date;
	float rate;

	cout<<"How many records you wants to enter : ";
	cin>>n;
	
	Reservation r[n];
	
	cout<<endl<<"Enter a details : ";
	for (int i = 0; i < n; i++)
	{
		cout<<endl<<"Record "<<i+1<<endl;
		cout<<"Flight No : ";
		cin>>fno;
		cout<<"Flight Name : ";
		cin>>fname;
		cout<<"Source : ";
		cin>>s;
		cout<<"Destination : ";
		cin>>d;
		cout<<"Number Of Seats : ";
		cin>>seat;
		cout<<"Class : ";
		cin>>fclass;
		cout<<"Date : ";
		cin>>date;
		cout<<"Fare : ";
		cin>>rate;
		
		r[i] = Reservation(fno,fname,s,d,seat,fclass,date,rate);
	}

	Reservation::display(r,n);
	
	cout<<endl<<"FOR BUSINESS CLASS : "<<endl;
	
	Reservation::display_Business_class(r,n);
	
	return 1;
}
