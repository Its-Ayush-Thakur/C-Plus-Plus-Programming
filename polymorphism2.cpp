// Operator Overloading in compile time polymorphism

#include <iostream>
using namespace std;

class A
{
public:
    int a;
    int b;

    // This is the syntax of operator overloading in binary operator
    // return_type operator OP (second_operand_related_arguement)
    // {
    //     body;
    //     In body we give first operand
    //     In place of OP comes the operator which we want to overload
    // };

    // int operator+(A &obj)
    // {
    //     int value1 = this->a;
    //     int value2 = obj.b;
    //     return value1 - value2;
    // }

    // int operator+(A obj)
    // {
    //     int value1 = a;
    //     int value2 = b;
    //     return value1 - value2;
    // }

    int operator+(A object)
    {
        int value1 = a;
        int value2 = object.a;
        return value1 - value2;
    }

    // This is unary operator overloading
    int operator+()
    {
        int opr = a;
        return ++opr;
    }
};

int main()
{
    // A obj;
    // obj.a = 7;
    // obj.b = 5;
    // cout << "Sum is : " << obj + obj << endl;

    A obj1, obj2;
    obj1.a = 20;
    obj2.a = 5;
    cout << "Sum is : " << obj1 + obj2 << endl;

    A obj3;
    obj3.a = 1;
    cout << "Sum is : " << +obj3 << endl;
    return 0;
}