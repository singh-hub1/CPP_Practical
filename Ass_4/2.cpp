//Writea programto create memory space using the new keyword and to destroy it using delete keyword

#include<iostream>
#include <unistd.h>
using namespace std;
class Memory
{
	int *ptr;
	int size;
	
public :
Memory()
{
    
}
	Memory(int n)
    {
		ptr = new int[size];
		cout<<endl<<"Memory is created succesfully... "<<endl;
	}
	~Memory()
    {
		delete []ptr;
		cout<<endl<<"Memory is destroy...."<<endl;
	}			
};
int main()
{
	int n;
	
	cout<<"How many memory blocks you wants to enter : ";
	cin>>n;
    Memory memory;
	
	memory = Memory(n);
	
	return 1;
}
