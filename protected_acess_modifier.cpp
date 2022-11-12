/*               public           private          protected 
                 derivation       derivation       derivation

private member   Not inherited    Not inherited    Not inherited
public member       protected        private         protected
proctected member    public          private         protected

*/

#include<iostream>
using namespace std;

class Base
{
  protected:
        int a;
  private:
        int b;
};

class Derived : protected Base
{

};

int main()
{
  Base b;
  Derived d;
//   cout<<d.a<<endl;
//   // Will not work since a is protected in both base as well as derived class
return 0;
}