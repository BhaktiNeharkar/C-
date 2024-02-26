#include <iostream>
using namespace std;
int main()
{
    int Y[]={1,2,3,4,5,6,7,8,9,0,12} ;
    int *p=Y;
    
    p++;
    p++;
    p=p+7;


    cout<<*p;
    return 0;
}