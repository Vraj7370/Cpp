#include<iostream>
using namespace std;
int main()
{
     int mainchoice,gc,pc,kc,qty,bill=0;

     cout<<"\nenter the below choice : ";
     cout<<"\n1)  for gujarati thali : ";
     cout<<"\n2)  for punjabi thali : ";
     cout<<"\n3)  for kathiyavadi thali : ";
     cin>>mainchoice;

     switch(mainchoice)
     {
          case 1 : //gujarati thali
                  cout<<"\nenter below choice for gujarati thali : ";
                  cout<<"\n1) for roti (1*20)";
                  cout<<"\n2) for daal (1*1)";
                  cout<<"\n3) for rice (1*100) ";
                  cin>>gc;

                  switch(gc)
                  {
                    case 1 : cout<<"\nenter how many roti order : ";
                             cin>>qty;
                             bill=bill+(qty*20);
                             break;

                    case 2 : cout<<"\nenter how many daal order : ";
                             cin>>qty;
                             bill=bill+(qty*120);
                             break;

                    case 3 : cout<<"\nenter how many rice order : ";
                             cin>>qty;
                             bill=bill+(qty*100);
                             break;

                  }

                  break;

          
          case 2 : //punjabi thali
                  cout<<"\nenter below choice for punjabi thali : ";
                  cout<<"\n1) for roti (1*25)";
                  cout<<"\n2) for daal (1*130)";
                  cout<<"\n3) for rice (1*120) ";
                  cin>>pc;

                  switch(pc)
                  {
                    case 1 : cout<<"\nenter how many roti order : ";
                             cin>>qty;
                             bill=bill+(qty*25);
                             break;

                    case 2 : cout<<"\nenter how many daal order : ";
                             cin>>qty;
                             bill=bill+(qty*130);
                             break;

                    case 3 : cout<<"\nenter how many rice order : ";
                             cin>>qty;
                             bill=bill+(qty*120);
                             break;

               }

               break;

          
          case 3 : //kathiyavadi thali
                  cout<<"\nenter below choice for kathiyavadi thali : ";
                  cout<<"\n1) for roti (1*15)";
                  cout<<"\n2) for daal (1*90)";
                  cout<<"\n3) for rice (1*80) ";
                  cin>>kc;

                  switch(kc)
                  {
                    case 1 : cout<<"\nenter how many roti order:";
                             cin>>qty;
                             bill=bill+(qty*15);
                             break;

                    case 2 : cout<<"\nenter how many daal order:";
                             cin>>qty;
                             bill=bill+(qty*90);
                             break;

                    case 3 : cout<<"\nenter how many rice order:";
                             cin>>qty;
                             bill=bill+(qty*80);
                             break;

               }

               break;

     }

     cout<<"\nyour order is ready";
     cout<<"\nbill : "<<bill;
}
