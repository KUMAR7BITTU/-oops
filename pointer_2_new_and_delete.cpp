#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Basic example
    int a=4;
    int *p=&a;
    cout<<" The value of a is "<<*(p)<<endl;

    //new keyword
    int *p1 = new int(40);
    float *p2= new float(50.45);
    cout<<"The value of address at p1 is "<<*(p1)<<endl;
    cout<<"The value of address at p2 is "<<*(p2)<<endl;

    int *arr= new int [3];
    arr[0]=34;
    *(arr+1)=98;
    arr[2]=51;

    // delete arr;
    delete[] arr;

    cout<<"The value of arr[0] "<<arr[0]<<endl;
    cout<<"The value of arr[1] "<<arr[1]<<endl;
    cout<<"The value of arr[2] "<<arr[2]<<endl;
    return 0;
}
