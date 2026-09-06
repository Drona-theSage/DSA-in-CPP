#include <iostream>
using namespace std;
/*
Problem Name: Maximum Subarray Sum (Kadane’s Algorithm)
Problem Statement:
Given an array of integers, find the contiguous subarray with the largest sum.

#Example: 
Input:  [−2,1,−3,4,−1,2,1,−5,4]
Output: 6
Explanation: The contiguous subarray [4,−1,2,1] has the largest sum = 6.

Approach:
1. Initialize two variables: maxSoFar and maxEndingHere.
2. Iterate through the array.
3. At each element, update maxEndingHere to be the maximum of the current element or the sum of maxEndingHere and the current element.
4. Update maxSoFar to be the maximum of maxSoFar and maxEndingHere.
5. Return maxSoFar.
Time Complexity: O(n)
Space Complexity: O(1)
*/

int Maximum_sub_Sum(int arr[], int size)
{
    int maximum_sum = arr[0];
    int current_sum;

    //corner case
    if(size <1)
    {
        return -1;
    }

    for(int i =0 ; i < size ; i++)
    {
        current_sum += arr[i];
        /* 
        Handle the all negative elements case by resetting current_sum to arr[i] when current_sum becomes less than arr[i].
        This can be done using:
         current_sum = max(arr[i], current_sum + arr[i]);
         */
        if( current_sum < 0)
        {
            current_sum =0;
        }

    maximum_sum = max(maximum_sum , current_sum);
    }

    return maximum_sum;
}

int main()
{
    int arr[3];
    cout<<"Enter elements of the array :";
    for(int i =0 ; i<3 ; i++)
    {
        cin>> arr[i];
    }

   cout<<"Maximum sum Possible in the given array :"<< Maximum_sub_Sum(arr,3)<<endl;

   return 0;
}