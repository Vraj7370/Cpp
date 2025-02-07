#include <iostream>
using namespace std;

int main()
{
    int no1,no2,no3;

    cout<<"\nenter no1 : ";
    cin>>no1;

    cout<<"\nenter no2 : ";
    cin>>no2;

    cout<<"\nenter no3 : ";
    cin>>no3;

    if((no1==no2) && (no1==no3) && (no2==no3))
    {
        cout<<"three numbers are same";
    }

    else if((no1==no2) && (no1!=no3))
    {
        if(no1>no3)
        {
            cout<<"no1 and no2 are greater than no3";
        }

        else
        {
            cout<<"no3 is greater than no1 and no2";
        }
    }


    else if((no1==no3) && (no1!=no2))
    {
        if(no1>no2)
        {
            cout<<"no1 and no3 are greater than no2";
        }

        else
        {
            cout<<"no2 is greater than no1 and no3";
        }
    }

    else if((no2==no3) && (no2!=no1))
    {
        if(no2>no1)
        {
            cout<<"no2 and no3 are greater than no1";
        }

        else
        {
            cout<<"no1 is greater than no2 and no3";
        }
    }

    else if((no1!=no2) && (no2!=no3) && (no1!=no3))
    {
        if(no1>no2)
        {
            if(no1>no3)
            {
                cout<<"no1 is max";
            }

            else
            {
                cout<<"no3 is max";
            }
        }

        else
        {
            if(no2>no3)
            {
                cout<<"no2 is max";
            }

            else
            {
                cout<<"no3 is max";
            }
        }
    }
    return 0;
}



