#include<iostream>
using namespace std;
class Account
{
protected:
	string Acc_Holder_Name, Acc_Holder_Contact_No;
public :	
	Account(){}
	Account(string name, string contact){Acc_Holder_Name = name; Acc_Holder_Contact_No = contact;} 
	
			

};

class Saving_Account: protected Account
{
	string S_Acc_No; 
	float Balance;
public :	
	Saving_Account(){}
	Saving_Account(string name, string contact,string ano, float bal):Account(name,contact){
		S_Acc_No = ano;
		Balance = bal;
	}
	static void deposit(Saving_Account *p,string acc,float bal,int n){
		for (int i = 0; i < n; i++)
		{
			if (p[i].S_Acc_No == acc)
			{
				p[i].Balance += bal;
			}
		}
		
	}
	
	static void withdraw(Saving_Account *p,string acc,float bal,int n){
		for (int i = 0; i < n; i++)
		{
			if (p[i].S_Acc_No == acc)
			{
				if ((p[i].Balance-bal) >= 2000)
				{
					p[i].Balance -= bal;
				}
				else if ((p[i].Balance - bal + 500) >= 0 )
				{
					cout<<"Current Balance is less than minimum balance so service charge is 500 "<<endl;
					p[i].Balance -= bal + 500;
				}
				else cout<<endl<<"Withdrow not possible..."<<endl;
	
			}
				
		}
	}	
	static void display_Balance(Saving_Account *p,string acc,int n){
		for (int i = 0; i < n; i++)
		{
			if (p[i].S_Acc_No == acc)
			{
				cout<<"Balance : "<<p[i].Balance;
				return;
			}
		}
		cout<<endl<<"Invalid Account No. "<<endl;
	}
};

class Current_Account: protected Account
{
	string C_Acc_No;
	float Balance;
public :	
	Current_Account(){}
	Current_Account(string name, string contact,string ano, float bal):Account(name,contact){
		C_Acc_No = ano;
		Balance = bal;
	}

	static void withdraw(Current_Account *p,string acc,float bal,int n){
		for (int i = 0; i < n; i++)
		{
			if (p[i].C_Acc_No == acc)
			{
				if ((p[i].Balance-bal) >= 5000)
				{
					p[i].Balance -= bal;
				}
				else if ((p[i].Balance - bal + 1000) >= 0 )
				{
					cout<<"Current Balance is less than minimum balance so service charge is 1000 "<<endl;
					p[i].Balance -= bal + 1000;
				}
				else cout<<endl<<"Withdrow not possible..."<<endl;

			}
	
		}
	}				
	
	static void deposit(Current_Account *p,string acc,float bal,int n){
		for (int i = 0; i < n; i++)
		{
			if (p[i].C_Acc_No == acc)
			{
				p[i].Balance += bal;
			}
		}
		
	}
	
	static void display_Balance(Current_Account *p,string acc,int n){
		for (int i = 0; i < n; i++)
		{
			if (p[i].C_Acc_No == acc)
			{
				cout<<"Balance : "<<p[i].Balance;
				return;
			}
		}
		cout<<endl<<"Invalid Account No. "<<endl;	
	}
		
	
				
};

int main()
{
	string name,accno,contact,acctype;
	float bal;
	
	int scnt=0,ccnt=0,ch;
	
	Saving_Account s[100];
	Current_Account c[100];
	
	cout<<endl<<"NOTE :  1. Minimum Balance for Saving Account is 2000.\n\t2. Minimum Balance for Saving Account is 5000.\n\t3. Intrest for Saving Account is 10% Per Year and no intrest fot Current Account.\n\t4. If Balance falls below minimum balance then service charge for saving account is 500 and for current account 1000\n\t5. You wants to stop enter details then type stop in account type and enter it."<<endl<<endl;
	
	for (int i = 0; 1; i++)
	{
		cout<<endl<<"Type of Account (Saving/Current) : ";
		cin>>acctype;
		if (acctype == "Stop" || acctype == "stop")
		{
			break;
		}
		cout<<"Holder Name : ";
		cin>>name;
		cout<<"Contact No. : ";
		cin>>contact;
		cout<<"Account No. : ";
		cin>>accno;
		cout<<"Amount : ";
		cin>>bal;
		
		if (acctype == "Saving" || acctype == "saving" )
		{
			if (bal >= 2000)
			{
					s[scnt] = Saving_Account(name, contact,accno,bal);
					scnt++;
			}
			else	cout<<endl<<"Amount is low..."<<endl;
		}
		else if (acctype == "Current" || acctype == "current" )
		{
			if (bal >= 5000)
			{
					c[ccnt] = Current_Account(name,contact,accno,bal);
					ccnt++;
			}
			else	cout<<endl<<"Amount is low..."<<endl;
			
		}
		else	cout<<endl<<"Invalid Account Type..."<<endl;
		
	}


	while (1)
	{
		cout<<endl<<"1. Deposit Money."<<endl<<"2. Withdraw Money."<<endl<<"3. Display Balance."<<endl<<"4. EXIT"<<endl<<"Enter a choice : ";
		cin>>ch;
		switch(ch){
			case 1: cout<<endl<<"Enter Account Type (Saving/Current) : ";
				cin>>acctype;
				cout<<"Account No. ";
				cin>>accno;
				cout<<"Amount : ";
				cin>>bal;
				if (acctype == "Saving" || acctype == "saving")
				{
					Saving_Account::deposit(s,accno,bal,scnt);
				}
				else
					Current_Account::deposit(c,accno,bal,ccnt);
				break;
			case 2: cout<<endl<<"Enter Account Type (Saving/Current) : ";
				cin>>acctype;
				cout<<"Account No. ";
				cin>>accno;
				cout<<"Amount : ";
				cin>>bal;
				if (acctype == "Saving" || acctype == "saving")
				{
					Saving_Account::withdraw(s,accno,bal,scnt);
				}
				else
					Current_Account::withdraw(c,accno,bal,scnt);	
				break;		
			case 3: cout<<endl<<"Enter Account Type (Saving/Current) : ";
				cin>>acctype;
				cout<<"Account No. ";
				cin>>accno;
				if (acctype == "Saving" || acctype == "saving")
				{
					Saving_Account::display_Balance(s,accno,scnt);
				}
				else
					Current_Account::display_Balance(c,accno,scnt);	
				break;
			case 4: cout<<endl<<"Thank You !!!"<<endl;	
				exit(1);
			default : cout<<endl<<"Invalid Choice..."<<endl;
		}
	}			
	return 1;
}
