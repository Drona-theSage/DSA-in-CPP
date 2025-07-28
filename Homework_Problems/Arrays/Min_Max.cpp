//Objective : The goal is to find the smallest and Largest element present in a given array of max_size= 10 and print it.
//Learning : #Finding length of array , #Searching in an array , #Printing an Array.

// My code goes here:

#include <iostream>
#include <climits>
using namespace std;

void Min_Max(int arr[], int size)
{
    //initializing MIN and MAX variable before searching,
    int Min = INT_MAX;
    int Max = INT_MIN;
    
    for(int i = 0 ; i < size ;i++)
    {
        if(arr[i] < Min)
        {
            Min = arr[i];
        }
        if( arr[i] > Max)
        {
           Max = arr[i];
        }
    }

    //print the Min and Max elements.
    cout<<" Minimum = "<<Min<<" \n Maximum = "<<Max<<endl;
}


int main()
{
    int arr[10];
    cout<<" Enter Nmbers for the array: "<<endl;
    for(int i = 0 ; i<10 ; i++ )
    {
        cin>> arr[i];
    }

    //calling the function to print the max and minimum element present in the array.
    Min_Max(arr, 10);

    return 0;
}