#include <iostream>
#include <climits>
using namespace std;

/* problem statement :
You are given a binary array arr, which consists of only 0s and 1s
You are allowed to flip at most one 0 to 1.

Your task is to return the maximum number of consecutive 1s that can be obtained after flipping at most one 0.

#Constraints:
1 ≤ size of array ≤ 100,000

arr[i] ∈ {0, 1}

Array is not sorted

Elements may be scattered

You are allowed to flip at most one zero (not mandatory)

#Patter_ : SLiding WINDOW with atmost k bad elements
*/

//function to find maximum subarray of 1's after flipping atmost one 0
int Longest_Ones(int arr[], int size , int k)
{
    int max_len = 0;
    int zero_count =0;
    int start =0;

    //corner cases.
    if(size <1)
    {
        return -1;
    }
    
    //actual algorithm.
    for(int end = 0 ; end< size ; end++)
    {
        if(arr[end]== 0)
        {
            zero_count++;
        }

        while( zero_count >k)
        {
            //shrink the window 
            if(arr[start] == 0)
            {
                zero_count--;
            }
            start++;
        }

        max_len = max(max_len, end - start +1);
    }
  
    return max_len;

}

int main()
{
    int arr[6] = {1,1,0,0,1,0};
    cout<< Longest_Ones(arr, 6,3)<<endl;

}