/*
Write the definition for a class called „point‟ that has x & y as integer data members. Use copy 
constructor to copy one object to another. (Use Default and parameterized constructor to initialize the 
appropriate objects)
*/

#include<iostream>
using namespace std;
class Point
{
	float a,b;
public:
	Point(int x,int y)
    {
		a=x;
		b=y;
	}
	Point(const Point &p)
    {
		a=p.a;
		b=p.b;
	}
	void print(){
		cout<<"Value of x : "<<a<<endl;
		cout<<"Value of y : "<<b<<endl;
	}				
};
int main()
{
	int x,y;
	cout<<"Enter a value x : ";
	cin>>x;
	cout<<"Enter a value y : ";
	cin>>y;
	Point p1(x,y),p2(p1);
	p2.print();
	return 1;
}
