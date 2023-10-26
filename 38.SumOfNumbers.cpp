#include <iostream>
using namespace std;
int main()
{
    int i,n,sum;
    cout<<"Enter the Value of n ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}