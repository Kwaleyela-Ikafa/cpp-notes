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
// int main()
// {
//     string nameOfCourse; // String variable to be passed to member function parameters
//     GradeBook myGradeBook; // create object of the class GradeBook called myGradeBook

//     cout << "Please enter the course name:" << endl;
//     getline(cin, nameOfCourse); // read full line with whitespace
//     cout << endl;

//     myGradeBook.displayMessage(nameOfCourse); // Pass variable value to member function parameter
// }



// Classes with data members, set functions and get functions

#include <iostream>
using namespace std;

class GradeBook
{
    // access specifiers private and public
    // private data member or class variable
private:
    string courseName;

public:

    void setCourseName( string name )
    {
        courseName = name;
    }

    string getCourseName()
    {
        return courseName;
    }

    void displayMessage()
    {
        cout << "Welcome to the grade book for\n" << getCourseName() << endl;
    }
};

int main()
{
    
    string nameOfCourse; // string variable to hold course name value
    GradeBook myGradeBook;

    // Initial course name
    cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;

    // Prompt user for input to set course name
    cout << "\nPlease enter course name:" << endl;
    getline(cin, nameOfCourse);
    myGradeBook.setCourseName(nameOfCourse); // set course name 
    cout << endl; // print new line

    myGradeBook.displayMessage(); // display message with new course name
}