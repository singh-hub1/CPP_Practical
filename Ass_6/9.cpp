#include<iostream>
using namespace std;
class Rational
{
	int num,dnum;
public : 
	Rational(){}
	Rational(int n,int d);
	void putData();
	Rational operator+(Rational &);
	Rational operator-(Rational &);
	Rational operator*(Rational &);
	Rational operator/(Rational &);
	void reduction(void);
};	
	
Rational::Rational(int n,int d){	
	num = n;
	dnum = d;
}

void Rational::putData(){
	if ( dnum == 0 )
		cout << "\nDIVIDE BY ZERO ERROR!!!" << '\n';
	else if ( num == 0 )
		cout<<0<<endl;
	else
		cout<<num<<"/"<<dnum<<endl;
}
	
Rational Rational::operator+(Rational &o){
	Rational t;
	
	t.num = (num*o.dnum) + (o.num*dnum);
	t.dnum = o.dnum * dnum;
	
	t.reduction();
	
	return t;
}
	


Rational Rational::operator-(Rational &o){
	Rational t;
	
	t.num = (num*o.dnum) - (o.num*dnum);
	t.dnum = o.dnum * dnum;
	
	t.reduction();
	
	return t;
}

Rational Rational::operator*(Rational &o){
	Rational t;
	
	t.num = num * o.num;
	t.dnum = dnum * o.num;
	
	t.reduction();
	
	return t;
}

Rational Rational::operator/(Rational &o){
	Rational t;
	
	t.num = o.dnum * num;
	t.dnum = o.num * dnum;
	
	t.reduction();
	
	return t;
			
}

void Rational::reduction( void )
{
	int largest = num > dnum ? num : dnum;
	int gcd = 0; // greatest common divisor

	for ( int i = 2; i <= largest; ++i )
		if ( num % i == 0 && dnum % i == 0 )
			gcd = i;

	if (gcd != 0) {
		num /= gcd;
		dnum /= gcd;
	}
}

		
int main()
{
	int n,d;
	Rational t;
	
	cout<<"For 1st Rational Number : "<<endl;
	cout<<"Numerator : ";
	cin>>n;
	
	cout<<"Denomerator : ";
	cin>>d;
	
	Rational r1(n,d);
	
	cout<<"For 2nd Rational Number : "<<endl;
	cout<<"Numerator : ";
	cin>>n;
	
	cout<<"Denomerator : ";
	cin>>d;
	
	Rational r2(n,d);
	
	cout<<endl<<"Addition : ";
	t = r1+r2;
	t.putData();
	
	cout<<endl<<"Subtration : ";
	t = r1-r2;
	t.putData();

	cout<<endl<<"Multiplication : ";
	t = r1*r2;
	t.putData();

	cout<<endl<<"Division : ";
	t = r1/r2;
	t.putData();
	

	return 1;
}
