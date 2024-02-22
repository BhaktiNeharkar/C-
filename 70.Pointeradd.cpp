#include <iostream>
using namespace std;
int main()
{
    int r[]={23,45,67,89,93};
    int*p=r;

    p++;
    p=p+3;
    cout<<*p;
    return 0;
}