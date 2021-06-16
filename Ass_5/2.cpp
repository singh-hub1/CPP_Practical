//Write a C++ programto subtract two integer numbers of two different classes using friend function.
#include<iostream>
using namespace std;
class number2;

class number1
{
    int a;
    public:
    number1(int x)
    {
        a=x;
    }
    friend int subtraction(number1,number2);
};

class number2
{
    int b;
    public:
    number2(int y)
    {
        b=y;
    }
    friend int subtraction(number1,number2);
};
int subtraction (number1 n1,number2 n2)
{
    return (n1.a-n2.b);
}
int main()
{
    number1 n1(2);
    number2 n2(1);

    cout<<"subtraction is ::"<<subtraction(n1,n2)<<endl;
    return 0;
}