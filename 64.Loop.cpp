#include <iostream>
using namespace std;
int main()
{
int rev=0;
int n;
    int m=n;
    int r;
    
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    cout<<rev;   
    return 0;
}