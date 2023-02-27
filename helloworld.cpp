/*
  This file contains the code to print hello world
  to the screen in c++

  line 11 is what allows the program to output data to the screen
  line 13 begins program execution
  line 15 displays the message
  line 17 indicates the program ended successfully
*/ 

// #include <iostream>

int main()
{
    std::cout << "Hello Word\n";

    return 0;
}

/*
  We can make the code cleaner by removing the std
  at the beginning of cout on line 15 and the  return statement
  at line 17.
*/ 

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World\n";
}

/*
  using namespace std; at any namespace scope introduces every name
  from the namespace std into the global namespace so we don have to writes std all the time

  In C++, a namespace is a collection of related names or identifiers
  (functions, class, variables) which helps to separate these identifiers
  from similar identifiers in other namespaces or the global namespace.
  The identifiers of the C++ standard library are defined in a namespace called std.

  we removed the explicit return statement because the main function
  will always return an integer if successful
*/