#include <iostream>
using namespace std;

class student
{
public:
    int roll_no;
    float cgpa;

    // Constructor in C++ is a special method that is invoked automatically at the time of object creation. It is used to initialize the data members of new objects generally.

    //  This is default constructor
    // Constructors have the same name as that of class
    // The compiler also makes an default constructor
    // Whenever we create an constructor, the constructor that the compiler makes go away(deletes)
    student()
    {
        cout << "Constructor is called" << endl;
    }

    // Destructor is used to free up memory when the use of object is finished
    ~student()
    {
        cout << "Destructor is called" << endl;
    }
};

int main()
{
    cout << "Before" << endl;

    // Constructors are called when the object is created
    student s1;

    cout << "After" << endl;

    return 0;
}