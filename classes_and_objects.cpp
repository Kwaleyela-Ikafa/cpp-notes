#include <iostream>
using namespace std;

// class definition
class GradeBook
{
public:

    /*
      Function named display message
      Void is a function return type, it indicates that the fuction
      will not return data to it's calling function
     */
    
    void displayMessage()
    {
        cout << "Welcome to the grade book!" << endl;
    }

}; // every class has to end ith a semi colon

// Function main to begin program execution
int main()
{
    GradeBook myGradeBook; // create object of the class GradeBook called myGradeBook
    myGradeBook.displayMessage(); // call objects displayMessage function
}

// Classes with parameters

#include <iostream>
using namespace std;

class GradeBook
{
public:

    void displayMessage(string courseName)
    {
        cout << "Welcome to the grade book for\n" << courseName << endl;
    }

};

// Function main to begin program execution
int main()
{
    string nameOfCourse; // String variable to be passed to member function parameters
    GradeBook myGradeBook; // create object of the class GradeBook called myGradeBook

    cout << "Please enter the course name:" << endl;
    getline(cin, nameOfCourse); // read full line with whitespace
    cout << endl;

    myGradeBook.displayMessage(nameOfCourse); // Pass variable value to member function parameter
}