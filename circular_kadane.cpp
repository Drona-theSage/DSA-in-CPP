//circular_kadane.cpp

#include<iostream>
using namespace std;
/*
(Circular Kadane’s Algorithm)

Problem Statement (Interview-Style)
    You are given an integer array arr of size n ( 1 ≤ n ≤ 10^5 ).
    The array may contain positive numbers, negative numbers, and zeros.
    Your task is to find the maximum possible sum of a non-empty contiguous subarray, assuming the array is circular.
What “circular” means
    After the last element, the array wraps around to the first element.
    A subarray may:
    lie completely inside the array (normal case), or
    wrap around from the end to the beginning.
*/

int Circular_maxSum(int arr[], int size)
{
    //apply kadane algorithm to find the max subarray sum and if the last element is positive,
    //then comapre max_sum with total_sum - min_subarray_sum.

    //kadane variables
    int curr_max=0;
    int max_sum= INT32_MIN;

    //variables for min subarray sum
    int total_sum=0;
    int curr_min=0;
    int min_sum= INT32_MAX;

    for(int i=0; i<size; i++)
    {
        //for max_sum
        curr_max += arr[i];
        if(curr_max > max_sum)
        {
            max_sum= curr_max;
        }
        if(curr_max < 0){
            curr_max=0;
        }

        //for min_sum
        curr_min += arr[i];
        if(curr_min < min_sum){
            min_sum= curr_min;
        }
        if(curr_min > 0)
        {
            curr_min=0;
        }
        total_sum += arr[i];
    }

     if(max_sum < 0) //all numbers are negative
     {
        return max_sum;
     }
     else
     {
        return max(max_sum, total_sum - min_sum);
     }
 
}


int main()
{
    int arr[7]= {-3, -2, -2, -1, -1, -3,-1};
    int size= 7;
    int max_sum_inCicular= Circular_maxSum(arr, size);
    cout<<"Maximum sum in circular subarray is: "<< max_sum_inCicular << endl;
    return 0;

}
