#include <iostream>
using namespace std;
int main()
{
    int max,x;
    int A[7] = {1,-2,3,4,5,6,7};
     
     for(auto x:A)
     {
     max=INT_MIN;
       {
        if(x>max)
        max=x;
       }
       cout<<"Minimum number is  "<<max<<endl;
     }
    return 0;
}