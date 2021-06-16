//Write C++ program to check whether number is palindrome or not?

#include<iostream>
using namespace std;
int main ()
{
	int n,rev=0,rem,temp;
	
	cout<<"Enter a number : ";
	cin>>n;
	
	temp = n;
	while (n>0)
	{
		rem = n%10;
		rev = (rev*10)+rem;
		n = n/10;
	}
	
	if (temp == rev)
	{
		cout<<"Given number is Palindrome Number "<<endl;
	}
	else
		cout<<"Given number is Not Palindrome Number "<<endl;
	
	return 0;
}
