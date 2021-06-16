/*
Write a C++ program using class to calculate simple interest amount. (Use parameterized constructor 
with default value for rate)
*/

#include<iostream>
using namespace std;
class Simple_intrest
{
	int time,value;
	float rate,total;
public:
	void get_total(int v, int t, float r=5){
		total = v+(((v*r)/100)*t);
	}	
	float put_total(){
		return total;
	}				
};
int main()
{
    Simple_intrest s;
	int time,value;
	float rate;
	cout<<"Enter a Data : "<<endl;
	cout<<"Value : ";
	cin>>value;
	cout<<"Time (In year) : ";
	cin>>time;
	cout<<"Rate : ";
	cin>>rate;
	s.get_total(value,time,rate);
	cout<<"\nTotal (having 5 rate of instrest) : "<<s.put_total()<<endl;
	return 1;
}
