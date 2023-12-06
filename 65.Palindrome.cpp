#include <iostream>
using namespace std;
int main()
{
    int rev=0;
    int n; 
    int r;
    int m=n;
    
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(rev==m)
        cout<<"palindrome";
    else
        cout<<"not a palindrome";
        return 0;
}
