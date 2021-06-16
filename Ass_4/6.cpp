/*
Write a program for combining two strings also show the execution of dynamic constructor.For this 
declare a class string with data members as name and length.
*/




#include<iostream>
#include<cstring>
using namespace std;
class Combine
{
	char *s1,*s2,*s3;
	int length1,length2,length3;
	
public:
	Combine(){}
	
	Combine(int l1,int l2){
		length1 = l1;
		length2 = l2;
		length3 = length1+length2;
		
		s1 = new char[length1+1];
		s2 = new char[length2+1];
		s3 = new char[length3+1];	 
	}
	
	void getData()
    {
		cin.ignore();
		cout<<"Enter 1st string : ";
		cin.getline(s1,length1+2);
		
		//cin.ignore();
		//cin.ignore(80,'\n');
		cout<<"Enter 2st string : ";
		cin.getline(s2,length2+2);
			
	}	
	
	void combine(){
		strcat(s3,s1);
		strcat(s3,s2);
		
		cout<<endl<<"Final string : "<<s3<<endl;
	}
	~Combine(){
		delete s1;
		delete s3;
		delete s2;	
	}	
		
			
};
int main()
{
	int l1,l2;
	
	
	cout<<"How many character you enter in 1st string : ";
	cin>>l1;
	
	cout<<"How many character you enter in 2st string : ";
	cin>>l2;
	
	Combine c(l1,l2);
	
	c.getData();
	
	c.combine();
	
	cout<<endl;
	
	

	return 1;
}
