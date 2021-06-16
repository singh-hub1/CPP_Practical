/*
Write a C++ program tocalculate following series:
(1) + (1+2) + (1+2+3) + (1+2+3+4) + ... +(1+2+3+4+...+n)

*/

#include <iostream>
using namespace std;

int main()
{
    int i,j,n,sum = 0,tsum=0;
    
    cout<<"Input the value for nth term : ";
    cin>>n;
    cout<<endl;
    for (i = 1; i<= n; i++) 
	{
        tsum = 0;
        for (j = 1; j <= i; j++) 
		{
            sum += j;
            tsum += j;
            cout << j;
            if (j < i) 
			{
                cout << "+";
            }
        }
        cout << " = " << tsum << endl;
    }
    cout << "\nThe sum of the above series is: " << sum << endl;
}
