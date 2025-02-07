#include <iostream>
using namespace std;
#include <string>

class Student 
{
    private:
        int rno;
        char name[40];
        int std;

    public:
        Student (int r , const char n[] , int s )  
        {
            cout<<"\nSTART : para constructor :";
            rno = r;
            strcpy(name, n);
            std = s;
            cout<<"\nEXIT : para constructor :";
        }
        void disp()
        {
            std = 12;
            cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std;
        }
};

int main()
{
    Student s1(1,"vraj",12);
    Student s2(10,"mayur",9);
    Student s3(3,"vishal",10);
    s1.disp();
    s2.disp();
    s3.disp();

    return 0;
}