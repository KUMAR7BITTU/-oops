#include<iostream>
using namespace std;

class complex 
{
  private:
  int real,imaginary;
  public:
  void setdata(int a, int b)
  {
    real=a;
    imaginary=b;
  }
  void getdata()
  {
    cout<<"The real part is "<<real<<endl;
    cout<<"The imaginary part is "<<imaginary<<endl;
  }
};

int main()
{
    // complex c1;
    // complex* p = &c1;
    // (*p).setdata(48,30);
    // (*p).getdata();

    complex* ptr = new complex;

    // (*ptr).setdata(23,45);
    ptr->setdata(23,45); // matlab ptr pointer ko dereference karo pehle phir jo function run karna hai use run karo. ptr pointer se jo object associated uska setdata call hoga.

    // (*ptr).getdata();
    ptr->getdata();


   cout<<"creating new pointer ptr1 from here"<<endl;
   complex* ptr1 = new complex[3] ;
   ptr1->setdata(10,20);
   ptr1->getdata();
    return 0;
}