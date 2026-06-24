//Q. Write a C++ program to check the largest number between two numbers using nested if.

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if(a > 0)
    {
        if(a > b)
        {
            cout << "A is greater";
        }
        else
        {
            cout << "B is greater";
        }
    }
    else
    {
        cout << "A is not positive";
    }

    return 0;
}