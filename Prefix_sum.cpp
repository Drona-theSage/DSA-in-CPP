#include <iostream>
using namespace std;
/*
Problem Statement:
Imagine you have an integer array, and you need to perform multiple sum queries on it. Specifically,
I will give you several pairs of indices (left, right), and for each pair, your task is to find the 
sum of the elements in the array from index left to index right (inclusive).

Constraints:
1 ≤ size of array ≤ 100,000
Each element in the array is an integer in the range [-10^5, 10^5].

//Example:
Suppose the array is [1, 2, 3, 4, 5].

#A query (1, 3) would ask for the sum of elements from index 1 to index 3, which is 2 + 3 + 4 = 9.
#A query (0, 4) would ask for the sum of the entire array, which is 1 + 2 + 3 + 4 + 5 = 15.

My code goes here:
*/ 
int rangeSumQuery(int arr[], int size, int left , int right)
{
    //creating prefix sum array to preproccess the running sum for each index , time complexity: O(n).
  int prefix_sum[100000];
  int running_Sum=0;
  for(int i =0 ; i< size ; i++)
  {
      running_Sum += arr[i];
      prefix_sum[i] = running_Sum;
  }
    //Now answering each query in O(1) time complexity.

   int sum = prefix_sum[right] - ( left > 0 ? prefix_sum[left -1] : 0);

   //return the sum from index left to right in the given array;
  return sum;
}


int main()
{
    int arr[10] ;
    cout<<"Enter elements of the array :";
    for(int i =0 ; i<10 ; i++)
    {
        cin>> arr[i];
    }
    
    //In What range you want to find the sum?
    int left , right;
    cout<<" Enter Left index: ";
    cin>> left ;
    cout<<" Enter Right index: ";
    cin>> right;

    //print the original array: for comaprision
    cout<<"The array from (:"<< left <<","<< right <<") is : ";
    for(int i =left ; i<=right ; i++){
        cout<< arr[i]<<" ";
    }

    //Sum in Range:
    cout<<"\nThe sum in the range ("<< left <<","<< right <<") is : "<< rangeSumQuery(arr,10,left,right)<<endl;

    return 0;
}