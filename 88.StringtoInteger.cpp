#include<iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[20]="345";
    char s2[20]="46.56";

    cout<<strtol(s1,NULL,10)<<endl;
    
    return 0; 
} 