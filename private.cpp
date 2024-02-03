#include <iostream>
using namespace std;

class student
{
private:
    int roll_no;

public:
    void set(int x)
    {
        roll_no = x;
    }

    int get()
    {
        return roll_no;
    }
};
int main()
{
    student s1;

    s1.set(20);
    cout << "Roll no. - " << s1.get() << endl;

    return 0;
}