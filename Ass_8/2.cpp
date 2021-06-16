#include<iostream>
#include<iomanip>
using namespace std;
class Media
{
protected:
	int id;
	string title;
	float price;	
public :	
	Media(){}
	Media(int id,string title){this->id = id;this->title = title;}
	virtual void display()=0; 
};

class Book :public Media
{
	int pages;
	string author;
public :	Book(){}
	Book(int id,string title,float price ,int pages,string author):Media(id,title){this->pages = pages; this->author = author; 
	this->price=price;}
	void display();
};

class CD :public Media
{
	float size;
	string company;
public :
	CD(){}
	CD(int id,string title,float price ,float size,string company):Media(id,title){this->size = size; this->company = company;this->price =price;}
	void display();
};
	
void Book::display(){
	cout<<setw(4)<<id<<setw(1)<<"|"<<setw(6)<<title<<setw(4)<<"|"<<setw(6)<<price<<setw(4)<<"|"<<setw(7)<<pages<<setw(3)<<"|"<<setw(8)<<author<<setw(3)<<"|"<<endl;
}
	
void CD::display(){
	cout<<setw(4)<<id<<setw(1)<<"|"<<setw(6)<<title<<setw(4)<<"|"<<setw(6)<<price<<setw(4)<<"|"<<setw(7)<<company<<setw(5)<<"|"<<setw(5)<<size<<setw(4)<<"|"<<endl;
}
	
int main()
{
	int id,pages,i=0,j=0;
	float price,size;
	string author,title,type,company;
	Media *b[100];
	Media *cd[100];
	
	cout<<endl<<"NOTE : If you wants to stop entering records then enter stop in type."<<endl;
	
	while (1)
	{
		cout<<endl<<"Type (Book / CD): ";
		cin>>type;
		if (type == "STOP" || type == "Stop" || type == "stop")
		{
			break;
		}
		cout<<"ID : ";
		cin>>id;
		cout<<"Title : ";
		cin>>title;
		cout<<"Price : ";
		cin>>price;
		if (type == "Book" || type == "book" || type == "BOOK")
		{
			cout<<"Pages : ";
			cin>>pages;
			cout<<"Author : ";
			cin>>author;
			
			b[i] = new Book(id,title,price,pages,author);
			i++;
			
		}
		else if (type == "CD" || type == "cd" || type == "Cd")
		{
			cout<<"Company : ";
			cin>>company;
			cout<<"Size : ";
			cin>>size;
			
			cd[j] = new CD(id,title,price,size,company);
			j++;
		}	
	}
	
	cout<<endl<<"Records of Book : "<<endl;
	cout<<" ID |  TITLE  |  PRICE  |  PAGES  |  AUTHOR  |"<<endl;
	for (int k = 0; k < i; k++)
	{
		b[k]->display();
	}

	cout<<endl<<"Records of CD : "<<endl;
	cout<<" ID |  TITLE  |  PRICE  |  COMPANY  |  SIZE  |"<<endl;
	for (int k = 0; k < j; k++)
	{
		cd[k]->display();
	}
	
	for (int k = 0; k < i; k++)
	{
		delete b[k];
	}
	for (int k = 0; k < j; k++)
	{
		delete cd[k];
	}		
		
	return 1;
}
