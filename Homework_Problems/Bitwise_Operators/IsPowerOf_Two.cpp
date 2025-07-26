//Ques> Figure out how to find if a number is a power of 2 without using a loop.
//approach : Without using loop , i can try left or right shift operator to check if the given number is even ? Because if its a power of 2 then it must be even.

//your code goes here:

#include <iostream>
using namespace std ; 
  
int main()
{
    int  number ;
    cout<<" Enter the number to verify: ";
    cin>> number;
    // we will be using goto control statement to send the control to our if checks repeteadly :
    // here EVEN is a label which refers to the case: if number is even. 

    //Note-1 :The Program won't terminate if you don't update the value of number for 2nd round, because otherwise you'll just be passing the same number back.
    //Note-2 :The base case should be the first check otherwise in the if-else hierarchy--> ((number >>1) % 2 !=0 ) was getting evaluated first and thus--> wrong output.
    EVEN: 
    if((number >> 1) == 1  ) //checking for if the number is 2?. This is actually our default/Final case.
    {
        cout<< " YES, it is a power of 2. End of program.";
    }else if ( (number >> 1) % 2 != 0)   // The number is ODD.
    { 
        cout<< "Not a Power of 2. End of program. ";
    } else{
        number = number >> 1 ;
        goto EVEN;
    }
    return 1;

}