#include<iostream>
using namespace std;
int main()
{
    int a[]={10,20,30,40,50};
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"next line"<<endl;
    // int b[3];
    // b[0]=12;
    // b[1]=14;
    // b[2]=16;
    // a[3]=6;
    // cout<<a[3]<<endl;
    cout<<"next line"<<endl;
    // for(int i=0;i<3;i++)
    // {
    //     cout<<b[i]<<endl;
    // }

    int* p=a;
    for(int i=0;i<5;i++)
    {
        cout<<*(p+i)<<endl;
    }
    cout<<"This is not good"<<endl;
    cout<<*(p)<<endl;
    cout<<*(++p)<<endl;
    cout<<*(p++)<<endl;
    cout<<*(p)<<endl;
}