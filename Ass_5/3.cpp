//Write a C++ program to overload function volume and find volume of cube, cylinder and sphere.

#include<iostream>
using namespace std;

float volume(float);
float volume(float,float);

int main()
{
	int ch;
	
	while (1)
	{
		cout<<endl<<"1. Volume of Cube "<<endl<<"2. Volume of Cylinder "<<endl<<"3. Volume of Sphere "<<endl<<"4. EXIT"<<endl<<"Enter a choice : ";
		cin>>ch;
		
		switch(ch){
			case 1: float side;
				cout<<"Enter a side : ";
				cin>>side;
				
				cout<<endl<<"Volume of Cube : "<<volume(side)<<endl;
				
				break;
			case 2: float radius, height;
				cout<<"Enter a Radius : ";
				cin>>radius;
				
				cout<<"Enter a Height : ";
				cin>>height;

				cout<<endl<<"Volume of Cylinder : "<<volume(radius,height)<<endl;
				
				break;	
			case 3: float r;
				cout<<"Enter a Radius : ";
				cin>>r;
				
				cout<<endl<<"Volume of Sphere : "<<4/3*3.14*volume(r)<<endl;
				
				break;	
			case 4: cout<<"Thank You !!!";
				exit(1);
			default : cout<<"Invalid Choice ";
		}		
	}

	return 1;
}

float volume(float s){
	return s*s*s;
}
	
float volume(float r,float h){
	return 3.14*r*r*h;
}
	


