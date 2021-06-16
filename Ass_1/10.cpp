/*Write a C++ program using switch statement which accepts two integers and an operator as 
(+, -, *, /) and performs the corresponding operation and displaystheresult.*/

#include<iostream>
using namespace std;
int main()
{
	int n1,n2,ch;
	
	cout<<"Enter Two number : ";
	cin>>n1>>n2;
	
	while (1)
	{
		cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. EXIT\nEnter Your Choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1 : cout<<"\n"<<n1+n2<<endl;
				 break;
			case 2 : cout<<"\n"<<n1-n2<<endl;
				 break;
			case 3 : cout<<"\n"<<n1*n2<<endl;
				 break;
			case 4 : cout<<"\n"<<n1/n2<<endl;
				 break;
			case 5 : cout<<"Thank You !!"<<endl;
				 exit(0);
				 break;
			default : cout<<"Invalid Choice..."<<endl;
		}
			 	 	 	 	 
	}

	return 1;
}



