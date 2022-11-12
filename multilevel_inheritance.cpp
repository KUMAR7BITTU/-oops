#include<iostream>
using namespace std;

class student
{
    protected:
    int roll_number;
    public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student :: set_roll_number(int r)
{
    roll_number=r;
}

void student :: get_roll_number(void)
{
    cout<<"The roll number is "<<roll_number<<endl;
}

class Exam : public student
{
  protected:
  float math;
  float physics;
  public:
  void set_marks(float,float);
  void get_marks(void);
};

void Exam :: set_marks(float m1, float m2)
{
    math = m1;
    physics =m2;
}

void Exam :: get_marks(void)
{
    cout<<"The marks obtained in math is "<<math<<endl;
    cout<<"The marks obtained in physic is "<<physics<<endl;
}

class Result : public Exam
{
  float percentage;
  public:
  void display_results()
  {
     get_roll_number();
     get_marks();
     cout<<"Your result is "<<(math+physics)/2<<"%"<<endl;
  }
};

/*Note: if we are inheriting B from A and C from B : [A-->-->B-->C]  
1. A is the base class for B and B is the base class for C 
2. ABC is called inheritance path */

int main()
{
    Result harry;
    harry.set_roll_number(420);
    harry.set_marks(94.0,90.0);
    harry.display_results();
    return 0;
}