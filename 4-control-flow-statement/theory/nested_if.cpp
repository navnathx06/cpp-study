#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter Number: ";
    cin >> num;

    if(num > 10){

        if(num < 20){

            cout << "Number is between 10 and 20";
        }
        else{
            cout << "Number is greater than 20";
        }
    }

    else{
        cout << "Number is less than 10";
    }

    return 0;
}