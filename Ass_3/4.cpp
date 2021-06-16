/*
Write a program to find sum of numbers between 1 to n using constructor where value of n will be 
passed to the constructor.
*/

#include<iostream>
using namespace std;
class Sum
{
	int total;
public:
	Sum(int n)
    {
		total=n*(n+1)/2;			
	}
	int print_total()
	{
		return total;
	}	
};
int main()
{
	int n;
	
	cout<<"Enter a value of nth number : ";
	cin>>n;
	
	Sum s(n);
	
	cout<<"Sum from 1 to "<<n<<" : "<<s.print_total()<<endl;

	return 1;
}
