#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str="madam";
    string rev=" ";
    int i,j;
    int len;
    len=(int)str.length();
    
    rev.resize(len); 

    for(i=0;j=len-1;i< len;i++;j--)
    {
       rev[i]=str[j];
    }

    rev[len]='\0';

    cout<<rev<<endl;

    return 0;
}