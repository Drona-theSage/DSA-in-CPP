//THis is a program to test and implement vectors and some of it most common functions.
//What we will be doing: 
/*
  #Initialise a vector 
  # Test its Dynamic resizing through size() and capacity() functions.
  # Take Input in Vectors and Implement a linear search for finding a number.
  #Test push_back , pop_back , front() and back() functions.
*/

//My code goes here:

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> vector1(2,1) ;   //declared and initialised a vector of size 2 with all values 0.
    cout<< " This is an example program to test vectors: \n 1)Current vector size= "<<vector1.size()<< " \n 2) Current Capacity= "<<vector1.capacity()<<endl;
    cout<<" Enter a number to add in vectors. To check dynamic resizing : ";
    int input;
    cin>>input;
    vector1.push_back(input);
    cout<<" Here's the vector>> \n 1)Size = "<<vector1.size()<<" \n 2)Vector Capacity= "<<vector1.capacity()<<endl;
    cout<< " Lets delete an element now. So using the pop_back() function with our vector. We can Delete the last added element, in our case it will be 6"<<endl;
    vector1.pop_back();
     
    cout<< "Printing the entire Vector: \n";

    for(int value : vector1)  //used for each loop for vectors.
    {
        cout<<value<<" ";
    }
    cout<<endl;

    return 0;
}
