#include<iostream>
using namespace std;

class Student
{
    protected:
    int roll_number;
    public:
    void set_roll_number(int a)
    {
        roll_number = a;
    }
    void get_roll_number()
    {
        cout<<"The roll number is "<<roll_number<<endl;
    }
};

class Test : virtual public Student
{
  protected:
  int maths,physics;
  public:
  void set_marks(float m1,float m2)
  {
    maths=m1;
    physics=m2;
  }
  void get_marks()
  {
    cout<<"your result is here"<<endl
    <<"Maths : "<<maths<<" and physics : "<<endl
    <<physics<<endl;
  }
};

class Sport : virtual public Student
{
    protected:
    int score;
    public:
    void set_score(float m1)
    {
        score=m1;
    }
    void get_score()
    {
        cout<<"Your score is "<<score<<endl;
    }
};

class Result : public Test, public Sport
{
   private:
   int total;
   public:
   void display()
   {
     total = maths + physics + score;
     get_roll_number();
     get_marks();
     get_score();
     cout<<"The total marks is "<<total<<endl;
   }
};

int main()
{
    Result harry;
    harry.set_roll_number(10);
    harry.set_marks(90,94);
    harry.set_score(90);
    harry.display();
    return 0;
}