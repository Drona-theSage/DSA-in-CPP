#include <iostream>
using namespace std ;

int Minimum_subarr_reachingTargetSum(int arr[] , int size, int targetsum )
{

    if(size<1)
    {
        return -1;
    }else if(size==1)
    {
        return 1;
    }
  int front =0;
  int sum = 0;
  int minlen = INT16_MAX;

  for(int end =0 ; end < size ; end++)
  {
    sum += arr[end];
     
    while(sum>=targetsum && front<=end)  // front<= end because if in case of length 1 solutions front will go ahead of end and minimum length will become 0;
    {
      int windowlen = end - front + 1;
      minlen = min(windowlen , minlen);

      //remove the front element from the sum
      sum -= arr[front];
    //   shorten the window
      front++;
    }
  }

  return (minlen == INT16_MAX) ? -1 : minlen;
}


int main(){
    int arr[7]={1,2,3,1 ,2 ,1,4};
    cout<<Minimum_subarr_reachingTargetSum(arr ,7, 8 )<<endl;

    //print array

    // for(int i=0 ; i<1; i++)
    // {
    //    cout<< arr[i]<<" ";
    // }
    
    return 0;
}