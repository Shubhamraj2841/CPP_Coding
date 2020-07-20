#include <iostream>
using namespace std;

int main(){

    // entry controlled loops
    // for and while loops
    // exit controlled loops
    // do while loops

    // for loops
    for (int i = 0; i < 7; i++){
        cout << i << endl;
    }

    cout << "---------" << endl;

    // while loops
    int j = 0;
    while(j < 8){
        cout << j << endl;
        j++;
    }

    cout << "---------" << endl;

    // do while loops
    int k = 0;
    do{
        cout << k << endl;
        k++;
    } while(k < 5);

    return 0;
}
