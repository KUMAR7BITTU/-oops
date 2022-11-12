#include<iostream>
using namespace std;

class complex
{
private:
    int a, b;
public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    friend complex sumcomplex(complex o1,complex o2);
    void printdata(void)
    {
        cout << "the complex number is " << a << "+" << b << "i" << endl;
    }
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2,sum;
    c1.setdata(3, 5);
    c1.printdata();

    c2.setdata(8, 9);
    c2.printdata();

    sum=sumcomplex(c1,c2);
    sum.printdata();
    return 0;
}