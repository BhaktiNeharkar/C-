#include <iostream>
using namespace std;
int main()
{
    int B[]={1,2,3,4,5,6,7};
    int *p=B;

    p++;
    p++;
    p--;
    cout<<*p;
    return 0;
}