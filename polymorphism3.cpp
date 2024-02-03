#include <iostream>
using namespace std;

class run_time_poly
{
public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class func_overriding : public run_time_poly
{
public:
    // At the time of inheritance we can change an function by overriding it
    // The name of the function should be same
    void speak()
    {
        cout << "Barking" << endl;
    }
};

int main()
{
    func_overriding obj;
    obj.speak();

    return 0;
}