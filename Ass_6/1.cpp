#include<iostream>
using namespace std;
class Number{
	int n;
public:
	Number(){}
	Number(int a);
	void getData(int a);
	void getData();
	int putData();	
	Number operator++();
	Number operator++(int d);
};

Number::Number(int a){
	n = a;
}

void Number::getData(int a){
	n = a;
}

void Number::getData(){
	cout<<endl<<"Enter a number : ";	
	cin>>n;
}

int Number::putData(){
	return n;
	
}

Number Number::operator++(){
	Number t;
	t.n=++n;
	
	return t;
}

Number Number::operator++(int d){
	Number t;
	t.n = n++; 
	
	return t;
}
	
int main()
{
	int num;
	
	cout<<"Enter a number : ";
	cin>>num;
	
	Number number(num);
	
	cout<<"Pre-increment : "<<(++number).putData()<<endl;
	cout<<"Post-increment : "<<number++.putData()<<endl;
	cout<<"Current value : "<<number.putData()<<endl;

	return 1;
}
