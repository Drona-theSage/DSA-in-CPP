//Objective: Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
//           You must implement a solution with a linear runtime complexity and use only constant extra space.
// constraints: # 1 <= nums.length <= 3 * 10^4
//              # -3 * 104 <= nums[i] <= 3 * 10^4
//              # Each element in the array appears twice except for one element which appears only once.
//link to problem: https://leetcode.com/problems/single-number/description/

//Approach: We can use XOR operator . Since XOR between Same numbers give 0 and while different number gives 1. So we will XOR all values in an array.


#include <iostream>
#include <vector>
using namespace std;

int main( )
{
    vector <int> array; //initialized a zero size vector;
    int size, num, count ;
    cout<<" Enter the number of entries in the array/vector= ";
    cin>>size; //take the size from input.
    cout<< " Enter the Elements for the array: \n";
    for(int i =0 ; i<size ; i++)
    {
        cin>>num; 
        array.push_back(num);
    }

    int single = 0;
    for(int i= 0 ; i< size ; i++)
    {
        single ^= array[i];
    }
    cout<<single<<endl;
    return 0;
}
 

