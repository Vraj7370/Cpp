#include<iostream>
using namespace std;

int main()
{
    int i,sum=0;

    for(i=200;i>=100;i--)
    {
        
        if(i%2==0)
        {
            sum = sum + i;
        }
        

        else
        {
            cout<<i<<endl;
        }
    }

    cout<<"sum of even number is : "<<sum<<endl;

    return 0;
}