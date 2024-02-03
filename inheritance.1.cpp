#include <iostream>
using namespace std;

class human
{
public:
    int age;
    float weight;
    string name;

    // This is protected, protected data can be accessed only in the same class and child class
protected:
    void sleep()
    {
        cout << "8 hours" << endl;
    }
};

// class child_class_name : access_mode parent_class_name
// Here we inherited male class from human class
// All the data members and functions are now inherited in male class

/* Important

If data members and functions in the parent class are public and mode of inheritance is public than the data members and functions in the derived class will also be public
so,

public public = public
public protected = protected
public private = private

protected public = protected
protected protected = protected
protected private = private

private public = not accessible
private protected = not accessible
private private = not accessible

*/
class male : public human
{
    // Here public is written for height and get
public:
    float height;
    void get()
    {
        sleep();
    }
};

int main()
{
    male m1;
    cout << m1.name << endl;
    cout << m1.height << endl;
    cout << m1.age << endl;
    cout << m1.weight << endl;
    m1.get();
}

/* There are various types of inheritance
   1. Single inheritance
   2. Mutliple inheritance
   3. Multilevel inheritance
   4. Hybrid inheritance
   5. Hierarchical inheritance

   Read documenation for this
*/