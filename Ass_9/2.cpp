#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;
 int main()
{
	ifstream inFile;
	char filename[20];
 	int sum=0;
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

		istringstream iss(line);
		int next = 0;
		while (iss >> next) 
		sum += next;
	}

	inFile.close();

	ofstream outFile(filename,ios::app);	
	outFile<<endl<<"Sum : "<<sum;
	outFile.close();

	return 1;
}
