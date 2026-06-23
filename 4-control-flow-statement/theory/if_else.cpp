#include <iostream>
using namespace std;

int main() {

    int budget;
    cout << "Enter your Budget: ";

    //input
    cin >> budget;

    if(budget > 2000000){
        cout << "you can buy Thar" << endl;
    }

    else {
        cout << "you can't buy Thar";
    }
    
    return 0;
}