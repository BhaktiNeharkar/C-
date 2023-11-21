#include <iostream>
using namespace std;
int main()
{
   int A[]={4,6,27,15,31,22,30,29,8,16};
    int max=A[0];
    
    for(int i=0;i<10;i++)
    {
        if(A[i]<max)
        {
            max=A[i];
        }
    }   
    cout<<"Max No. is "<<max<<endl;
    return 0;
}
