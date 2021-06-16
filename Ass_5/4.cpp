/*
Write a C++ program to calculate function to determine simple interest byusing default arguments as 
follows
int calculate(int p,int n=10,int r=7)- Returns SI by specifying no of years and rate of interest
*/

#include<iostream>
using namespace std;
int calculate(int p,int n=10,int r=7){
	return (p*r*n)/100;
}	
int main()
{
	int p;
	
	cout<<"Principle amount : ";
	cin>>p;

	cout<<"Simple Interest (rate = 7 and year = 10) : "<<calculate(p)<<endl;

	return 1;
}	
	
