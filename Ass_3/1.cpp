/*
Write a C++ program to create a class Number which contains two integer data members. Create and 
initialize the object by using default constructor, parameterized constructor. Write a member function 
to display maximum from given two numbers for allobjects.
*/

#include<iostream>
using namespace std;
class Number
{
	int n1,n2;
public:
	Number(){
		n1=0;
		n2=0;
	}	
	Number(int a,int b){
		n1=a;
		n2=b;
	}	
	
	int get_max(){
		if(n1 > n2)
			return n1;
		return n2;	
	}
		
};
int main()
{
	Number n;
	int a,b;
	
	cout<<"Enter two numbers : ";
	cin>>a>>b;
	
	n = Number(a,b);
	cout<<"Maximum in given number is : "<<n.get_max()<<endl;
	
	return 1;
}
