#include <iostream>
using namespace std;

int main()
{
    // Variable declarations
    int x;
    int y;
    int z;

    cout << "Enter three intergers: ";
    cin >> x >> y >> z;

    // declare an initialize the variable result 
    int result = x * y * z;

    cout << "The product is " << result << endl;
}

/*
  In C++ Variables have to be declared with their type
  there are 5 variable types namely
  Integers, Char, Floats, Doubles, and Booleans
*/

int intVariable;
char charVariable;
float floatVariable;
double doubleVariable;
bool booleanVariable;

// Get input from the command line

#include <iostream>
using namespace std;


int main() {
    string name;
    string address;
    string phoneNumber;
    
    cout << "Enter name: "<<endl;
    cin >> name;
    
    cout << "Enter address: "<<endl;
    cin >> address;
    
    cout << "Enter phone number: "<<endl;
    cin>> phoneNumber;
    
    cout << "Name is: ";
    cout << name<<endl;
  
    cout << "Address is: ";
    cout << address << endl;
  
    cout << "Phone number is: ";
    cout << phoneNumber << endl;
    return 0;
}