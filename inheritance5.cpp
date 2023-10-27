//If functions are same in both class then we should use scope resolution operator (::)

#include<iostream>
using namespace std;

class A                     // Parent class 
{
    public:
    void func()         // function member
    {
        cout<<"1st function is called"<<endl;
    }
};

class B             //Parent class
{
    public:
    void func()         // function member
    {
        cout<<"2nd function is called"<<endl;
    }
};

class C : public A, public B          // derive class
{

};

int main()
{
    C obj;        // creating object

    obj.A::func();        //call the function of class A
    obj.B::func();          //call the function of class B

    return 0;
}

