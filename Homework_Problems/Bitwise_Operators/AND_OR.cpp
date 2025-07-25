//THis file demonstrate the usage of the following bitwise operators in C++;
// # Bitwise AND,
// # Bitwise OR,
// # Bitwise XOR.

//here goes my Code:
#include<iostream>
using namespace std;

    int main()
    {
        cout<<"THis is an example of Bitwise Operators in C++."<<endl;
        int choice;
        menu:
        cout<<" Which operator would you like to test :\n 1. AND \n 2. OR \n Enter your choice in digits:  ";
        cin>>choice;
        switch(choice)
        {
            case 1: 
                cout<<"Enter the two numbers with a space in between to perform bitwise AND :";
                int num1 ,num2;
                cin>> num1>>num2;
                cout<<num1<<"&(AND) "<< num2<<"= "<< (num1 & num2 ) << endl;  //note: if you dont use brackets then the c++ compiler gets confused wether it needs to do left shift on num2 or if its part of cout.
                cout<< " Here the bitwise AND is performed between the individual bits of the given numbers.\n The rules for Bitwise AND are as follows: \n # 1 AND 1 = 1 \n # 0 AND 0 = 0 \n # 1 AND 0 = 0 \n # 0 AND 1 = 0.\n  ";
                break;

            case 2: 
                cout<<"Enter the two numbers with a space in between to perform bitwise OR :";
                int num3 ,num4;
                cin>> num3>>num4;
                cout<<num3<<"&(AND)" << num2<< "= "<< (num3 | num4) <<endl ;
                cout<< " Here the bitwise OR is performed between the individual bits of the given numbers.\n The rules for Bitwise OR are as follows: \n # 1 AND 1 = 1 \n # 0 AND 0 = 0 \n # 1 AND 0 = 1 \n # 0 AND 1 = 1.\n  ";
                break;

            default: 
                   cout<<"wrong choice, would you like to go back to the menu? (Y/N): ";
                   char decision ;
                   cin>>decision;
                   if (decision== 'Y')
                   {
                    goto menu;
                   }else cout<<"Hope you learned well. Program terminated.";
                   
        }
        return 0;
    } 

