#include<iostream>
#include <climits>
using namespace std;

/*problem statement : 
You are given a binary array arr, which consists of only 0s and 1s. 
You need to find the length of the longest contiguous subarray that contains only 1’s after you delete exactly one element from the array.
You must delete one element—this deletion can be a 0 or a 1.

Constraints: 
#The array arr consists only of integers 0 and 1.
#The length of the array is between 1 and 100,000.
#You are required to delete exactly one element from the array to form the subarray.
*/


int MAX_ones(int arr[], int size)
{
    int max_len = 0;
    int zero_count =0;
    int start =0;

    //corner cases.
    if(size <1)
    {
        return -1;
    }else if( size ==1 && arr[0]==0)
    {
        return 0;
    }
    
    //actual algorithm.
    for(int end = 0 ; end< size ; end++)
    {
        if(arr[end]!= 0 && zero_count <=1)
        {
            max_len = max(max_len, end - start +1);
        }else {
            zero_count++;
        }

        while( zero_count >1)
        {
            //shrink the window 
            if(arr[start] == 0)
            {
                zero_count--;
            }
            start++;
        }
    }
  
    //incase ALL elements are 0
    if( max_len == 0)
    {
        return max_len;
    }else return max_len -1;

}

int main()
{
    const int size =8;
    int arr[size] ;
    cout<< " Enter the elemnets of the array!= "<<endl;

    for(int i = 0 ; i<size ; i++)
    {
        cin>>arr[i];
    }
     
    cout<< MAX_ones(arr, size)<<endl;

}