//Objective: To print all the Unique values present in a given array.
//Approach : To find all the uniques a O(n-square) appraoch would be a nested loop with an extra array to do the following:
/*
  # Check the entire arary for each element to verify their uniqueness and then store them on a seperate array to print later.
*/

//an Optimal approach would be to use Hashing to initialize an empty array with 0's and then,
// On a single scan of the given array , for every value index of the hashing-Array increment the value . 
// after the scan is done , we will simply print all the elements of hashing array which are 1 in count. They all are unique elements.
// Risks: This needs a lot of space as we would need an index of the value , for example if there is an element value in the power of 10^9 then we would need that size of array . WHich would be inefficient.

//For that case we will be using hardcoded  data for this.

//my code goes here:-

#include <iostream>
using namespace std;   

void allUnique(int original_arr[], int size)
{
  int hashing_Arr[54]={0};
 // scan the given array to find uniques,

    for( int i =0 ; i<size ; i++ )
    {

    hashing_Arr[original_arr[i]]++;  //increments the value of hashing_array at index position which is equal to value of original_Arr[i]. 
    }
//now we can simply print the uniques by using indexes of hashing_array which have value=1.

    for(int i = 0 ; i< 54; i++)
    {
        if(hashing_Arr[i]==1)
        {
            cout<<i<<" ";
        }
    }

}


int main()
{
 int arr[12] = {1,1,3 ,53, 32, 23,22, 1 ,23 ,2,5,45};
 allUnique(arr, 12);
 return 0; 
}