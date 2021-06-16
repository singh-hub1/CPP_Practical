/*Define a class string to perform different operations:SPPU,Pune C++ Laboratory Workbook Page 9
Set B
a. To find length ofstring.
b. To concatenate twostrings.
c. To reverse thestring.
d. To compare two strings.
*/

#include<iostream>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;
class String
{
	string s;
public:
	void getString();
	void concatenate();
	void length();
	void compare();
	void revers();
	void display();
};
void String::concatenate()
{
	string s1;
	cout<<"Enter string to concatenate : ";
	cin>>s1;
	
	s = s+s1;
	
	cout<<s<<endl;	
}
	
void String::getString()
{
	cout<<"Enter a String : ";
	getline(cin, s);
}
	
void String::length()
{
	cout<<"Length of String is : "<<s.length()<<endl;
}
	
void String::compare()
{
	string s1;
	
	cout<<"Enter string to compare orignal string : ";
	cin>>s1;
	
	if (s.compare(s1))
	{
		cout<<"Both Strings are different."<<endl;
	}
	else	
		cout<<"Both Strings are same"<<endl;
}
	
void String::revers()
{
	reverse(s.begin(), s.end());
	cout<<s<<endl;
}	

void String::display()
{
	cout<<s<<endl;
}	

		
int main()
{
	String str;
	int ch;
	
	str.getString();
	while (1)
	{
		cout<<"\n1. To find length of string.\n2. To concatenate two strings.\n3. To reverse the string.\n4. To compare two strings.\n5. Display String.\n6. EXIT\nEnter your choice : ";
		cin>>ch;
		
		switch(ch){
			case 1 : str.length();
				 break;
			case 2 : str.concatenate();
				 break;
			case 3 : str.revers();
				 break;
			case 4 : str.compare();
				 break;
			case 6 : cout<<"Thank You..."<<endl;
				 exit(0);
			case 5 : str.display();
				 break;	 
			default : cout<<"Invalid Choice.."<<endl;
		}
				 	 	 	 
	}

	return 1;
}
