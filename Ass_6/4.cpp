#include<iostream>
using namespace std;
class ComplexNumber
{
	int real,imaginary;

public:
	ComplexNumber(){}
	ComplexNumber(int r, int i);
	void getData();
	void getData(int r,int i);
	void putData();	
	ComplexNumber operator+(ComplexNumber& o);
	ComplexNumber operator*(ComplexNumber& o);
};

ComplexNumber::ComplexNumber(int r, int i){
	real = r;
	imaginary = i;
}
	
void ComplexNumber::getData(){
	cout<<"Enter a real : ";
	cin>>real;
	
	cout<<"Enter a imaginary : ";
	cin>>imaginary;
	
}

void ComplexNumber::getData(int r, int i){
	real = r;
	imaginary = i;
	
}

void ComplexNumber::putData(){
	cout<<endl<<real<<" + "<<imaginary<<"i";
}	

ComplexNumber ComplexNumber::operator+(ComplexNumber& o){
	ComplexNumber t;
	t.real = o.real+real;
	t.imaginary = o.imaginary + imaginary;

	return t;
}
		
ComplexNumber ComplexNumber::operator*(ComplexNumber& o){
	ComplexNumber t;
	t.real = real * o.real - imaginary * o.imaginary;
	t.imaginary = real * o.imaginary + imaginary * o.real;

	return t;
}		

int main()
{
	int r,i;
	
	cout<<"For 1st Complex Number : "<<endl;
	cout<<"Enter a real number : ";
	cin>>r;
	
	cout<<"Enter a imaginary numbr : ";
	cin>>i;
	
	ComplexNumber complexNumber1(r,i); 
	
	cout<<endl<<"For 2nd Complex Number : "<<endl;
	cout<<"Enter a real number : ";
	cin>>r;
	
	cout<<"Enter a imaginary numbr : ";
	cin>>i;
	
	ComplexNumber complexNumber2(r,i);
	
	ComplexNumber complexNumber3,complexNumber4;
	
	complexNumber3 = complexNumber1+complexNumber2;
	
	complexNumber4 = complexNumber1*complexNumber2;
	 	
	cout<<endl<<"Addition : ";
	complexNumber3.putData();
	
	cout<<endl<<endl<<"Multiplication : ";
	complexNumber4.putData();
	
	cout<<endl;
	
	return 1;
}
