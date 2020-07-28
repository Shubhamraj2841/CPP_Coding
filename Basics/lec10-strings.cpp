#include <iostream>
#include <string>
using namespace std;

int main(){

    // start by specifying type of variable which is string in this case
    string variable = "Hello World";
    cout << variable << endl;

    // concatenation
    string fs = "Lakshita";
    string ls = "Mohanty";
    string name = fs + " " + ls;

    cout << name << endl;

    // append
    string my_name = fs.append(ls);
    cout << my_name << endl;

    // we can add two numbers using + operator
    // we can concatenate two strings using + operator
    // however we'll get an error if we try to add a string and a number

    // string length
    cout << "The length of string Mohanty is " << ls.length() << endl;

    // accessing characters in the string
    cout << "First character of fs is " << fs[0] << endl;
    // we can also change the characters of the string likewise

    // suppose we want to input a string
    // cin doesn't take in any more characters after whitespace
    // string n;
    // cout << "Enter your name ";
    // cin >> n;
    // cout << n << endl;

    // use getline
    string new_n;
    cout << "Enter new name ";
    getline (cin, new_n);
    cout << new_n << endl;
}
