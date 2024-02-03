#include <iostream>
using namespace std;

class compile_time_poly
{
public:
    // We cant make functions of same name in a class , we have to distinguish them by passing parameters
    // This is known as function overloading
    void func_overloading()
    {
        cout << "Hello" << endl;
    }

    // void func_overloading()
    // {
    //     cout << "Hii" << endl;
    // }

    void func_overloading(char x)
    {
        cout << "Hii" << endl;
    }

    int func_overloading(int x)
    {
        cout << "Hii" << endl;
    }
};

int main()
{
    compile_time_poly obj;

    obj.func_overloading();
    obj.func_overloading('A');
    obj.func_overloading(20);

    return 0;
}