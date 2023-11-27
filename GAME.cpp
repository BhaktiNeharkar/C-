#include <iostream>
using namespace std;
int main()
{
    int guessednumber,count=0;
    srand(static_cast<unsigned int>(time(nullptr)));
   int randomnumber =rand()%100+1;
     while(randomnumber!=guessednumber)
    {
        cout<<"Enter a number"<<endl;
        cin>>guessednumber;
    if(guessednumber==randomnumber)
    {
        cout<<"Correct Guessing "<<endl;
    }
    else
        if(guessednumber>randomnumber)
    {
        cout<<"Keep guessing for a lower number"<<endl;
    }
    else(guessednumber<randomnumber);
    {
        cout<<"Keep guessing for a higher number"<<endl;
    } 
    count++;
    }
   return 0;
}