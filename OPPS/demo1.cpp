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

        Student ()
        {
            cout<<"\nSTART : default constructor :";
            rno = 1;
            strcpy(name,"vraj");
            std = 12;
            cout<<"\nEXIT : exit constructor :";
        }
        void disp()
        {
            std = 12;
            cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std;
        }
};

int main()
{
    Student s1,s2,s3,s4;
    s1.disp();
    s2.disp();
    s3.disp();
    s4.disp();

    return 0;
}