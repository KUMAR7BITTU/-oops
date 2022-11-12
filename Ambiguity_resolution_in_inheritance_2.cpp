#include<iostream>
using namespace std;

class Base1
{
    public:
    void say()
    {
        cout<<"How are you ?"<<endl;
    }
};

class Derived : public Base1 
{
      // Derived's new say() method will override Base1 class's say() method
    int a;
    // public:
    // void say()
    // {
    //     cout<<"Hello my beautiful people"<<endl;
    // }
};

int main()
{   
    Base1 b;
    b.say();

    Derived d1;
    d1.say();

    return 0;
}