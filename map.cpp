#include<bits/stdc++.h>
using namespace std;
void print(map<int,string>&m)
{
    cout<<"size:"<<m.size()<<endl;
    for(auto &pr: m)
    {
      cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main()
{
    map<int,string>m;
    m[1]="abc";
    m[2]="def";
    m[3]="ghj";
    m[4]="klm";
    print(m);
    return 0;
}