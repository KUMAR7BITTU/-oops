#include<iostream>
using namespace std;

class shop
{
int id;
int price;
static int counter;
public:
void setdata(void);
void getdata(void);
static void getcount(void)
{
    cout<<" The count of this employee is "<<counter<<endl;
}
};
int shop :: counter=1000;//default value is 0;
void shop :: setdata(void)
{
cout<<"enter your id"<<endl;
cin>>id;
cout<<"enter your price"<<endl;
cin>>price;
counter++;
}
void shop :: getdata(void)
{
cout<<id<<endl;
cout<<price<<endl;
}
int main()
{
shop a,b;
shop ::getcount();
a.setdata();
shop :: getcount();
a.setdata();
a.getdata();
shop :: getcount();
b.setdata();
b.getdata();
shop :: getcount();
return 0;
}
