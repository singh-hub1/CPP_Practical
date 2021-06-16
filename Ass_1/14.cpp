//Write a C++ program to convert decimal number to hexadecimal

#include<iostream>
using namespace std;
int main()
{
	/*int n;
	
	cout<<"Enter a number : ";
	cin>>n;
	*/
	//printf("Hexadecimal form of given number : %x\n",n);
	
	//cout<<"Hexadecimal form of given number : "<<hex<<n<<endl;
	
	int decimalNum, rem, i=0;
    	char hexaDecimalNum[50];
    	cout<<"Enter the Decimal Number: ";
    	cin>>decimalNum;
    	while(decimalNum!=0)
    	{
    	    rem = decimalNum%16;
    	    if(rem<10)
    	        rem = rem+48;
    	    else
    	        rem = rem+55;
    	    hexaDecimalNum[i] = rem;
    	    i++;
    	    decimalNum = decimalNum/16;
    	}
    	cout<<"\nEquivalent Hexadecimal Value: ";
    	for(i=i-1; i>=0; i--)
    	    cout<<hexaDecimalNum[i];
    	cout<<endl;
    	
    	
	return 1;
}
