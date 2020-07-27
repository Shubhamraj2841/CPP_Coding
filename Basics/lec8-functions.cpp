#include <iostream>
using namespace std;

// function declaration
int max_of_two_nos(int, int);

int main(){
    int x;
    int y;
    cout << "Enter the value of x:" << endl;
    cin >> x;
    cout << "Enter the value of y:" << endl;
    cin >> y;

    int max_val = max_of_two_nos(x, y);
    cout << "The max value out of x and y is " << max_val << endl;

    return 0;
}

int max_of_two_nos (int a, int b){

    if (a > b){
        return a;
    }
    else if (b > a){
        return b;
    }
}
