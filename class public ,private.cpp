#include<iostream>
using namespace std;
class employee
{
int a,b,c;
public:
int d,e;
void setdata(int v1, int v2,int v3);
void getdata()
{
cout<<"The value of a is "<<a<<endl;
cout<<"The value of b is "<<b<<endl;
cout<<"The value of c is "<<c<<endl;
cout<<"The value of d is "<<d<<endl;
cout<<"The value of e is "<<e<<endl;
}
};
void employee :: setdata(int v1,int v2,int v3)
{
a=v1;
b=v2;
c=v3;
}
int main()
{
employee haresh;
haresh.d=20;
haresh.e=65;
haresh.setdata(4,7,8);
haresh.getdata();
return 0;
}
