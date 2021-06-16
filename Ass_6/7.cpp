#include<iostream>
#include<string.h>
using namespace std;
class Str
{
	char *s;
	int length;
public :
	Str(){}
	Str(int );
	void getData();
	void putData();
	void operator!();
	Str operator+(Str&);
	char operator[](int );
	int operator==(Str&);
	void operator<(Str&);
		
};
Str::Str(int n){
	length = n;
	s = new char[length+1];
}
	
void Str::getData(){
	cout<<"Enter a String : ";
	cin>>s;
}
void Str::putData(){
	cout<<s<<endl;
}	
void Str::operator!(){
	for (int i = 0; i < length; i++)
	{
		if (isupper(s[i]))
		{
			s[i] = tolower(s[i]);	
		}
		else	
			s[i] = toupper(s[i]);
	}
}	
Str Str::operator+(Str& s1){
	Str t(length+s1.length+1);
	
	strcpy(t.s,s);
	strcat(t.s,s1.s);
	
	return t;
}
	
	
char Str::operator[](int n){

	if (n>=0 && n<length)
	{
		return s[n];
	}
	return '\0';
}
	
int Str::operator==(Str& s1){
	
	if (strcmp(s,s1.s)==0)
	{
		return 1;
	}
	return 0;
}
	
void Str::operator<(Str& s){
	if (length == s.length)
	{
		cout<<endl<<"Both are  equal..."<<endl;
	}
	else if (length > s.length)
	{
		cout<<endl<<"1st Str  is greater than 2nd String..."<<endl;
	}
	else	cout<<endl<<"2nd Str  is greater than lnd String..."<<endl;

}		


int main()
{
	int ch,n;
	//char s;
	Str Str2;
	
	cout<<"Enter a length of String : ";
	cin>>n;
	
	Str Str1(n);
	Str1.getData();
	
	while (1)
	{
		cout<<endl<<"1. Reverse all character (small to capital / capital to small)"<<endl<<"2. To print a character present at specified index"<<endl<<"3. To compare length of two Strings"<<endl<<"4. To check equality of two Strings"<<endl<<"5. To concatenate two Strings"<<endl<<"6. EXIT"<<endl<<"Enter a choice : ";
		//cin.ignore(100);
		cin>>ch;
		switch(ch){
			case 1: !Str1;
				Str1.putData();
				break;
			case 2: cout<<endl<<"Enter a index : ";
				cin>>n;
				cout<<endl<<Str1[n]<<endl;
				break;
			case 3: cout<<"Enter a length of String : ";
				cin>>n;
				Str2 = Str(n);
				Str2.getData();
				
				Str1 < Str2;
				
				break;
			case 4: cout<<"Enter a length of String : ";
				cin>>n;
				Str2 = Str(n);
				Str2.getData();
				
				if (Str1 == Str2)
				{
					cout<<endl<<"Both are equal "<<endl;
				}		
				else	
					cout<<endl<<"Both are not equal "<<endl;

				break;
			case 5: cout<<"Enter a length of String : ";
				cin>>n;
				Str2 = Str(n);
				Str2.getData();
				
				Str2 = Str1+Str2;
				Str2 .putData();
				
				break;
			case 6: cout<<endl<<"Thank You !!!"<<endl;	
				exit(1);
			default : cout<<endl<<"Invalid Choice...."<<endl;
			
		}
	}	
	
	return 1;
}
