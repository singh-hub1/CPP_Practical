//Write a C++ program to generate multiplicationtable.

#include<iostream>
using namespace std;
int main()
{
	int n;
	
	cout<<"Enter a number for get multiplication table : ";
	cin>>n;
	cout<<endl;
	
	for (int i = 1; i <= 10; i++){				cout<<n<<"*"<<i<<"="<<n*i<<endl;				
	}

	return 0;
}
