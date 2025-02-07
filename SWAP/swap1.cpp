#include <iostream>
using namespace std;

int main()
{
    int no1,no2,no3;

    cout<<"\nenter no1 : ";
    cin>>no1;

    cout<<"\nenter no2 : ";
    cin>>no2;

    no3 = no1;
    no1 = no2;
    no2 = no3;

    cout<<"\nafter swapping no of no1 = "<<no1;
    cout<<"\nafter swapping no of no2 = "<<no2;

    return 0;
}