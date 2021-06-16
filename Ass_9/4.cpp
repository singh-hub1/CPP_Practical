#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;
 int main()
{
	ifstream inFile;
	char filename[20];
 	int cnt=0;
 	string line;
 
	cout<<"Enter The File Name With Extension : ";
	cin>>filename;
 
	inFile.open(filename);
   
	if (!inFile)
	{
	cout << "File example.txt not found." << endl;
	return 1;
	}
  
	while (getline(inFile, line))
	{
		if (line.empty()) 
		continue;
		else if (line[0] == 'A')
		{
			cnt++;
		}
	}
	
	cout<<endl<<"Count of lines starts with 'A' : "<<cnt<<endl;
	
	return 1;
}	
