#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter age";
    cin>>x;
    if(x>50 || x<16)
    cout<<"Offer is open";
    else 
    cout<<"Offer is not open";
    return 0;
}