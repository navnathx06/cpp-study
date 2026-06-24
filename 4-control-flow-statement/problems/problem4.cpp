//Q. Write a C++ program to find grade of a student using if-else if-else statement.

#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter marks: ";
    cin >> marks;

    if(marks >= 90)
    {
        cout << "Grade A";
    }
    else if(marks >= 60)
    {
        cout << "Grade B";
    }
    else if(marks >= 40)
    {
        cout << "Grade C";
    }
    else
    {
        cout << "Fail";
    }

    return 0;
}