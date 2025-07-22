/*Print a teiangle following the pattern given below also take the size dyanimcally.*/
/*
   #
   # #
   # # #
   # # # #   
*/

//Approach : if rows are counted from 0 then every i^th row has i+1 #.
//your code goes here:

#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<< "Enter the size of the pattern matrix: ";
    cin>>size;
    
    for(int row = 0 ; row < size ; row++)
    {
         for (int column = 0 ; column <= row; column++)
         {
            cout<< "#"<< " ";     // every row will have the same number of stars or "#" as itself. That is 2nd row will have 2 # AND so on.
         }
         cout<< endl;

    }

    return 0;
}