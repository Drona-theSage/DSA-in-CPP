//Ques> Figure out how to find if a number is a power of 2 without using a loop.
//approach : Without using loop , i can try left or right shift operator to check if the given number is even ? Because if its a power of 2 then it must be even.

//your code goes here:

#include <iostream>
#include <cmath>
using namespace std ; 

  
int main()
{
    int  number ;
    cout<<" Enter the number to verify: ";
    cin>> number;

    //check for power of 2 using while loop
        // int power=0;
        // while(pow(2,power) <number)
        // {
        //     power++;
        // }

        // if(pow(2,power) == number)
        // {
        //     cout<< "YES, it is a power of 2. End of program.";
        //     return 1;
        // }
        // else
        // {
        //     cout<< "NO, it is not a power of 2. End of program.";
        //     return 0;
        // }

    //check for power of 2 without using loops , instead using bitwise AND operator 
    if((number > 0) && ((number & (number -1)) == 0))
    {
        cout<< "YES, it is a power of 2 . End of Program."<<endl;
    }else cout<< "NO , it is  not a power of 2. End of  program." <<endl;

    return 0;
}