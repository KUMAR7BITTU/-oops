//nesting of member function
#include<iostream>
#include<string>
using namespace std;
class binary
    {
        private:
        string s;
        void chk_bin(void);
        public:
        void read(void);
        //void chk_bin(void);
        void ones_complement(void);
        void display(void);
    };

    void binary :: read(void)
    {
        cout<<"enter a binary number"<<endl;
        cin>>s;
    }

    void binary :: chk_bin(void)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)!='0' && s.at(i)!='1')
            {
                cout<<"incorrect binary number"<<endl;
                exit(0);
            }
        }
    }

    void binary :: ones_complement(void)
    {
        chk_bin();
        for(int i=0; i<s.length();i++)
        {
            if(s.at(i)=='1')
            s.at(i)='0';
            else
            s.at(i)='1';
        }
    }

    void binary :: display(void)
    {
        for(int i=0; i<s.length();i++)
        cout<<s.at(i);
        cout<<endl;
    }

int main()
{
    // oops-->classes and is_object
    // c++ -->initially called -->c with classes bry stroustroup
    // structures had limitation
    //                -->members are public
    //                -->no method
    // classes -->structure +more
    // classes -->can have method and properties
    // classes -->can have few members as public and few as private
    // structure in c++ are typedefed
    // you can declare object along with the class declareration like this
    /* class employee{
         class definition
     }harry ,rohan,rishi;
    harry.salary = 8 makes no sense if salary is private, we have to use some method,
    we have to privent it with this overwrite */
    //nesting of member function 
    binary b;
    b.read();
    //b.chk_bin();
    b.ones_complement();
    b.display();

   return 0;
}