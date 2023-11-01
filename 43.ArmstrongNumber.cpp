#include <iostream>
using namespace std;
int main()
{
     int sum=0,r,n;
    int m=n;
    cout<<"Enter n ";
    cin>>n;
    while (n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+(r*r*r);
    }
     if(sum==m)
        cout<<"armstrong";
    else
        cout<<"not armstrong";
        return 0;
}