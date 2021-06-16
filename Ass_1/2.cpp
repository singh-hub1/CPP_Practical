// Write a C++ program to find maximum of 3 numbers

#include<iostream>
using namespace std;
int main ()
{
	int n1,n2,n3;
	cout<<"Enter a three numbers : ";
	cin>>n1>>n2>>n3;
	
	if (n1>n2)
	{
		if (n1>n3)
		{
			cout<<"Maximum in three is "<<n1<<endl;
		}
		else	
			cout<<"Maximum in three is "<<n3<<endl;
	}
	else if (n1<n2)
	{
		if (n2>n3)
		{
			cout<<"Maximum in three is "<<n2<<endl;
		}
		else
			cout<<"Maximum in three is "<<n3<<endl;
	} 
	
	return 0;
}
