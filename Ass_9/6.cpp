#include <fstream>
#include <iostream>
#include <sstream>
#include<string.h>
#include<ctype.h>
using namespace std;

int vowelwords(char *p);

 int main()
{
	ifstream inFile;
	ofstream outFile;
	char sourceFile[20],destinationFile[20],temp[10],ch;
 	int i=0,cnt=0;
 	string line;
 
	cout<<"Enter The Source File Name With Extension : ";
	cin>>sourceFile;
 	

	cout<<endl<<"Enter The Destination File Name With Extension : ";
	cin>>destinationFile;
 
	inFile.open(sourceFile);
	outFile.open(destinationFile);
   
	if (!inFile)
	{
		cout << "File example.txt not found." << endl;
		return 1;
	}
  
	while (!inFile.eof())
	{
		inFile.get(ch);
		if (!isspace(ch))
		{
			temp[i++] = ch;
		}
		else 
		{
			temp[i] = '\0';
			if(vowelwords(temp))
				outFile<<temp<<" ";
			i=0;
		}		
	}

	inFile.close();
	outFile.close();
	return 1;
}

int vowelwords(char *p){
	if ( p[0] == 'a' ||  p[0] == 'e'|| p[0] == 'o'|| p[0] == 'i'|| p[0] == 'u') 
	{
		return 1;
	}
	return 0;
}	










