#include<iostream>
#include<fstream>
using namespace std;

class student
{
   int roll;
   char name[30];
   float marks;
public:
   student() { }
   void getData(); // get student data from user
   void putIntoFile(ofstream &out); // display data
};

void student :: getData() {
   cout << "\nEnter Roll No. :: ";
   cin >> roll;
   cin.ignore(); // ignore the newline char inserted when you press enter
   cout << "\nEnter Name :: ";
   cin.getline(name, 30);
   cout << "\nEnter Marks :: ";
   cin >> marks;
}

void student :: putIntoFile(ofstream &out) {
   out << "\nRoll No. :: " << roll << endl;
   out << "\nName :: " << name << endl;
   out << "\nMarks :: " << marks << endl;
}

int main()
{
   ofstream outFile;
   int i,n;

   outFile.open("a.txt", ios::out); // open file for writing
    cout << "\nWriting Student information to the file :- " << endl;
    cout <<endl<<"How many records you wants to enter : " << endl;
    cin>>n;
   student s[n]; 

   for (i = 0; i < n; i++)
    {
      s[i].getData();
      
    }
   for (i = 0; i < n; i++)
    {
      s[i].putIntoFile(outFile);
      
    }


   outFile.close(); 
   
   return 1;
}
