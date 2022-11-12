#include<iostream>
using namespace std;

class shop
{
int id[3];
int price[3];
int counter;
public:
    void counterdata(void)
    {
    counter=0;
    }
void setdata(void);
void getdata(void);
};
void shop :: setdata(void)
{
cout<<"enter id"<<endl;
cin>>id[counter];
cout<<"enter price"<<endl;
cin>>price[counter];
counter++;
}
void shop :: getdata(void)
{
for(int i=0;i<counter;i++)
{
cout<<"The id is "<<id[i]<<endl;
cout<<"The price is "<<price[i]<<endl;
}
}
int main()
{
shop a;
a.counterdata();
a.setdata();
a.setdata();
a.getdata();
return 0;
}
