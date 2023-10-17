#include <iostream>
using namespace std;
int main()
{
    cout<<"Menu\n";
    cout<<"Add\n"<<"Sub\n"<<"Mult\n"<<"Div\n";
    
    int option;
    cout<<"Select your Option ";
    cin>>option;
    
    int a,b,c;
    cout<<"Enter 2 numbers ";
    cin>>a>>b;
    
    switch (option)
    {
     case 1 : c=a+b;
     break;
     case 2 : c=a-b;
     break;
     case 3 : c=a*b;
     break;
     case 4 : c=a/b;
     break;
    }
    cout<<"Result is "<<c;
    return 0;
}