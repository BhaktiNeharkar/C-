#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str="MADAM";
    string rev=" ";

    int len=(int)str.length();
    
    rev.resize(len); 

    for(int i=0;int j=len-1;i<len; i++; j--)
    {
       rev[i]=str[j];
    }
    rev[len]='\0';

    cout<<rev<<endl;

    return 0;

}