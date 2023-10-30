#include <iostream>
using namespace std;
int main()
{
    int i=1,n,dig;
    cout<<"Enter n ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
    dig=n%10;
    n=n/10;
    i++;
    }
    cout<<dig<<" ";
return 0;
}