/*
Create a class telephone containing name, telephone number and city as a data member and write 
necessary member functions for the following (use functionoverloading).
a. Search the telephone number with givenname
b. Search the name with given telephone number
c. Search all customer in a givencity
*/

#include <iostream>
#include <cstring>
#include <string>
using namespace std;
class Telephone
{
    string name;
    long int tel_no;
    char *city;

public:
    Telephone()
    {
        city = new char[10];
    }

    void getData()
    {
        cout << "Name : ";
        cin >> name;
        cout << "Telephone No. : ";
        cin >> tel_no;
        cout << "City : ";
        cin >> city;
    }

    void put_name()
    {
        cout << name << endl;
    }

    void put_tel()
    {
        cout << tel_no << endl;
    }

    void put_city()
    {
        cout << city << endl;
    }

    int search(string n)
    {
        if (n == name)
            return 1;
        return 0;
    }

    int search(long int t)
    {
        if (tel_no == t)
            return 1;
        return 0;
    }

    bool search(char *c)
    {
        if (strcmp(city, c) == 0)
            return 1;
        return 0;
    }
};

int main()
{

    int n, ch;
    char *c = new char[10];
    int f = 1;
    string name;
    int flag = 1;
    long int tel;
    int i;

    cout << "How many details you wants to enter : ";
    cin >> n;

    Telephone t[n];

    for (int i = 0; i < n; i++)
    {
        cout << endl
             << "Data " << i + 1 << endl;
        t[i].getData();
    }

    /*for (int i = 0; i < 2; i += 1)
	{
		t.putData();
	}*/

    while (1)
    {
        cout << endl
             << "1. Search telephone " << endl
             << "2. Search name" << endl
             << "3. search customer by city" << endl
             << "4. EXIT" << endl
             << "Enter a choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cin.ignore();
            cout << endl
                 << "Enter name : ";
            cin >> name;

            for (int i = 0; i < n; i++)
            {
                if (t[i].search(name))
                {
                    t[i].put_tel();
                    flag = 0;
                }
            }
            if (flag)
                cout << "Name is Invalid..." << endl;

            cout << endl;
            break;
        case 2:
            cin.ignore();
            cout << endl
                 << "Enter Telephone No. : ";
            cin >> tel;

            for (i = 0; i < n; i++)
            {
                if (t[i].search(tel))
                {
                    t[i].put_name();
                    break;
                }
            }
            if (i == n)
            {
                cout << "Telephone No. is Invalid..." << endl;
            }
            cout << endl;

            break;
        case 3:
            cin.ignore();
            cout << endl
                 << "Enter a city : ";
            cin >> c;
            for (int i = 0; i < n; i++)
            {
                if (t[i].search(c))
                {
                    t[i].put_name();
                    f = 0;
                }
            }
            if (f)
            {
                cout << "City is invalid..." << endl;
            }
            delete[] c;

            cout << endl;
            break;
        case 4:
            cout << "Thank You !!" << endl;
            exit(1);

        default:
            cout << "Invalid Choice... " << endl;
        }
    }
    return 1;
}
