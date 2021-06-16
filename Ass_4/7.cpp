/*
A book shop maintains the inventory of books that are being sold at the shop. The list includes details 
such as author_name, title, price, publisher, and stock position.If customer wants to purchase a book he 
gives details of book along with the number of copies required. If requested copies are available the total 
cost of requested copies is displayed; otherwise the message “Required copies not in stock” is displayed. 
Design a system using a class called Bookshop with suitable member functions and constructor. (Use new 
operator to allocate memory)
*/

#include<iostream>
using namespace std;
class BookShop
{
	string author_name, title,publisher;
	int price,stock_position;
	
public:
	void getData(){
		cout<<"Name : ";
		cin>>title;
		cout<<"Author Name : ";
		cin.ignore();
		getline(cin,author_name);
		cout<<"Publisher : ";
		cin>>publisher;
		cout<<"Price : ";
		cin>>price;
		cout<<"No. of Books Available (In Stock) : ";
		cin>>stock_position;
		cout<<endl;
	}
	
	static void sellBook(BookShop *b, int n){
		string bname;
		
		cout<<"Enter a book name : ";
		cin>>bname;
		
		for (int i = 0; i <n ; i++)
		{
			if (bname == b[i].title)
			{
				int n;
				cout<<endl<<"How many copies you want : ";
				cin>>n;
				if (n <= b[i].stock_position)
				{
					cout<<endl<<"Total : "<<b[i].price*n<<endl;
					return;
					
				}
				cout<<endl<<n<<" Copies not Available..."<<endl;
				return;
			}
		}
		cout<<endl<<"Book is not Available..."<<endl;
	}	
};
int main()
{
	int n;
	
	cout<<"How many book details you wants to enter : ";
	cin>>n;
	
	BookShop *books = new BookShop[n];
	
	for (int i = 0; i < n; i++)
	{
		cout<<endl<<"Book "<<i+1<<endl;
		books[i].getData();
	}
	
	cout<<endl<<"For Sale a book : "<<endl;
	BookShop::sellBook(books,n);

	delete []books;
	
	return 1;
}
