#include<iostream>
#include <cctype>
using namespace std;
/*
Problem Statement:Conditional Range Sum Queries
You are given an integer array arr of length n and multiple queries. Each query consists of:

    #A range [left, right] where 0 <= left <= right < n.
    #A condition that specifies which elements to include in the sum. Conditions will be one of a predefined set, for example:
    #"all": Sum all elements in the range.
    #"positive": Sum only the positive elements in the range.
    #"even": Sum only the even elements in the range.

Goal:
 For each query, return the sum of the elements in the specified range that satisfy the given condition.
Constraints:
    1 <= n <= 100,000
    Each element of the array arr[i] is an integer in the range [-10^5, 10^5].
    You can assume all queries have valid ranges.
    The conditions are always from a known set (e.g., "all", "positive", "even").
 
Requirements:
    Preprocessing Time: O(n) or O(n) per condition if multiple conditions are preprocessed.
    Query Time: O(1) for each query after preprocessing.
    Space Complexity: O(n) additional space for prefix sums. If you store multiple prefix sums for different conditions, it’s still considered O(n) overall.

Input/Output Example:

Input Array: [2, -1, 3, 4, -2, 5]

Queries:
#(left=1, right=4, condition="positive")
   Sum of positive numbers from index 1 to 4: 3 + 4 = 7

#(left=0, right=5, condition="even")
   Sum of even numbers from index 0 to 5: 2 + 4 - 2 = 4

Output:
7
*/

//my code goes here:

void build_prefix_arr(int arr[], int prefix_arr[], int size, string condition)
{
   if(condition == "all")
   {
         int running_sum =0;
         for(int i =0 ; i< size ; i++)
         {
              running_sum += arr[i];
              prefix_arr[i] = running_sum;
         }
   }

   if(condition == "positive")
   {
         int running_sum =0;
         for(int i =0 ; i< size ; i++)
         {
              if(arr[i] >=0)
              {
                  running_sum += arr[i];
              }
              prefix_arr[i] = running_sum;
         }
   }

   if(condition == "even")
   {
         int running_sum =0;
         for(int i =0 ; i< size ; i++)
         {
              if(arr[i] %2 ==0)
              {
                  running_sum += arr[i];
              }
              prefix_arr[i] = running_sum;
         }
   }

}

int main()
{
    int arr[6];
    int size = 6;
    string condition;

    int Prefix_all[7];
    int Prefix_positive[7];
    int Prefix_even[7];

    cout<<"Enter elements of the array :";
    for(int i =0 ; i<6 ; i++)
    {
        cin>> arr[i];
    }
    //In What range you want to find the sum?
    int left , right;
    cout<<" Enter Left index: ";
    cin>> left ;
    cout<<" Enter Right index: ";
    cin>> right;
    cout<<" Enter condition (all/positive/even): ";
    cin>> condition;

    
   //building th prefix arrays
   //Prefix_all:
   build_prefix_arr(arr, Prefix_all, size, "all");
   //Prefix_positive:
   build_prefix_arr(arr, Prefix_positive, size, "positive");
   //Prefix_even:
   build_prefix_arr(arr, Prefix_even, size, "even");
   cout<<"Prefix builds are done!"<<endl;

   //printing the prefix_arrays for verification: 
        // cout<<"Prefix_all array: ";
        // for(int i =0 ; i< size ; i++)
        // {
        //     cout<< Prefix_all[i]<<" ";
        // }
        // cout<<endl;
        // cout<<"Prefix_positive array: ";
        // for(int i =0 ; i< size ; i++)
        // {
        //     cout<< Prefix_positive[i]<<" ";
        // }
        // cout<<endl;
        // cout<<"Prefix_even array: ";
        // for(int i =0 ; i< size ; i++)
        // {
        //     cout<< Prefix_even[i]<<" ";
        // }
        // cout<<endl;

  //now answering the query:
  cout<<"Answering the query..."<<endl;
  if(condition=="all")
  { int sum = Prefix_all[right] - ( left > 0 ? Prefix_all[left -1] : 0);
    cout<<sum<<endl;
  }

  if(condition=="positive")
  {
    int sum = Prefix_positive[right] - ( left > 0 ? Prefix_positive[left -1] : 0);
    cout<<sum<<endl;
  }
  
  if(condition == "even")
  {
    cout<<"inside if conditon even"<<endl;
    int sum = Prefix_even[right] - ( left > 0 ? Prefix_even[left -1] : 0);
    cout<<sum<<endl;
  }

   return 0;
}