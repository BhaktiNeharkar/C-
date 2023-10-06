#include <iostream>
using namespace std;
int main()
{
    int hour;
    cout<<"Enter hour";
    cin>>hour;
    if (9<=hour && 18>=hour)
    {
        cout<<"Working";
    }
    else
    {
        cout<<"Leisure";
    }
    return 0;
}