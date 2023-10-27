// There are some inheritance like Hybrid inheritance and Hierarchical inheritance

// Ques:- Another inheritance program
#include<iostream>
using namespace std;

class Human                    // parant class 
{
    public:
    int height;
    int weight;              // date members
    int age;

    public:
    int getAge()            //function members
    {
       return age;       // return this->getAge;
    }

    int setWeight(int w)
    {
        this->weight = w;
    }
};

class Male : public Human           //child or derive class
{
    public:
    string color;          //data member
    void sleep()            //function member
    {
        cout<<"Male  is sleeping"<<endl;
    }
};

int main()
{
    Male Ram;               //object

    cout<<Ram.age<<endl;
    cout<<Ram.color<<endl;
    cout<<Ram.height<<endl;
    cout<<Ram.weight<<endl;

    Ram.setWeight(100);            //update weight value
    cout<<Ram.weight<<endl;
    Ram.sleep();                  

    return 0;
}