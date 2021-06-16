/*
Write a C++ program to implement a class „printdata‟ to overload „print‟ function asfollows:
void print(int) - outputs value - <int>, that is, value followed by the value of the integer. eg. print(10) 
outputs value -<10>
void print(char *) – outputs value –“char*”, that is, value followed by the string in double quotes. eg 
print(“hi”) outputs value-“hi”
void print(int n, char *)- display first n characters from the given string. eg print(3,”Object”)- outputs 
value –“Obj”
*/

#include <iostream>
#include <string.h>
using namespace std;

class printdata
{
public:
    void print(int no)
    {
        cout << "\n<" << no << ">";
    }

    // void print(int n1, int n2)
    // {
    //     cout << "\n[<" << n1 << "> , <" << n2 << ">]";
    // }

    void print(char *str)
    {
        cout << "\"" << str << "\"";
    }


    void print(int n, char *str)
    {
        char *str1 = new char[20];
        int j;
        for (int i = 0; str[i] != '\0'; i++)
        {
            j = i;
            if (i == n)
                break;
            else
            {
                str1[i] = str[i];
            }
        }
        str1[j] = '\0';
        cout << "\n\"" << str1 << "\"";
    }

    // void print(char ch, char *str)
    // {
    //     int i, count = 0;
    //     for (int i = 0; str[i] != '\0'; i++)
    //     {
    //         if (str[i] == ch)
    //             count++;
    //     }
    //     cout << "\n Count = " << count;
    // }
};

int main()
{
    printdata ob1;

    int num, n1, n2;
    char *str, ch;

    cout << "\n Enter num : ";
    cin >> num;
    ob1.print(num);

    // cout << "\n Enter n1 and n2 : ";
    // cin >> n1 >> n2;
    // ob1.print(n1, n2);


    str = new char[30];
    cout << "\n Enter string : ";
    cin >> str;
    ob1.print(str);


    cout << "\n Enter string :";
    cin >> str;
    cout << "\n Enter no of charcters to be display : ";
    cin >> num;
    ob1.print(num, str);

    // cout << "\n Enter string :";
    // cin >> str;

    // cout << "\n Enter character to display occurance : ";
    // cin >> ch;

    // ob1.print(ch, str);
    return 0;
}