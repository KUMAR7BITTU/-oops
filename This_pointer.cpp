#include<iostream>
using namespace std;

class A
{
    private:
    int a;
    public:

    // void setdata(int a)
    // {
    //     this->a=a;
    // }

    A& setdata(int a)
    {
        this->a=a;
        return *this;
    }
    void getdata()
    {
        cout<<"The value is "<<a<<endl;
    }
};

int main()
{
    A m1;
    // m1.setdata(4);
    m1.setdata(16).getdata();
    m1.getdata();
    
    return 0;
}