#include <iostream>
using namespace std;
int main()
{
    int A[]={34,5,8932,872,24,1};
    int i,n,key,value;
    cout<<"Enter a value ";
    cin>>key;
    for(i=0;i<6;i++)
    {
        if(key==A[i])
        {
            cout<<"Found at "<<i;
            exit(0);
        }
    }
    cout<<"NOT found";
    return 0;
}