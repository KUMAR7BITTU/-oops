#include<iostream>
using namespace std;

//forward declaration
class complex;
class calculator{
    public:
    int add(int a,int b){
    return (a+b);
    }
    int sumrealcomplex(complex,complex);
    int sumcompcomplex(complex,complex);
};
class complex
{
    int a,b;
    //friend class calculator;
    friend int calculator :: sumrealcomplex(complex,complex);
    friend int calculator :: sumcompcomplex(complex,complex);
    public:
    void setdata(int v1,int v2)
    {
        a=v1;
        b=v2;
    }
    void printdata(void)
    {
        cout<<"the complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
int calculator :: sumrealcomplex(complex o1,complex o2)
{
    return (o1.a+o2.a);
}
int calculator :: sumcompcomplex(complex o1,complex o2)
{
    return (o1.b+o2.b);
}
int main()
{
    complex c1,c2;
    c1.setdata(3,4);
    c1.printdata();
      
    c2.setdata(6,7);
    c2.printdata();

    calculator calc;
    int res1=calc.sumrealcomplex(c1,c2);
    cout<<"the real part is "<<res1<<endl;
    int res2=calc.sumcompcomplex(c1,c2);
    cout<<"the complex part is "<<res2<<endl;
    return 0;
}