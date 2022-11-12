#include<iostream>
using namespace std;

class shopitem
{
    int id;
    float price;
    public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout<<"The code of this item is "<<id<<endl;
        cout<<"The price of this item is "<<price<<endl;
    }
};

int main()
{
    int size=3;
    // int *p = new int[34];

    // 1. general store item
    // 2. veggis item
    // 3. hardware item

    int p;
    float q;
    shopitem* ptr = new shopitem[size];
    shopitem* ptrnext = ptr;

    for(int i=0; i<size ; i++)
    {
        cout<<"Enter id and price of the item "<<i+1<<endl;
        cin>>p>>q;
        // (*ptr).setdata(84,30);
        ptr->setdata(p,q);
        ptr++;
    }

    for(int i=0;i<size;i++)
    {
        cout<<"item number "<<i+1<<endl;
        ptrnext->getdata();
        ptrnext++;
    }
    
    return 0;
}