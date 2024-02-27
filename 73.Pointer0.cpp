#include <iostream>
using namespace std;
int main()
{
    int T[]={1,2,3,4,5,6,0,7};
    int*p=T;

    p++;
    p++;
    p=p+4;
    cout<<*p;
    return 0;
}