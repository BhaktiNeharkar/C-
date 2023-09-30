#include <iostream>
using namespace std;
int main ()
{
    float u,v,s,a;
    cout<<"Enter the values of v,u,a";
    cin>>v>>u>>a;
    s=((v*v)-(u*u))/(2*a);
    cout<<"Area of Circle is "<<s;
    return 0;
}