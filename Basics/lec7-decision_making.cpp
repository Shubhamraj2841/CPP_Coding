#include <iostream>
using namespace std;

int main(){

    // if statements
    int a = 10;
    if (a > 5){
        cout << "a is greater than 5" << endl;
    }

    // if else statements
    if (a < 15){
        cout << "a is less than 15" << endl;
    }
    else {
        cout << "a is greater than 15" << endl;
    }

    // nested if statements
    if (a == 10){
        if (a > 20){
            cout << "a is greater than 20" << endl;
        }
    }

    // if-else-if ladder
    if (a == 10)
        cout << "a is equal to 10" << endl;
    else if (a == 15)
        cout << "a is equal to 15" << endl;
    else if (a == 20)
        cout << "a is equal to 20" << endl;
    else
        cout << "a is not present" << endl;

    // switch statements
    int x = 2;

    switch(x){
        case 1:
            cout << "x equals 1" << endl;
            break;
        case 2:
            cout << "x equals 2" << endl;
            break;
        case 3:
            cout << "x equals 3" << endl;
            break;
        default:
            cout << "Neither 1, 2 or 3" << endl;
            break;
    }

    // jump statements
    // break takes us out of the nearest loop
    // continue takes us to the beginning of the loop
    // return returns the flow of execution
}
