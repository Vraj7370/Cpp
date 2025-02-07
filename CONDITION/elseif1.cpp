#include <iostream>
using namespace std;

int main()
{
    int nu;

    cout<<"\nenter nu : ";
    cin>>nu;

    if(nu>0)
    {
        cout<<"no is positive";
    }

    else if(nu<0)
    {
        cout<<"no is negative";
    }

    else
    {
        cout<<"no is zero";
    }
}