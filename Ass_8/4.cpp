#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class Student
{
protected: 
	int id;
	char contact[10];
	string name,faculty;
	float physics_marks,chem_marks,maths_marks;	
public :	
	Student(){}
	Student(int id, char cont[10], string name,string faculty, float physics_marks ,float chem_marks, float maths_marks){
		this->id = id;
		strcpy(contact,cont);
		this->name = name;
		this->physics_marks = physics_marks;
		this->chem_marks = chem_marks;
		this->maths_marks = maths_marks;
		this->faculty = faculty;
	}	
	Student(int id, char cont[10], string name,float ,float physics_marks, float chem_marks){
		this->id = id;
		strcpy(contact,cont);
		this->name = name;
		this->physics_marks = physics_marks;
		this->chem_marks = chem_marks;
		this->maths_marks = 0;
	}	


	virtual void display()=0;
};

class Engineering:public Student
{
	 float marks_cet;
public :	
	Engineering(){}
	Engineering(int id, char cont[10], string name,string faculty,float physics_marks, float chem_marks, float maths_marks,float cet):Student(id,cont,name, faculty,physics_marks,chem_marks,maths_marks){
		this->marks_cet = cet;
	}
	void display(){
		cout<<setw(5)<<id<<setw(2)<<"|"<<setw(8)<<name<<setw(5)<<"|"<<setw(13)<<contact<<setw(5)<<"|"<<setw(8)<<faculty<<setw(6)<<"|"<<setw(8)<<physics_marks<<setw(9)<<"|"<<setw(9)<<chem_marks<<setw(9)<<"|"<<setw(8)<<maths_marks<<setw(6)<<"|"<<setw(7)<<marks_cet<<setw(5)<<"|"<<endl;
	}	
};

class Science:public Student
{
	 
public :
	Science(){}	
	Science(int id, char cont[10], string name,string faculty,float physics_marks ,float chem_marks, float maths_marks):Student(id,cont,name, faculty,physics_marks,chem_marks,maths_marks){}
		void display(){
		cout<<setw(5)<<id<<setw(2)<<"|"<<setw(8)<<name<<setw(5)<<"|"<<setw(13)<<contact<<setw(5)<<"|"<<setw(8)<<faculty<<setw(6)<<"|"<<setw(8)<<physics_marks<<setw(9)<<"|"<<setw(9)<<chem_marks<<setw(9)<<"|"<<setw(8)<<maths_marks<<setw(6)<<"|"<<endl;
	}	
		
};
class Medical:public Student
{
	 float marks_neet,bio_marks; 
	 
public :
	Medical(){}	
	Medical(int id, char cont[10], string name,string faculty,float physics_marks, float chem_marks, float bio_marks,float neet):Student(id,cont,name, faculty,physics_marks,chem_marks,maths_marks){
		this-> marks_neet= neet;
		this->bio_marks = bio_marks;
	}
	void display(){
		cout<<setw(5)<<id<<setw(2)<<"|"<<setw(8)<<name<<setw(5)<<"|"<<setw(13)<<contact<<setw(5)<<"|"<<setw(8)<<faculty<<setw(6)<<"|"<<setw(8)<<physics_marks<<setw(9)<<"|"<<setw(9)<<chem_marks<<setw(9)<<"|"<<setw(8)<<bio_marks<<setw(8)<<"|"<<setw(6)<<marks_neet<<setw(7)<<"|"<<endl;
	}
};	

int main()
{
	Student *eng[100],*sci[100],*med[100];
	int id,i,k,j;
	i=0;
	k=0;
	j=0;
	char contact[10];
	string name,faculty,stream;
	float physics_marks,chem_marks,maths_marks;	
	float neet,cet,bio;	

	cout<<endl<<"NOTE : If you wnats to stop inserting records then type stop in stream."<<endl;
	
	while (1)
	{
		cout<<endl<<"Stream (Engineering / Science / Medical) : ";
		cin>>stream;
		if (stream == "STOP" || stream == "stop" || stream == "Stop" )
		{
			break;
		}
		cout<<"Student ID : ";
		cin>>id;
		cout<<"Name : ";
		cin>>name;
		cout<<"Contact No. : ";
		cin>>contact;
		cout<<"Faculty : ";
		cin>>faculty;
		cout<<"Marks of Physics : ";
		cin>>physics_marks;
		cout<<"Marks of Chemistry : ";
		cin>>chem_marks;
		if (stream == "Medical" || stream == "medical")
		{
			cout<<"Marks of Biology : ";
			cin>>bio;
			cout<<"Marks of NEET : ";
			cin>>neet;
			med[i] = new Medical(id,contact,name,faculty,physics_marks ,chem_marks,bio,neet);
			i++;
			
		}
		else if (stream == "Engineering" || stream == "engineering")
		{
			cout<<"Marks of Maths : ";
			cin>>maths_marks;
			cout<<"Marks of CET : ";
			cin>>cet;

			eng[j] = new Engineering(id,contact,name,faculty,physics_marks ,chem_marks,maths_marks,cet); 
			j++;
			
		}
		else{	
			cout<<"Marks of Maths : ";
			cin>>maths_marks;
			
			sci[k] = new Science(id,contact,name,faculty,physics_marks ,chem_marks,maths_marks);
			k++;
				
		}	
		
	}
	
	cout<<endl<<"Given Records of Medical : "<<endl;
	cout<<"  ID  |    NAME    |   CONTACT NO.   |   FACULTY   |  PHYSICS MARKS | CHEMISTRY MARKS | BIOLOGY MARKS | NEET MARKS |"<<endl;
	for (int n = 0; n < i; n++)
	{
		med[n]->display();
	}
	
	cout<<endl<<"Given Records of Engineering : "<<endl;
	cout<<"  ID  |    NAME    |   CONTACT NO.   |   FACULTY   |  PHYSICS MARKS | CHEMISTRY MARKS | MATHS MARKS | CET MARKS |"<<endl;
	for (int n = 0; n < j; n++)
	{
		eng[n]->display();
	}
	
	cout<<endl<<"Given Records of Science : "<<endl;
	cout<<"  ID  |    NAME    |   CONTACT NO.   |   FACULTY   |  PHYSICS MARKS | CHEMISTRY MARKS | MATHS MARKS |"<<endl;
	for (int n = 0; n < k; n++)
	{
		sci[n]->display();
	}
	
	
	return 1;
}
