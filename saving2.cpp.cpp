#include<iostream>
using namespace std;

int main()
{
    int savings;
    cin>>savings;
    if(savings>5000)
    {
    if(savings>10000)
    {
        cout<<"Roadtrip with Neha\n";
    } else {
        cout<<"Shopping with neha\n";
    }
    }
    else if(savings>2000)
    {
        cout<<"Puja\n";
    }
    else
    {
        cout<<"friends\n";
    }
    return 0;

}