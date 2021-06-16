//Write a C++ program tocheck whether the number is Armstrong or not?

#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	int n,cnt=0,rem,sum=0,temp;
	
	cout<<"Enter a number : ";
	cin>>n;
	
	temp=n;
	while (temp>0)
	{
		temp=temp/10;
		cnt++;
	}
	
	temp=n;
	while(temp>0)
	{
		rem = temp%10;
		sum = sum+pow(rem,cnt);
		temp=temp/10;
	}
	
	if(n == sum)
		cout<<"Given number is Armstrong Number."<<endl;
	else	
		cout<<"Given number is Not Armstrong Number."<<endl;
			
	return 0;
}
