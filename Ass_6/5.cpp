#include<iostream>
using namespace std;
class Vector
{
	int num;
public : 
	Vector(){}
	Vector(int n){num = n;}	void putData();
	Vector operator*(Vector &);
	friend ostream& operator<<(ostream& o,Vector& f){
	o<<"value : "<<f.num<<endl;
	return o;
	}
	friend istream& operator>>(istream& i,Vector& f){
	i>>f.num;
	
	return i;
	}

};

Vector Vector::operator*(Vector &v){
	Vector t;
	t.num = num*v.num;
	return t;
}

int main()
{
	Vector v1,v2;
	
	int n;
	cout<<"Enter a numer for V1 : ";
	cin>>n;
	
	v1 = Vector(n);
		
	cout<<"Enter a numer for V2 : ";
	cin>>n;
	
	v2 = Vector(n);
	
	Vector v3 = v1*v2;
	
	cout<<endl<<"Value of V1 ";
	cout<<v1;
	cout<<endl<<"Value of V2 ";
	cout<<v2;
	cout<<endl<<"Value of V3 ";
	cout<<v3;


	return 1;
}	
	
	

