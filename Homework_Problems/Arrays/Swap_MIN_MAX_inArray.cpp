//objective: To write a function which swaps the value of maximum and minimum elements in array with each other.

//Approach: Well if the array only had unique elements then this would be a walk in the park . But if it had repeated values of minimum and maximum elements then which one to swap and with whom?
         // therefore we need to keep track of every index where minimum and maximum are present and then swap those values, but this would need extra space as we would need to use seperate arrays to store the index ,
         // a better way would be to to find min and max values and afterwards we can use if case inside a loop to swap min value places with max ones and vice versa.
         
    //my code goes here:

#include <iostream>
#include <climits>
using namespace std;


void Swap_Min_Max(int arr[], int size)
{
    int max= INT_MIN, min= INT_MAX;
    for(int i = 0 ; i<size ; i++ )
    {
     if(arr[i] < min)
     {
        min = arr[i];
     }
     if(max < arr [i] )
     {
        max= arr[i];
     }
     //found max and min of the array.
    }

    //now to swap all instances of them:
    for( int i = 0 ; i < size ; i++){
        if(arr[ i ] == min)
        {
            arr[ i ] = max;
        }else if(arr[ i ] == max)
        {
            arr[ i ] = min;
        }
    }

}

int main()
{
    cout<<" Enter the numbers for an array (6) = "<<endl;
    int arr[6];
    
    for(int i = 0; i < 6; i++)
    {   
        cin>> arr[i];
    }

    //calling the swapping function.

    Swap_Min_Max(arr , 6);
    //print the modified array
    for(int i = 0 ; i < 6 ; i++)
    {
      cout<< arr[i]<< " ";
    }
    cout<<endl;
    return 0;
}