#include<iostream>
using namespace std;

int main()
{
    int i=1,num;
    
    cout<<"enter a number : ";
    cin>>num;
    
    while(i<=10)
    {
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
        i++;
    }    

    return 0;
}