/*
 problem: Given an integer array, find the contiguous subarray (containing at least one element) which has the largest sum and return its sum.
 Furthermore  the array may contain both positive and negative numbers along with zeroes and the array will always contain at least one element.
 constraints: 
             1 <= size of array <= 10^5
            -10^6 <= elements of array <= 10^6
            #-compute in O(n) time and O(1) space.
            #-Incase of all negative elements, return the least negative element.
    approach: Kadane's Algorithm
    time complexity: O(n)
    space complexity: O(1)

How pitch the final approach in an interview:
“Since we are looking for the maximum sum of a contiguous subarray, Kadane’s algorithm is appropriate.
We iterate once through the array while maintaining two variables: current_sum, which stores the maximum subarray sum ending at the current index, and max_sum, which stores the global maximum so far.
At each element, we decide whether to start a new subarray from the current element or extend the existing one by comparing arr[i] with current_sum + arr[i].
If the running sum becomes negative, we discard it, because a negative prefix can never improve a future subarray.
This allows us to compute the answer in linear time using constant space.”

*/ 

//my code goes here:
#include <iostream>
using namespace std;  

//my function:

int Maximum_Subarray_Sum(int arr[], int size)
{
    if(size ==1)
    {
        return arr[0]; //single element corner case. 
    }

    int current_sum =arr[0];
    int max_sum = arr[0]; //initialize to first element to handle all negative case

    //kadane's algorithm.
    for(int i =1 ; i< size ; i++)
    {
        current_sum = max(arr[i], current_sum + arr[i]);   
        max_sum = max(max_sum, current_sum);
    }
    return max_sum;
}

int main()
{
    int arr[8] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int size = 8;
    cout<<"Given array is: ";
    for(int i =0 ; i< size ; i++)
    {
        cout<< arr[i]<<" ";
    }   
    cout<<endl;
    cout<<"Maximum Subarray Sum is: "<<Maximum_Subarray_Sum(arr, size)<<endl;
    return 0;
    
}