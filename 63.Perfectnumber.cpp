#include <iostream>
using namespace std;
int main()
{
    int sum=0;
    
    for(int i=1;i<=n;i++)                              
    {
        if (n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==2*n)
    cout<<"perfect";
    else
    cout<<"not perfect";
}