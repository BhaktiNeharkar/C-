#include <iostream>
using namespace std;
int main()
{
   int A[]={4,6,27,15,31,22,30,29,8,16};
    int min=A[0];
    
    for(int i=0;i<10;i++)
    {
        if(A[i]<min)
        {
            min=A[i];
        }
        cout<<"Min number is "<<min<<endl;
    return 0;
    }
}