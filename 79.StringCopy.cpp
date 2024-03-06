#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[20]="";
    char s2[20]="gooood";
    
    strcpy(s1,s2);

    cout<<s1;
}