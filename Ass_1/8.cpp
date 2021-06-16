/*
Write a C++ program to print Floyd‟s triangle. 
1
2 3
4 5 6
7 8 9 10
*/

#include<iostream>
using namespace std;
int main ()
{
	int row,k=1;
	
	cout<<"Enter a how many rows you want's : ";
	cin>>row;
	
	for (int i = 1; i<row; i++)
	{
		for (int j=1; j<=i; j++)
		{
			cout<<" "<<k;
			k++; 
		}
		cout<<endl;
	}
	
	return 0;
}

