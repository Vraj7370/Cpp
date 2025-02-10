#include <iostream>

using namespace std;

class Employee 
{
private:
    int empID;
    char name[50];
    int salary;

public:

    Employee() 
    {
        cout << "\nSTART: Default Constructor";
        empID = 10;
        strcpy(name, "Vraj");
        salary = 10000;
        cout << "\nEXIT: Default Constructor";
    }


    Employee(int id, const char n[], int sal) 
    {
        cout << "\nSTART: Parameterized Constructor";
        empID = id;
        strcpy(name, n);
        salary = sal;
        cout << "\nEXIT: Parameterized Constructor";
    }


    Employee(const Employee &e) 
    {
        cout << "\nSTART: Copy Constructor";
        empID = e.empID;
        strcpy(name, e.name);
        salary = e.salary;
        cout << "\nEXIT: Copy Constructor";
    }


    ~Employee() 
    {
        cout << "\nDestructor called for: " << name;
    }


    void disp() 
    {
        cout << "\n" << empID << "\t" << name << "\t" << salary;
    }
};

int main() 
{
   
    Employee e1,e2,e3; 

    e1.disp();
    e2.disp();
    e3.disp();

    return 0;
}