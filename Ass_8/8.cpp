#include<iostream>
using namespace std;
class Media
{
protected:
	int id;
	string name,idate,ddate;
	int flag=1;
public :	
	Media(){}
	virtual void add()=0;
	virtual void issue()=0;
	virtual void deposit()=0;
	virtual string getname()=0;
	//virtual string classname()=0;
};

//Media::tcnt = 0;
//Media::bcnt = 0;

class Tape: public Media
{
protected:
	string company;
	float size;
public :
	Tape(){}
	void add();
	void deposit();
	void issue();	
	string getname();
};


void Tape::add(){
	cout<<endl<<"Enter a ID : ";
	cin>>id;
	cout<<"Enter a Name : ";
	cin>>name;
	cout<<"Enter a Company : ";
	cin>>company;
	cout<<"Size : ";
	cin>>size;
	//tcnt++;
}	

void Tape::issue(){
	
	if (flag)
	{
		cout<<endl<<"Enter a Issue Date : ";
		cin>>idate;
		flag = 0;
		//tcnt--;
	}
	else
		cout<<endl<<"Tape is already issued..."<<endl;
}		

void Tape::deposit(){
	if (flag==0)
	{
		cout<<endl<<"Enter a Deposit Date : ";
		cin>>idate;
		flag = 1;
		//tcnt++;
	}
	else
		cout<<endl<<"Tape is already deposit..."<<endl;	
}		

string Tape::getname(){
	return name;
}	

/*string Tape::classname(){
	return "Tape";
}*/	
	
class Book: public Media
{
protected:
	string publication,author;
public :
	Book(){}
	void add();
	void deposit();
	void issue();	
	string getname();
};

void Book::add(){
	cout<<endl<<"Enter a ID : ";
	cin>>id;
	cout<<"Enter a Name : ";
	cin>>name;
	cout<<"Enter a Publication : ";
	cin>>publication;
	cout<<"Author : ";
	cin>>author;
	//bcnt++;
}	

void Book::issue(){
	
	if (flag)
	{
		cout<<endl<<"Enter a Issue Date : ";
		cin>>idate;
		flag = 0;
	}
	else
		cout<<endl<<"Book is already issued..."<<endl;
}	

void Book::deposit(){
	if (flag==0)
	{
		cout<<endl<<"Enter a Deposit Date : ";
		cin>>idate;
		flag = 1;
	}
	else
		cout<<endl<<"Tape is already deposit..."<<endl;
	//bcnt--;	
}		
	
string Book::getname(){
	return name;
}		
/*string Book::classname(){
	return "Book";
}*/	


int main()
{
	Media *m[100];
	int n=0,ch,flag;
	string type,name;
	
	cout<<endl<<"NOTE : If you wants to stop add details of book/tape then type stop on 'Enter type' "<<endl;
	
	while(1){
		cout<<endl<<"Enter Type (Book/Tape) : ";
		cin>>type;
		if (type == "STOP" || type == "Stop" || type == "stop" )
		{
			break;	
		}
		else if (type == "Book" || type == "book")
		{
			m[n]=new Book;
			m[n]->add();
			n++;
		}
		else if (type == "TAPE" || type == "Tape" || type == "tape")
		{
			m[n] = new Tape;
			m[n]->add();
			n++;
		}	
		else	cout<<endl<<"Invalid Type..."<<endl;
		
		
	}		
	
	while (1)
	{
		cout<<endl<<"1. Issue Book."<<endl<<"2. Deposit Book."<<endl<<"3. Issue Tape."<<endl<<"4. Deposit Tape."<<endl<<"5. EXIT"<<endl<<"Enter a choice : ";
		cin>>ch;
		flag = 1;
		switch(ch){
			case 1: cout<<endl<<"Enter a name : ";
				cin>>name;
				for(int i=0; i<n; i++){
					if(m[i]->getname() == name){
						m[i]->issue();
						flag=0;
					}
				}
				if(flag)
					cout<<endl<<"Book is not Found..."<<endl<<endl;
				break;
			case 2: cout<<endl<<"Enter a name : ";
				cin>>name;
				for(int i=0; i<n; i++){
					if(m[i]->getname() == name){
						m[i]->deposit();
						flag=0;
					}
				}			
				if(flag)
					cout<<endl<<"Book is not Found..."<<endl<<endl;
				break;
			case 3:	cout<<endl<<"Enter a name : ";
				cin>>name;
				for(int i=0; i<n; i++){
					if(m[i]->getname() == name){
						m[i]->issue();
						flag=0;
					}
				}
				if(flag)
					cout<<endl<<"Tape is not Found..."<<endl<<endl;
				break;
			case 4:	cout<<endl<<"Enter a name : ";
				cin>>name;
				for(int i=0; i<n; i++){
					if(m[i]->getname() == name){
						m[i]->deposit();
						flag=0;
					}
				}			
				if(flag)
					cout<<endl<<"Tape is not Found..."<<endl<<endl;
				break;
			case 5: cout<<endl<<"Thank You !!!"<<endl;	
				exit(1);
			default: cout<<"Invalid Choice ...."<<endl;
		}			
	}			
			

	return 1;
}
