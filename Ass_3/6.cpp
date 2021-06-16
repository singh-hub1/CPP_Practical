/*

Write a C++ program to create a class Date which contains three data members as dd, mm, and yyyy. 
Create and initialize the object by using parameterized constructor and display date in dd-mon-yyyy 
format. (Input: 19-12-2014 Output: 19-Dec-2014) Perform validation for month
*/

#include<iostream>
using namespace std;
class Date
{
	int dd,mm,yyyy;
	
public:
	Date(int day,int month,int year){
		dd=day;
		mm=month;
		yyyy=year;
	}
	void display(){
		cout<<endl;
		switch(mm){
			case 1 : cout<<dd<<" - "<<"Jan - "<<yyyy<<endl;
				 break;
			case 2 : cout<<dd<<" - "<<"Feb - "<<yyyy<<endl;
				 break;
			case 3 : cout<<dd<<" - "<<"Mar - "<<yyyy<<endl;
				 break;
			case 4 : cout<<dd<<" - "<<"Apr - "<<yyyy<<endl;
				 break;
			case 5 : cout<<dd<<" - "<<"May - "<<yyyy<<endl;
				 break;
			case 6 : cout<<dd<<" - "<<"Jun - "<<yyyy<<endl;
				 break;
			case 7 : cout<<dd<<" - "<<"Jul - "<<yyyy<<endl;
				 break;
			case 8 : cout<<dd<<" - "<<"Aug - "<<yyyy<<endl;
				 break;
			case 9 : cout<<dd<<" - "<<"Sep - "<<yyyy<<endl;
				 break;
			case 10 : cout<<dd<<" - "<<"Oct - "<<yyyy<<endl;
				 break;
			case 11 : cout<<dd<<" - "<<"Nov - "<<yyyy<<endl;
				 break;
			case 12 : cout<<dd<<" - "<<"Dec - "<<yyyy<<endl;
				 break;
		}
	}
				 						
};

int main()
{
	int day,mon,year;
	
	cout<<"Day : ";
	cin>>day;
	cout<<"Month : ";
	cin>>mon;
	cout<<"Year : ";
	cin>>year;
	
	if (day > 0 && day <=31)
	{
		if (mon > 0 && mon <=12)
		{
			Date d(day,mon,year);
			d.display();

		}
		else
			cout<<"Month is invalid... "<<endl;
	}	
	else	
		cout<<"Day is invalid..."<<endl;
	
	return 1;
}
