#include<iostream>
#include <cstring>
using namespace std;
int main()
{  
    int x;
    char s1[20]="345";
    char s2[20]="46.56";

    x=strtol(s1,NULL,10);
    
    cout<<x+5;

    return 0; 
} 