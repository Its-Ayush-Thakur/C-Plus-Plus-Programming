#include <iostream>
using namespace std;
class student
{
public:
    // public means class members and functions can be accessed all over
    // by default private
    int roll_no;
    char fav_char;
    float cgpa;

    // We can access private data members, only in the same class
    void print()
    {
        cin >> contact_no;
        cout << contact_no << endl;
    }

private:
    // This is private
    // It can only be accessed in the same class
    int contact_no;
};
int main()
{
    student s1;
    // Here s1 is object , object is the instance of class

    // When we do not give values to data members than they contain garbage values
    cout << "Roll no. is - " << s1.roll_no << endl;
    
    // We can use dot operator to define and call objects
    s1.roll_no = 20;
    s1.cgpa = 8.5;
    s1.fav_char = 'A';

    // we cant access private data members outside the class so below error occurs
    // s1.contact_no = 344;

    // cout<<"Roll no. is - ";
    // cout <<s1.roll_no<< endl;

    cout << "Roll no. is - " << s1.roll_no << endl;

    s1.print();
    return 0;
}