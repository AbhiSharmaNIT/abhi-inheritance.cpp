//                       2. Multiple inheritance

#include <iostream>
using namespace std;

class A // parent or base class
{
    public:
    void Afunc()
    {
        cout << "funcA" << endl;
    }
};

class B // parent or base class
{
    public:
    void Bfunc()
    {
        cout << "funcB" << endl;
    }
};

class C : public A, public B // chile or derive class
{
    public:
    void Cfunc()
    {
        cout << "funcC" << endl;
    }
};

int main()
{
    C c;

    c.Afunc(); // calling class A and B from class C
    c.Bfunc();
    c.Cfunc();

    return 0;
}