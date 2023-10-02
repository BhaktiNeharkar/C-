#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x1, x2, y1, y2,d;
    cout<<"To find the distance between 2 points ";
    cin>>x1>>x2>>y1>>y2;
    d=sqrt((x2-x1)^2-(y2-y1)^2);
    cout<<"Your Answer is "<<d;
    return 0;
}