/**
 * Problem: Maximum Subarray Sum with at Least k Elements
 * description: Given an integer array, find the contiguous subarray (containing at least k elements) which has the largest sum and return its sum.
 * constraints:
 *           1 <= size of array <= 10^5
 *          -10^6 <= elements of array <= 10^6
 *         1 <= k <= size of array
 *        # -compute in O(n) time and O(n) space.
 *       # -Incase of all negative elements, return the least negative element.
 * 
 * Approach: Modified Kadane's Algorithm with sliding window logic to calculate sums of subarrays with at least k elements.
        * time complexity: O(n)
        * space complexity: O(1)
 
 * How pitch the final approach in an interview:
    * “I first compute the sum of every subarray of size exactly k using a sliding window. Then, for elements beyond the window,
    *  I apply Kadane’s logic to decide whether extending the subarray improves the sum. This way,
    *  I always respect the minimum-length constraint while still achieving an optimal linear-time solution.”
 
 */

 //my code goes here:

#include <iostream>
using namespace std;
int Maximum_Sum_Atleast_K(int arr[], int size, int k)
{
    if(size<1 || k>size)
    {
        return -1; //invalid case
    }

    // Step 1: Compute sum of first k elements
    //generate the best sum so far array:
    int bestSum[7];
    //calculate best sum array using kadane's algorithm for each element in our original array.
    int csum= 0;
    for (int i=0; i < size; i++)
    {
        if((arr[i] + csum)<0)
        {
            csum=0;
        }else{
        csum += arr[i];
        }
        bestSum[i]= csum;
    }

    //find the sum of first k elements , making a window of size k.
    int window_sum= arr[0];
    for (int i = 1; i < k; i++)
    {
        window_sum += arr[i];
    }

    int max_sum = window_sum;
    //Step 2: Iterate through the array starting from k-th element
    for (int i = k; i < size; i++)
    {
        int next_element = arr[i];
        window_sum += next_element - arr[i - k]; //shift window forward.

        //update max_sum if the best sum uptil index[i-k-1] + window_sum is greater than current max_sum
        int best_sum_with_atLeast_Kelement = bestSum[i - k] + window_sum;
       max_sum = max(max_sum, max(window_sum, best_sum_with_atLeast_Kelement));
    }

    return max_sum;

}

int main(){
    int arr[1] = {-1};

    int size = 1;
    int k = 1; //minimum size of subarray

    cout<<"Given array is: ";
    for(int i =0 ; i< size ; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Maximum subarray sum with at least "<<k<<" elements is: "<<Maximum_Sum_Atleast_K(arr, size, k)<<endl;
    return 0;
}