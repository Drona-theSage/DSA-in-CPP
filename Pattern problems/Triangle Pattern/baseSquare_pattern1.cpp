//problem: Take a variable size input from the user and then print a square pattern as following:
/* 1 2 3
   4 5 6
   7 8 9   (This is an example for size 3)*/

   //your code goes here:
   
   #include <iostream>
   using namespace std;

   int main()
   {
    //take input from user for the size of matrix:
    int size;
    cout<<"Enter a size for the square pattern =";
    cin>>size;

    int num =1; //starting the pattern with 1.
    for(int row = 0; row < size; row++)
    {
        for(int column=0; column < size; column++)
        {
            cout<<num++<<" ";  //print num then increment its value by 1.
        }
       cout<<endl;
    }

    return 0;
   }


