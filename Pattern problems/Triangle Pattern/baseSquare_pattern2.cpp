//problem: Take a variable size input from the user and then print a square pattern as following:
/* A B C
   D E F
   G H I   (This is an example for size 3)*/
   
//Approach: Since we want to print characters we can use char datatype and initialize it with 'A' and increment it each time.

//your code goes here:

#include <iostream>
using namespace std;

int main()
{
    char letter = 'A';
    int size;
    cout<<"Enter size of pattern=";
    cin>>size;

    for( int row=0 ; row < size ; row++)
    {
        for(int column = 0; column < size ; column++)
        {
            cout<<letter++<<" ";
        }
        cout<<endl;
    }
}
