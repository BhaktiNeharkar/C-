#include <iostream>
using namespace std;
int main()
{
    int count=0,n,i;
    cout<<"Enter n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            count++;
    }
    cout<<n;
    return 0;
}