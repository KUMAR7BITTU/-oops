#include<iostream>
using namespace std;

// syntax for inheriting in multiple inheritance
// class Derivedc : visibility-mode base1, visibility-mode base2
// {
//     class body of class Derivedc
// }

class Base1 
{
    protected:
    int base1int;
    public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
 protected:
 int base2int;
 public:
 void set_base2int(int a)
 {
    base2int=a;
 }
};

class Base3
{
    protected:
    int base3int;
    public:
    void set_base3int(int a)
    {
        base3int=a;
    }
};

/* 
The inherited derived class will look something like this:
Data members:
      base1int --> protected
      base2int --> protected
      base3int --> protected
Member functions:
      set_base1int()  --> public
      set_base2int()  --> public
      set_base3int()  --> public
*/

class Derived : public Base1 , public Base2, public Base3
{
  public:
  void display(){
  cout<<"The value of base1int is "<<base1int<<endl;
  cout<<"The value of base2int is "<<base2int<<endl;
  cout<<"The value of base3int is "<<base3int<<endl;
  cout<<"The sum is "<<base1int+base2int+base3int<<endl;
  }

};

int main()
{
    Derived d1;
    d1.set_base1int(50);
    d1.set_base2int(100);
    d1.set_base3int(150);
    d1.display();
    return 0;
}