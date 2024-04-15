#include <iostream>
using namespace std;
int main()
{
    string str="Welcome";
    int i;
    int count=0;

    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }
    cout<<"Length is "<<count<<endl;

    return 0;
}