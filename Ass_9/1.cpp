#include<iostream>
#include<fstream>
#include<ctype.h>
using namespace std;
int main ()
{
	char ch;
	int ucnt,lcnt,dcnt,scnt;
	ucnt=lcnt=dcnt=scnt=0;
	
	ifstream ifile;
	ifile.open("a.txt",ios::in);
	if (!ifile)
	{
		cout<<"error in opening file";
		exit(0);
	}
	while (!ifile.eof())
	{
		ifile.get(ch);
		if (isupper(ch))
		{
			ucnt++;	
		}
		else if (islower(ch))
		{
			lcnt++;
		}
		else if (isdigit(ch))
		{
			dcnt++;
		}
		else if (isspace(ch))
		{
			scnt++;
		}
	}	
	ifile.close ();
	
	cout<<"Count of Upper Case Alphabets : "<<ucnt<<endl;
	cout<<"Count of Lower Case Alphabets : "<<lcnt<<endl;
	cout<<"Count of Digits : "<<dcnt<<endl;
	cout<<"Count of White Space : "<<scnt<<endl;
}
