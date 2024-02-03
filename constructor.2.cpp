#include <iostream>
using namespace std;

class student
{
public:
    int roll_no;
    float cgpa;

    // This is static operator , it is not the part of object
    static int marks;

    //  This is paramaterised constructor
    // It is used to initialize the data members of new objects with given values
    student(int x, float y)
    {
        roll_no = x;
        cgpa = y;
    }
};

// This is how we initialize static members
// Here :: is known as scope resolution operator
int student::marks = 90;

int main()
{
    student s1(20, 8.5);

    cout << s1.roll_no << endl;
    cout << s1.cgpa << endl;

    // This is copy constructor , it copies values from other objects
    student s2(s1);
    cout << s2.roll_no << endl;
    cout << s2.cgpa << endl;

    cout << student::marks << endl;

    return 0;
}