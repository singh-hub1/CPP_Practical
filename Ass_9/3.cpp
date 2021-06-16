#include <fstream>
#include <iostream>
#include <sstream>
#include<string.h>
#include<ctype.h>
using namespace std;
 int main()
{
	ifstream IN;
	char filename[20],word[10],temp[10],ch;
 	int i=0,cnt=0;
 	string line;
	cout<<"Enter The File Name With Extension : ";
	cin>>filename;
 	cout<<"Enter a word : ";
 	cin>>word;
	IN.open(filename);
	if (!IN)
	{
		cout << "File example.txt not found." << endl;
		return 1;
	}
	while (!IN.eof())
	{
		IN.get(ch);
		if (!isspace(ch))
		{
			temp[i++] = ch;
		}
		else 
		{
			temp[i] = '\0';
			if(strcmp(word,temp)==0)
				cnt++;
			i=0;
		}		
	}
	IN.close();
	cout<<endl<<"Occurrence of given word : "<<cnt<<endl;
	return 1;
}
