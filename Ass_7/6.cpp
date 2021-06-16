#include<iostream>
#include<iomanip>
using namespace std;
class Train
{
protected:
	int Train_no;
	string Train_Name;
public :	
	Train(){}
	Train(int fno, string fname){Train_no = fno; Train_Name = fname;}
};

class Route :protected Train
{
protected:	
	string Source, Destination;
	int Route_id;
	
public :	
	Route(){}
	Route(string S,string D,int Route_id,int fno,string fname):Train(fno,fname){Source = S; Destination = D; this->Route_id = Route_id;}
};
class Reservation:protected Route
{
	int Number_Of_Seats; 
	string Train_Class,Travel_Date; 
	float Fare; 	
public :	
	Reservation(){}
	Reservation(int fno, string fname,int Route_id, string S,string D,int no_seat, string c, string date, float rate):Route(S,D,Route_id,fno,fname){
		Number_Of_Seats = no_seat;
		Train_Class = c;
		Travel_Date = date;
		Fare = rate;
	}	
	
	static void display(Reservation *p,int n);
	static void displayFirst(Reservation *p,int n);
	static void displaySecond(Reservation *p,int n);

	
};

void Reservation::display(Reservation *p,int n){
	cout<<"Train No  |  Train Name  | Route ID |  Source  |  Destination  |  Number Of Seats  |    Class    |    Date    |   Fare   |"<<endl;
	for (int i = 0; i < n; i++){	 		cout<<setw(7)<<p[i].Train_no<<setw(4)<<"|"<<setw(8)<<p[i].Train_Name<<setw(7)<<"|"<<setw(6)<<p[i].Route_id<<setw(5)<<"|"<<setw(7)<<p[i].Source<<setw(4)<<"|"<<setw(10)<<p[i].Destination<<setw(6)<<"|"<<setw(10)<<p[i].Number_Of_Seats<<setw(10)<<"|"<<setw(9)<<p[i].Train_Class<<setw(5)<<"|"<<setw(10)<<p[i].Travel_Date<<setw(3)<<"|"<<setw(6)<<p[i].Fare<<setw(5)<<"|"<<endl;	
	} 
}
	
void Reservation::displayFirst(Reservation *p,int n){
	cout<<"Train No  |  Train Name  | Route ID |  Source  |  Destination  |  Number Of Seats  |    Class    |    Date    |   Fare   |"<<endl;
	for (int i = 0; i < n; i++){
		if ("First" == p[i].Train_Class || "first" == p[i].Train_Class )
		{
			cout<<setw(7)<<p[i].Train_no<<setw(4)<<"|"<<setw(8)<<p[i].Train_Name<<setw(7)<<"|"<<setw(6)<<p[i].Route_id<<setw(5)<<"|"<<setw(7)<<p[i].Source<<setw(4)<<"|"<<setw(10)<<p[i].Destination<<setw(6)<<"|"<<setw(10)<<p[i].Number_Of_Seats<<setw(10)<<"|"<<setw(9)<<p[i].Train_Class<<setw(5)<<"|"<<setw(10)<<p[i].Travel_Date<<setw(3)<<"|"<<setw(6)<<p[i].Fare<<setw(5)<<"|"<<endl;	

		}	 			
	} 
}
void Reservation::displaySecond(Reservation *p,int n){
	cout<<"Train No  |  Train Name  | Route ID |  Source  |  Destination  |  Number Of Seats  |    Class    |    Date    |   Fare   |"<<endl;
	for (int i = 0; i < n; i++){
		if ("Second" == p[i].Train_Class || "second" == p[i].Train_Class )
		{
			cout<<setw(7)<<p[i].Train_no<<setw(4)<<"|"<<setw(8)<<p[i].Train_Name<<setw(7)<<"|"<<setw(6)<<p[i].Route_id<<setw(5)<<"|"<<setw(7)<<p[i].Source<<setw(4)<<"|"<<setw(10)<<p[i].Destination<<setw(6)<<"|"<<setw(10)<<p[i].Number_Of_Seats<<setw(10)<<"|"<<setw(10)<<p[i].Train_Class<<setw(4)<<"|"<<setw(10)<<p[i].Travel_Date<<setw(3)<<"|"<<setw(6)<<p[i].Fare<<setw(5)<<"|"<<endl;	

		}	 			
	} 
}


int main()
{
	int n,fno,seat,rid;
	string fname,fclass,s,d,date;
	float rate;

	cout<<"How many records you wants to enter : ";
	cin>>n;
	
	Reservation r[n];
	
	cout<<endl<<"Enter a details : ";
	for (int i = 0; i < n; i++)
	{
		cout<<endl<<"Record "<<i+1<<endl;
		cout<<"Train No : ";
		cin>>fno;
		cout<<"Train Name : ";
		cin>>fname;
		cout<<"Route ID : ";
		cin>>rid;
		cout<<"Source : ";
		cin>>s;
		cout<<"Destination : ";
		cin>>d;
		cout<<"Number Of Seats : ";
		cin>>seat;
		cout<<"Train Class : ";
		cin>>fclass;
		cout<<"Date : ";
		cin>>date;
		cout<<"Fare : ";
		cin>>rate;
		
		r[i] = Reservation(fno,fname,rid,s,d,seat,fclass,date,rate);
	}
	Reservation::display(r,n);
	cout<<endl<<endl<<"Which class revervation you wants to see : ";
	cin>>fclass;
	if (fclass == "First" || fclass == "first" )
	{
		cout<<endl<<"FOR FIRST CLASS : "<<endl;
		Reservation::displayFirst(r,n);
		
	}
	if (fclass == "Second" || fclass == "second" )
	{
		cout<<endl<<"FOR Second CLASS : "<<endl;
		Reservation::displaySecond(r,n);	
	}
	return 1;
}
