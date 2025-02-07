#include <iostream>
using namespace std;

int main()
{
    int no1,no2,ans;

    cout<<"\nenter no1 : ";
    cin>>no1;

    cout<<"\nenter no2 : ";
    cin>>no2;

    ans = no1+no2;
    cout<<"\naddition : "<<ans; 

    ans = no1-no2;
    cout<<"\nsubtraction : "<<ans; 

    ans = no1*no2;
    cout<<"\nmultiplication : "<<ans; 

    ans = no1/no2;
    cout<<"\ndivision : "<<ans; 

    return 0;
}
