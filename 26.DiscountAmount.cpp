#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float disamt1,disamt2,amt ;
    cout<<"Enter Your Amount";
    cin>>amt;
   if (amt>=5000)
   {
    disamt1=amt-amt*20/100;
    cout<<"Your discounted amount is "<<disamt1;
   }
   else
   {
    if (amt>2000 && amt<5000)
    {
    disamt2=amt-amt*10/100;
    cout<<"the Discounted amount is "<<disamt2;
    }
    else
    {
    cout<<"No Discounted Amount Applied";
    }
   }
   return 0;
}