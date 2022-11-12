#include<iostream>
using namespace std;

//  base class
class Employee 
{
 public:
 int id;
 float salary;
 Employee(int inpid)
 {
    id=inpid;
    salary=34.0;
 }
 Employee(){}
};

// derived class
// class {{derived class -name}} : {{visibility mode}} {{base class - naem}}
// {
    //  class members/ method etc......
// }
// Note: default visibility mode is private
// * public visibility mode: public member of the base class become public member of the derived class
// * private visibility mode: public member of the base class become private member of the derived class
// * private member are never inherited

// Derived class
class programmer : public Employee
{
    public:
    int language;
    programmer(int inpid)
    {
        id=inpid;
        language=9;
    }
    void getdata()
    {
        cout<<id<<endl;
    }
};


int main()
{
  Employee rohit(1),harry(2);
  cout<<rohit.salary<<endl;
  cout<<harry.salary<<endl;

  programmer skillf(10);
  cout<<skillf.language<<endl;
  cout<<skillf.id<<endl;
  skillf.getdata();

}
