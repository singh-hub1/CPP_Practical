//Write a C++ program tofind factorial.

#include<iostream>
using namespace std;
int main ()
{
	int n,fact=1;
	cout<<"Enter a number for get factorials : ";
	cin>>n;
	
	while (n>1)
	{
		fact=fact * n;
		n--;
	}
	
	cout<<"Factorials of given number is : "<<fact<<endl;
	
	return 0;
}
