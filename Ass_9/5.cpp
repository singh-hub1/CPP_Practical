#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fs;
	ofstream ft;
	string str;
	char sourcefile[50], destinationfile[50];

	cout<<"Enter Source File with Extension: ";
	cin>>sourcefile;

	fs.open(sourcefile);

	if (!fs)
	{
		cout << "Error in Opening Source File...!!!"<<endl;
		exit(1);
	}

	cout<<"Enter Destination File with Extension: ";
	cin>>destinationfile;
	
	ft.open(destinationfile);

	if (!ft)
	{
		cout << "Error in Opening Destination File...!!!"<<endl;
		fs.close();
		exit(2);
	}

	if (fs && ft)
	{
		while (getline(fs, str))
		{
			ft << str << "\n";
		}

		cout << "\n\n Source File Date Successfully Copied to Destination File...!!!"<<endl;

	}
	else
	{
		cout << "File Cannot Open...!!!"<<endl;
	}

	cout <<endl<<"Open Destination File and Check !!!"<<endl;

	fs.close();
	ft.close();
}
