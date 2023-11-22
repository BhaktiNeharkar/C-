#include <iostream>
using namespace std;
int main()
{
    int A[]={2,3,4,5,6,7,8,9,10,23,45,68,57};
    int i,key,l,h,mid;
    cout<<"Enter key";
    cin>>key;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==A[mid])
        {
            cout<<"Found at"<<i<<endl;
        }
        else 
        if(key<A[mid]) h=mid-1;
        else l=mid+1;       
    }
    cout<<"NOT FOUND";
    return 0;
}
