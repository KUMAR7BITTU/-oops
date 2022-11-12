#include<iostream>
using namespace std;

int main()
{
    int a=2;
    int* b= &a;
    cout<<&a<<endl;
    cout<<b<<endl;
    cout<<*b<<endl;

    // pointer to pointer
    int**c=&b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at b is "<<*c<<endl;
    cout<<"The value at a is "<<**c<<endl;
    
}