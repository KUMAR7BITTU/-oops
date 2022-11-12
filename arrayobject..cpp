#include<iostream>
using namespace std;

class employee
{
int id;
int salary;
public:
void setdata(void);
void getdata(void);
};
void employee :: setdata(void)
{
salary=122;
cout<<"enter your id "<<endl;
cin>>id;
}
void employee :: getdata(void)
{
cout<<"The value of id is "<<id<<endl;
}
int main()
{
employee fb[3];
for(int i=0;i<3;i++)
{
fb[i].setdata();
fb[i].getdata();
}
return 0;
}
