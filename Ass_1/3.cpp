//Writea C++ programto check if number is even or odd.

#include<iostream>
using namespace std;
int main ()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	
	if (n%2 == 0)
	{
		cout<<"It is a Even number "<<endl;
	}
	else	
		cout<<"It is a Odd number "<<endl;
	return 0;
}
