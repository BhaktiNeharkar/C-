#include <iostream>
using namespace std;
int main()
{
    int T[]={23,45,67,89,56};
    int *p=T;

    p++;
    p++;
    p++;
    p=p-1;
    cout<<*p;
    return 0;
    }