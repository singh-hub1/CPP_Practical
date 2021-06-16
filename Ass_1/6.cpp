//Write a C++ program to check whether number is perfect

#include<iostream>
using namespace std;
int main ()
{
	int n,sum=0;
	
	cout<<"Enter a number : ";
	cin>>n;
	
	for(int i=1;i<=n/2;i++)
	{
		if (n%i == 0)
		{
			sum=sum+i;
		}
	}	
	
	if (sum == n)
	{
		cout<<"It is a Perfect Number."<<endl;
	}
	else
		cout<<"It is a Not Perfect Number."<<endl;
		
	return 0;
}
