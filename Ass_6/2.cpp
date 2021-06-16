#include<iostream>
using namespace std;
class Employee{
	int salary;
public:
	Employee(){}
	Employee(int a);
	void getData(int a);
	void getData();
	int putData();	
	Employee operator++();
	Employee operator--();
	Employee operator++(int d);
	Employee operator--(int d);
};

Employee::Employee(int a){
	salary = a;
}

void Employee::getData(int a){
	salary = a;
}

void Employee::getData(){
	cout<<endl<<"Enter a number : ";	
	cin>>salary;
}

int Employee::putData(){
	return salary;
	
}

Employee Employee::operator++(){
	Employee t;
	salary +=1000;
	t.salary=salary;
	
	return t;
}

Employee Employee::operator++(int d){
	Employee t;
	t.salary = salary; 
	salary +=1000;
	return t;
}
	
Employee Employee::operator--(){
	Employee t;
	salary -=1000;
	t.salary=salary;
	
	return t;
}

Employee Employee::operator--(int d){
	Employee t;
	t.salary = salary; 
	salary -=1000;
	
	return t;
}

int main()
{
	int salary;
	
	cout<<endl<<"NOTE : for pre/post increment/decrement we use value 1000 so enter a salary greater than 1000"<<endl<<endl;
	cout<<"Enter a salary : ";
	cin>>salary;
	
	Employee employee(salary);
	cout<<"Pre-increment : "<<(++employee).putData()<<endl;
	cout<<"Pre-decrement : "<<(--employee).putData()<<endl;
	cout<<"Post-increment : "<<employee++.putData()<<endl;
	cout<<"Current value : "<<employee.putData()<<endl;
	cout<<"Post-decrement : "<<employee--.putData()<<endl;
	cout<<"Current value : "<<employee.putData()<<endl;

	return 1;
}
