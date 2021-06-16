/*Write a C++ program to create a class District. Having district_code, district_name, area_sqft, population, 
literacy_rate. For displaying details use appropriate manipulators. The program should contain following 
menu :
a. Accept details of n district
b. Display details of district.
c. Display details of district having highest literacy rate.
d. Display details of district having least population.
*/

#include<iostream>
using namespace std;
class District
{
	int district_code,population; 
	char district_name[10];
	float area_sqft,literacy_rate;
public:
	void getData();
	void display();
	static void max(District d[10],int n);
	static void min(District d[10],int n);
};

void District::getData()
{
	cout<<"District Code : ";
	cin>>district_code;
	cout<<"District Name : ";
	cin>>district_name;
	cout<<"Area sqft : ";
	cin>>area_sqft;
	cout<<"Population : ";
	cin>>population;
	cout<<"Literacy Rate : ";
	cin>>literacy_rate;
}

void District::display()
{
	cout<<"District Code : "<<district_code<<endl;
	cout<<"District Name : "<<district_name<<endl;
	cout<<"Area sqft : "<<area_sqft<<endl;
	cout<<"Population : "<<population<<endl;
	cout<<"Literacy Rate : "<<literacy_rate<<endl;
}	

void District::max(District d[10],int n)
{
	float max_literacy=d[0].literacy_rate;
	int loc=0;
	for (int i = 1; i < n; i++)
	{
		if (max_literacy < d[i].literacy_rate)
		{
			max_literacy = d[i].literacy_rate;	
			loc=i;	
		}	
	}	
	cout<<"\nDeitails of Heighest Literacy Rate having District : "<<endl;
	d[loc].display();
}

void District::min(District d[10],int n)
{
	int min_population=d[0].population,loc=0;
	for (int i = 1; i < n; i++)
	{
		if (min_population < d[i].population)
		{
			min_population = d[i].population;	
			loc=i;	
		}	
	}	
	cout<<"\nDeitails of Minimum Population having District : "<<endl;
	d[loc].display();
}

int main()
{
	District d[10];
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"\nEnter a data "<<endl;
	for (int i = 0; i < n; i++)
	{
		cout<<"Enter Data for District "<<i+1<<endl;
		d[i].getData();
		cout<<endl;
	}
	cout<<"Given Data are : "<<endl;
	for (int i = 0; i < n; i++)
	{
		cout<<"District "<<i+1<<endl;
		d[i].display();
		cout<<endl;
	}
	District::min(d,n);
	District::max(d,n);
	return 1;
}
