#include<iostream>
using namespace std;

class Student
{
private:
    int rno;
    char name[50];
    int std;
public:

    Student (int r , const char n[] , int s)
    {
            rno = r;
            strcpy(name , n);
            std = s;
    }
    Student (Student &s)
    {
        rno = s.rno;
        strcpy(name , s.name);
        std = s.std;
    }
    void disp()
    {
        cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std;
    }

};

int main()
{
    Student s1(1,"vraj",12);
    s1.disp();
    Student s2(s1);
    s2.disp();

    return 0;
}