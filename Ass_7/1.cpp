#include<iostream>
#include<iomanip>
using namespace std;
class Product
{
protected:
	int Product_id;
	string Product_name;
	float price;
public :	
	Product(){}
	Product(int p_id,string p_name,float price){
		this->Product_id = p_id;
		this->Product_name = p_name;
		this->price = price;
	}
	
				
};

class Discount:protected Product	
{
	float Discount_In_Percentage;
public :
	Discount(){}	
	Discount(int p_id,string p_name,float price):Product(p_id,p_name,price){
		if(price >= 1000){
			Discount_In_Percentage = 10;
		}
		else if (price > 500)
		{
			Discount_In_Percentage = 7;
		}
		else if (price > 300)
		{
			Discount_In_Percentage = 5;
		}	
		else 
			Discount_In_Percentage = 0;	
		
	}
	static float getTotal(Discount *p,int n);	
	static void display(Discount *p,int n);
};

float Discount::getTotal(Discount *p,int n){
	float total=0.0;
	for (int i = 0; i < n; i++)
	{
	
		total += p[i].price - (p[i].price * p[i].Discount_In_Percentage)/100 ;
		
			
	}

	return total;
}
	
void Discount::display(Discount *p,int n){
	cout<<endl<<"Product ID | Product Name | Price | Discount (In %) | After Discount |"<<endl;
	
	for (int i= 0; i < n; i++)
	{
		cout<<setw(6)<<p[i].Product_id<<setw(6)<<"|"<<setw(9)<<p[i].Product_name<<setw(6)<<"|"<<setw(5)<<p[i].price<<"  |"<<setw(6)<<p[i].Discount_In_Percentage<<setw(12)<<"|"<<setw(8)<<p[i].price - (p[i].price * p[i].Discount_In_Percentage)/100<<setw(9)<<"|"<<endl; 
	}
	
	cout<<endl<<"TOTAL : "<<Discount::getTotal(p,n)<<endl;
}
	

int main()
{
	int n,pid;
	string pname;
	float price;
	
	cout<<"How many records you wants to enter : ";
	cin>>n;
	
	Discount d[n];
	
	cout<<endl<<"Enter a details : "<<endl;
	for (int i = 0; i < n; i++)
	{
		cout<<"Product "<<i+1<<endl;
		cout<<"ID : ";
		cin>>pid;
		cout<<"Name : ";
		cin>>pname;
		cout<<"Price : ";
		cin>>price;
		
		d[i] = Discount(pid,pname,price);
	}
	
	Discount::display(d,n);		

	return 1;
}
