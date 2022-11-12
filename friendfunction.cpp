#include<iostream>
using namespace std;

class complex 
{
    int a , b;
    
    
    friend complex sumcomplex(complex o1,complex o2);
    
    public :
    void getdata(int v1 ,int v2)
    {
      a=v1;
      b=v2;
    }
    void printdata()
    {
        cout<<" The value of complex is "<< a <<" + "<< b <<" i "<<endl;
    }
};

complex sumcomplex(complex o1,complex o2)
{
    complex c3;
    c3.getdata((o1.a+o2.a),(o1.b+o2.b));
    return c3;
}
int main()
{
    complex c1 , c2 , sum ;
    c1.getdata(3,4);
    c1.printdata();
    
    c2.getdata(6,5);
    c2.printdata();

    sum=sumcomplex(c1,c2);
    sum.printdata();
    return 0;

}