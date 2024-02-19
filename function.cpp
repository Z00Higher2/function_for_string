// Author: Zuhayer Tashin and Steven Lai
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: HW E5.6
// Write a function
// string middle(string str)
// that returns a string containing the middle character in str if the length of str is odd,
// or the two middle characters if the length is even. For example, middle("middle")
// returns "dd".

#include <iostream>
#include <string>
using namespace std;

string middle(string str){ // string middle function

    if (str.length() % 2 == 0){ // if string length is even,

        str = str.substr(((str.length() - (str.length() / 2)) - 1), 2); // takes 2 characters from string which are the middle characters

    }else if (str.length() % 2 != 0){ // if string length is odd
        
        str = str.substr(((str.length() - (str.length() / 2)) - 1), 1); // takes 1 character from string which are the middle character

    }

    return str; // return the string to the function
}

int main(){

    string middle_char; // Declared middle character for string
    cout << "Enter a string: ";
    cin >> middle_char;

    cout << middle(middle_char); // prints out the middle characters

    return 0;
}