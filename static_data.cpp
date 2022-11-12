#include<iostream>
using namespace std;

class employee
{
    int id;
    static int count;
    public :
    void setdata(void)
    {
        cout<<"enter your id"<<endl;
        cin>>id;
        count++;
    }
    void getdata(void)
    {
        cout<< "the id of this employee is "<< id <<" and this employee number  "<< count <<endl;
    }
    static void getcount(void)//static member function which can access only static member and function
    {
        //cout<<id;throw a error
        cout<< "the value of count "<< count <<endl;
    }
};
// count is the static  data member of class employee
//int employee :: count;//default value is 0
int employee :: count=1000;
int main()
{
    employee harry,rohan,lavish;
    //harry.id=1;
    //harry.count=1;cannot do this id and count are private
    harry.setdata();
    harry.getdata();
    employee::getcount();
    rohan.setdata();
    rohan.getdata();
    employee::getcount();
    lavish.setdata();
    lavish.getdata();
    employee::getcount();
    return 0;
}