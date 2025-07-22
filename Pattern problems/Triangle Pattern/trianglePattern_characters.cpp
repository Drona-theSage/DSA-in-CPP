/*Print a teiangle following the pattern given below also take the size dyanimcally.*/
/*
   A
   B B
   C C C 
   D D D D   
*/

//Approach : if rows are counted from 0 then every i^th row has i+1 characater and at the end of every row increment by 1.
//your code goes here:

#include <iostream>
using namespace std;

int main(){
    int size;
    cout<< "Enter size of pattern matrix : ";
    cin>> size;
     char letter = 'A';
    for( int row= 0 ; row < size; row++)
    {
        for( int column = 0 ; column <= row ; column ++)
        {
          cout<< letter<< " ";
        }
         letter++;
         cout<<endl;
    }

    return 0;
}