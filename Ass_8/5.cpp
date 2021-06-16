#include<iostream>
using namespace std;
class LIST
{
protected:
	int a[100];
public :	
	LIST(){}
	virtual void store()=0;
	virtual void retrieve()=0;
};
class Stack: protected LIST		
{
	int top=-1;
public :	
	Stack(){}
	void store(){
		cout<<"Enter a element : ";
		cin>>a[++top];
	}
	
	void retrieve(){
		if (top == -1)
		{
			cout<<"Stack is empty..."<<endl;
			return;
		}
		cout<<a[top--];
	}			 
};
class Queue: public LIST		
{
	int front=-1,rear=-1;
public :	
	Queue(){}
	void store(){
		if (front == -1 && rear == -1)
		{
			front=rear=0;
		}
		cout<<"Enter a element : ";
		cin>>a[rear++];
	}
	
	void retrieve(){
		if (front == rear+1)
		{
			cout<<"Queue is empty...."<<endl;
			front=rear=-1;
			return;
		}
		cout<<a[front++]<<endl;
	}			 
};
int main()
{
	Stack s;
	Queue q;
	int ch;
	while (1)
	{
		cout<<endl<<"1. Insert in Stack "<<endl<<"2. Delete in Stack"<<endl<<"3. Insert in Queue "<<endl<<"4. Delete in Queue"<<endl<<"5. EXIT"<<endl<<"Enter a Choice : ";
		cin>>ch;
		switch(ch){
			case 1: s.store();
				break;
			case 2: s.retrieve();
				break;
			case 3: q.store();
				break;
			case 4: q.retrieve();
				break;
			case 5: cout<<"Thank You..."<<endl;
				exit(1);
			default : cout<<"Invalid Choice..."<<endl;
		}						
	}
	return 1;
}
