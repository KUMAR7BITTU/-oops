#include<iostream>
using namespace std;
class Base1
{
int data1;
public:
Base1(int i)
{
    data1=i;
    cout<<"Base1 class constructor is calles"<<endl;
}
void printdataBase1(void)
{
    cout<<"The value of data1 is "<<data1<<endl;
}
};

class Base2
{
    int data2;
    public:
    Base2(int i)
    {
        data2=i;
        cout<<"Base2 class constructor is called"<<endl;
    }
    void printdataBase2(void)
    {
        cout<<"The value of data2 is "<<data2<<endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1,derived2;
    public:
    Derived(int a, int b, int c, int d) : Base1(a),Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout<<"Derived class constructor is called"<<endl;
    }
    void printdataDerived(void)
    {
        j
    }
}
int main() 
{
    return 0;
}