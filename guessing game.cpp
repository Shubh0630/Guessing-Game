#include<iostream>
using namespace std;

int main()
{
    int secretnum=8;
    int guess;
    int guesscount=0;
    int guesslimit=3;
    bool outofguesses=false;
    
 while(secretnum != guess && !outofguesses)
    {
     if(guesscount<guesslimit)
       {
         cout<<"Enter guess:";
         cin>>guess;
         guesscount++;
        }
     else 
        {
         outofguesses = true;
        }
     }
 if(outofguesses)
{
  cout<<"you lose!";
}
else
{
  cout<<"you win!";
}
   
  
    return 0;
}