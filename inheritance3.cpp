//                      3. Multi-Level inheritance
#include<iostream>
using namespace std;

class A                 //parent or base class
{
    public:
    void Afunc()
    {
        cout<<"funcA"<<endl;
    }
};

class B : public A          // derive class but parent class for class C
{
    public:
    void Bfunc()
    {
        cout<<"funcB"<<endl;
    }
};

class C : public B          //derive class
{
    public:
    void Cfunc()
    {
        cout<<"funcC"<<endl;
    }
};

int main()
{
    C c;

    c.Afunc();
    c.Bfunc();                      //access from class C
    c.Cfunc();

    return 0;
}
