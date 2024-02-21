#include <iostream>
using namespace std;
int main()
{
    int A[]={2,3,4,5,6,7,8,9};
    int *p=A;

    p++;
    cout<<*p;
    return 0;
}