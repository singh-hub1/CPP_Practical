#include<iostream>
using namespace std;
class Matrix
{
	int a[100][100],row,colunm;

public:
	Matrix(){}
	Matrix(int r,int c);
	void getData();
	void display();
	Matrix operator*(Matrix & o);
	Matrix operator+(Matrix & o);
	int operator==(Matrix & o);	
};

Matrix::Matrix(int r,int c){
	row = r;
	colunm = c;
}

void Matrix::getData(){
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colunm; j++)
		{
			cin>>a[i][j];
		}
	}
}

void Matrix::display(){
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colunm; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

Matrix Matrix::operator*(Matrix & o){
	Matrix t;
	
	if (row != o.colunm)
	{
		cout<<endl<<"Multiplication is not Possible..."<<endl;
		t.row = t.colunm =0;
		return t;
	}
	t.row = row;
	t.colunm =colunm;
	cout<<endl<<"Multiplication of given Matrix : "<<endl;
	for(int i = 0; i < row; ++i)
        	for(int j = 0; j < o.colunm; ++j)
            		for(int k = 0; k < colunm; ++k)
            		{
                		t.a[i][j] += a[i][k] * o.a[k][j];
            		}
         
   	return t;
}  	         			

Matrix Matrix::operator+(Matrix & o){
	Matrix t;
	
	if (row != o.row || colunm != o.colunm)
	{
		cout<<endl<<"Addition is not Possible..."<<endl;
		t.row = t.colunm =0;
		return t;
	}	
	t.row = row;
	t.colunm = colunm;
	cout<<endl<<"Addition of given Matrix : "<<endl;
	for(int i = 0; i < row; ++i)
        	for(int j = 0; j < colunm; ++j)
           		 t.a[i][j] = a[i][j] + o.a[i][j];
         
   	return t;
}  	         			

int Matrix::operator==(Matrix & o){

	for(int i = 0; i < row; ++i)
        	for(int j = 0; j < colunm; ++j){
           		 if(a[i][j] != o.a[i][j])
				return 0;
		}
		
	return 1;
}				

int main()
{
	int r,c;
	
	cout<<"Enter a row of 1st matrix : ";
	cin>>r;
	cout<<"Enter a column of 1st matrix : ";
	cin>>c;

	Matrix m1(r,c);
	m1.getData();
	
	cout<<endl<<"Enter a row of 2nd matrix : ";
	cin>>r;
	cout<<"Enter a column of 2nd matrix : ";
	cin>>c;
	
	Matrix m2(r,c);
	
	m2.getData();
	
	Matrix m3,m4;
	 
	m3 = m1+m2;
	m3.display();
	 
	m4 = m1*m2;
	m4.display();
	
	if (m1 == m2)
	{
		cout<<endl<<"Both are Equal..."<<endl;
	}
	else	
		cout<<endl<<"Both are not Equal..."<<endl;
		

	return 1;
}
