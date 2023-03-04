#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // Prompt th user to enter a string
    cout << "ASCII values for your string: " << endl;

    // loop through each char of the string using a range based loop
    for (char c : str){
        int code = static_cast<int>(c); // convert each char to its ASCII code value using the static_cast<int> function.
        cout << code << endl; // print the code values
    }
    cout << endl; // print a new line
}
