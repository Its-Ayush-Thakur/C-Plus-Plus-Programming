#include <iostream>
using namespace std;

// Inheritance Ambiguity

class A
{
public:
    void function()
    {
        cout << "I am function in A" << endl;
    }
};

class B
{
public:
    void function()
    {
        cout << "I am function in B" << endl;
    }
};

// We inherited here function of class A and B in class C
class C : public A, public B
{
};

int main()
{
    C obj;
    // Here function in class A and B have same name, so we use scope resolution operator to tell from which class we are calling the function
    obj.A::function();
    obj.B::function();

    return 0;
}