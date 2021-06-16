/*
Write a c++ program that determines a given number is prime or nor .(use Dynamic Constructor to
allocate and Destructor to free memory of an object)
*/

#include<iostream>
using namespace std;
class Prime
{
	int *n;
public:
	Prime(){
		n = new int;
	}
	~Prime(){
		delete n;
	}
	void getData(){
		cout<<"Enter a number : ";
		cin>>*n;
	}
	
	void find_prime(){
		
		for (int i = 2; i*i <=*n; i++)
		{
			if((*n % i) == 0){
				cout<<"It is not a Prime Number..."<<endl;
				return;
			}	
		}	
		cout<<"It is Prime Number...."<<endl;
	}
	
				
};
int main()
{
	Prime p;
	
	p.getData();
	
	p.find_prime();
	
	return 1;
}
