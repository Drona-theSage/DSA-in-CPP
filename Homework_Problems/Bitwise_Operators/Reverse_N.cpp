//Ques: Write a function to reverse an Integer N.
//Approach: We can use the % and / arithematic operators to pick the digits and then reverse them into a new number.

//my code goes her:

#include <iostream>
using namespace std;

int Reverse_Num (int number)
{
    int digit, reversed_num=0;
    while(number != 0)
    { 
        digit = number % 10;
        reversed_num = reversed_num *10 + digit; 
        number /= 10;
    }

    return reversed_num;
}

int  main()
{
    cout<< " Enter the number to reverse it : ";
    int original_num;
    cin>>original_num ;
  
    // using a while loop instead of a for loop  because we dont know how big is the given number therefore we dont know for what length should the loop run for.
    //call the function to reverse the number.
    cout<< "Reversed number is = "<<Reverse_Num(original_num)<<endl;
    
    return 1;

}