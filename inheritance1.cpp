//1. single inheritance

#include <iostream>
using namespace std;

class A // Base or parent class
{
    public:
    void Afunc() // function member
    {
        cout << "Inheritance" << endl;
    }
};

class B : public A // Derive or chile class, inherite function member from class A
{
    public:
    void Bfunc() // function member
    {
        cout << "Another inheritance" << endl;
    }
};

int main()
{
    B b;

    b.Afunc(); // calling function member of Class A
    b.Bfunc(); // calling function member of Class B

    return 0;
}