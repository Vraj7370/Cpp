#include<iostream>
using namespace std;
int main()
{
    int no1,no2,choice;

    cout<<"enter the number 1 : ";
    cin>>no1;

    cout<<"enter the number 2 : ";
    cin>>no2;

    cout<<"\nenter below choice:";

    cout<<"\n1) for addition";
    cout<<"\n2) for subtraction";
    cout<<"\n3) for multiplication";
    cout<<"\n4) for division";
    cin>>choice;

    switch(choice)
    {
       case 1:
       cout<<"\naddition : "<<no1+no2;
       break;

       case 2:
       cout<<"\nsubtraction : "<<no1-no2;
       break;

       case 3:
       cout<<"\nmultiplication : "<<no1*no2;
       break;

       case 4:
       cout<<"\ndivision : "<<no1/no2;
       break;

       return 0;
    }

    



}
