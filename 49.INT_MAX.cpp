#include <iostream>
using namespace std;
int main()
{
    int min,x;
    int A[7] = {1,-2,3,4,5,6,7};
     
     for(auto x:A)
     min=INT_MAX;
       {
        if(x<min)
        min=x;
       }
       cout<<"Maximum number is "<<min<<endl;
       return 0;
}