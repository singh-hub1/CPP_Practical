//Write a C++ program to print area of circle, square and rectangle usinginlinefunction.

#include<iostream>
using namespace std;
inline float circle_area(float r){
	return 3.14*r*r;
}
inline float rect_area(float l, float w){
	return l*w;
}
inline float square_area(float s){
	return s*s;
}
int main()
{
	int ch;
	
	
	while (1)
	{
		cout<<"1. Area of Circle"<<endl<<"2. Area of Rectangle"<<endl<<"3. Area of Square"<<endl<<"4. Exit"<<endl<<"Enter a choice : ";
		cin>>ch;
		
		switch(ch){
			case 1: float radius;
				cout<<endl<<"Enter a radius : ";
				cin>>radius;
				
				cout<<"Area of Circle : "<<circle_area(radius)<<endl<<endl;
				
				break;
			case 2: float length,width;
				cout<<endl<<"Enter a length : ";
				cin>>length;
				cout<<endl<<"Enter a width : ";
				cin>>width;
								
				cout<<"Area of Rectangle : "<<rect_area(length,width)<<endl<<endl;
				
				break;
			case 3:	float side;
				cout<<endl<<"Enter a side : ";
				cin>>side;
				
				cout<<"Area of Square : "<<square_area(side)<<endl<<endl;
				
				break;		
			case 4: cout<<"Thank You !!!"<<endl;
				exit(1);
			default : cout<<"Invalid Choice !!"<<endl<<endl;
		}	   		
	}

	return 1;
}













