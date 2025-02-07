#include <iostream>
using namespace std;
#include <string>

class Employee
{
    private:
        int id;
        char name[40];
        int salary;

    public:

        Employee()
        {
            cout<<"\nSTART : default constructor :";
            id = 10;
            strcpy(name,"vraj");
            salary = 12000;
            cout<<"\nEXIT : exit constructor :";
        }
        void disp()
        {
            salary = 12;
            cout<<"\n"<<id<<"\t"<<name<<"\t"<<salary;
        }
};

int main()
{
    Employee s1,s2,s3;
    s1.disp();
    s2.disp();
    s3.disp();

    return 0;
}