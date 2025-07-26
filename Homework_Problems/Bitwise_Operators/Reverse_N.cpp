//Ques: Write a function to reverse an Integer N.
//Approach: We can use the % and / arithematic operators to pick the digits and then reverse them into a new number.

//my code goes her:

#include <iostream>
using namespace std;

int  main()
{
    cout<< " Enter the number to reverse it : ";
    int original_num, digit, reversed_num=0;
    cin>>original_num ;
  
    // using a while loop instead of a for loop  because we dont know how big is the given number therefore we dont know for what length should the loop run for.
    while(original_num != 0)
    { 
        digit = original_num % 10;
        reversed_num = reversed_num *10 + digit; 
        original_num /= 10;
    }

    cout<< "Reversed number is = "<<reversed_num<<endl;
    
    return 1;

}