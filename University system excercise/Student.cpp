/* 
    You have been hired as a system developer at a newly created ZCAS University.
    As part of your first assignment, you are tasked to develop a system to manage the
    operations of this University. You are told that the departments that need to be considered as part
    of the pilot project include the Admission, Accounts and Dean of students respectively.
    The admission department wants the system to be able to admit the students after capturing their names,
    nrc, address, results, student number and gender. On the other hand, the account department is concerned
    with the tuition fees, user fees, accommodation fees, transport, name and the number of student.
    The dean of students is concerned with the system allowing him to capture the student’s number,
    names, hostel name and room number. Implement this ZCAS University system by making use of objects and classes
    as learned in class. Follow the guidelines of object oriented programming as learnt in class and other requirement
    is free style.
*/

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