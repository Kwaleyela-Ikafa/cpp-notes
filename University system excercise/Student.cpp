
#include <iostream>
using namespace std;

class Student
{
// private data members or instance variables
private:
    string studentName;
    string studentNrc;
    string studentAddress;
    string studentGender;
    string studentHostel;
    int studentNumber;
    int studentRoomNumber;

// getters and setters
public:
    void setName( string name)
    {
        studentName = name;
    }

    void setNrc( string nrc )
    {
        studentNrc = nrc;
    }

    void setAddress( string address )
    {
        studentAddress = address;
    }

    void setGender( string gender )
    {
        studentGender = gender;
    }

    void setHostelName(string hostel)
    {
        studentHostel = hostel;
    }

    void setStudentNumber( int number )
    {
        studentNumber = number;
    }

    void setRoomNumber( int room )
    {
        studentRoomNumber = room;
    }

    string getStudentName()
    {
        return studentName;
    }

    string getStudentNrc()
    {
        return studentNrc;
    }

    string getStudentAddress()
    {
        return studentAddress;
    }

    string getStudentGender()
    {
        return studentGender;
    }

    string getStudentHostel()
    {
        return studentHostel;
    }

    int getStudentNumber()
    {
        return studentNumber;
    }

    int getStudentRoomNumber()
    {
        return studentRoomNumber;
    }

};