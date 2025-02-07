#include <iostream>
using namespace std;

class employee 
{
    private:

    int id;
    char name[40];
    int salary;


    public:

    void scnaData()
    {
        cout<<"\nEnter id : ";
        cin>>id;

        cout<<"\nEnter name : ";
        cin>>name;

        cout<<"\nEnter salary : ";
        cin>>salary;



    }

    void dispdata()
    {
        cout<<"\n"<<id<<"\t"<<name<<"\t"<<salary;

    }

};

int main()
{
    employee e1,e2;

    e1.scnaData();
    e2.scnaData();

    e1.dispdata();
    e2.dispdata();

    return 0;

}