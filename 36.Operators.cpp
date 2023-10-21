#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Enter Values of a,b ";
    cin>>a>>b;
    c = a + b ;
    {
    if (c>=34 || c<=12)
    cout<<"Number is valid";
    else
    cout<<"INVALID";
    }
    return 0;
}