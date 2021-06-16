#include<iostream>
using namespace std;
class Array
{
	float *a;
	int n;
public:
	Array(){}
	Array(int l,int t[100]);
	void display();
	friend void operator++(Array& obj);
	friend void operator--(Array& obj); 
	~Array();		
};
Array::Array(int l,int t[100]){
	n = l;
	a = new float[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = t[i];
	}
}	
void Array::display(){
	cout<<"Current elements are : "<<endl;
	for (int i = 0; i < n; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void operator++(Array& obj){
	for (int i = 0; i < o.n; i++)
	{
		++obj.a[i];
	}
}	
void operator--(Array& obj){
	for (int i = 0; i < o.n; i++)
	{
		--obj.a[i];
	}
}
Array:: ~Array(){
	delete []a;
}	
int main()
{
	int num;
	int temp[100];
	cout<<"How many elements you wants to enter : ";
	cin>>num;
	cout<<"Enter a elements : "<<endl;
	for (int i = 0; i < n; i++)
	{
		cin>>temp[i];
	}
	
	Array array(num,temp);
	array.getData();
	++array;
	cout<<endl<<"After Pre-increment : "<<endl;
	array.putData();
	--array;
	cout<<endl<<"After Pre-increment : "<<endl;
	array.display();
	
	
	return 1;
}
