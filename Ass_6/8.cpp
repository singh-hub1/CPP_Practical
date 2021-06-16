#include<iostream>
using namespace std;
class Fraction
{
	int num,dnum;
public:
	Fraction(){}
	Fraction(int n,int d);
	void getData();
	Fraction operator++();
	Fraction operator++(int d);
	friend ostream& operator<<(ostream& o,Fraction& f){
		o<<"Current Fraction : "<<f.num<<"/"<<f.dnum;
		return o;
	}

	friend istream& operator>>(istream& i,Fraction& f){
		i>>f.num;
		i>>f.dnum;
	
		return i;
	}
	int operator<(Fraction&);
};

Fraction::Fraction(int n,int d){
	num = n;
	dnum = d;
}

Fraction Fraction:: operator++(){
	Fraction t;
	
	t.num = num + (1*dnum);
	t.dnum = dnum;
	
	num = t.num;
	
	return t;
}

Fraction Fraction:: operator++(int d){
	Fraction t;
	
	t.num = num;
	t.dnum = dnum;
	
	num = num + (1*dnum);
	
	return t;
}

void Fraction::getData(){
	cout<<endl<<"Enter a Numerator : ";
	cin>>num;
			
	cout<<endl<<"Enter a Denomerator : ";
	cin>>dnum;
}
		
int Fraction::operator<(Fraction& o){
	
	if (num*o.dnum < dnum*o.num )
	{
		return 1;
	}	
	return 0;	
}		


int main()
{
	int n,d;
	Fraction f1,f2,t;
	
	cout<<"For 1st Fraction : "<<endl;
	f1.getData();
	
	cout<<endl<<"For 2nd Fraction : "<<endl;
	f2.getData();
	
	cout<<"Pre-increment 1st: ";
	t = ++f1;
	cout<<t<<"\n";
	
	cout<<"Post-increment 1st: ";
	t = f1++;
	cout<<t<<"\n\n";
	cout<<f1;
	
	cout<<endl<<endl<<"Pre-increment 2nd: ";
	t = ++f2;
	cout<<t<<"\n\n";
	
	cout<<"Post-increment 2nd: ";
	t = f2++;
	cout<<t<<"\n\n";
	cout<<f2;
	
	if (f1 < f2)
	{
		cout<<endl<<"1st fraction is less than 2nd.."<<endl;
	}
	else	
		cout<<endl<<"1st fraction is greater than 2nd.."<<endl;
	
	return 1;
}
