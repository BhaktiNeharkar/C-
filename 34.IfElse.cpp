#include <iostream>
using namespace std;
int main ()
{
    float age;
    cout<<"Enter your age ";
    cin>>age;
    if(age>50 || age<12)
    cout<<"Eligible to get Free offer "<<age;
    else
    cout<<"NOT Eligible for the offer "<<age;
    return 0;
}