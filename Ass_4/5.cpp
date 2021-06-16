/*
Write a C++ program to create a class which contains two dimensional integer array of size mXn. Write a 
member function to display transpose of entered matrix. (Use Dynamic Constructor for allocating memory 
and Destructor to free memory of an object)
*/

#include<iostream>
using namespace std;
class Array2D
{
	int **a,r,c;
	
public:
	Array2D(int row, int col);
	void getData();
	void display();
	void transpose();
	~Array2D();
};
Array2D::Array2D(int row, int col){
		r = row;
		c = col;	
		a = new int*[r];
			
		for (int i = 0; i < r; i++)
		{
			a[i] = new int[c];
		}
	}
void Array2D::getData(){
		cout<<"Enter a data : "<<endl;
		
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				cin>>a[i][j];
			}
		}	
	}
	void Array2D::display(){
		cout<<"Orignal Matrix are : "<<endl;
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				cout<<"\t"<<a[i][j];
			}
			cout<<endl;
		}	
	}
void Array2D::transpose(){
	cout<<endl<<"Transpose Matrix are : "<<endl;
	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < r; j++)
		{
			cout<<"\t"<<a[j][i];
		}
		cout<<endl;
	}	
	
}
Array2D::~Array2D(){
	for (int i = 0; i < c; i++)
	{
		delete a[i];
	}
	delete a;
}	
 int main()
{

	int r,c;
	cout<<"How many Row : ";
	cin>>r;
	cout<<"How many Column : ";
	cin>>c;
	Array2D a2d(r,c);
	a2d.getData();
	a2d.display();
	a2d.transpose();
	return 1;
}
