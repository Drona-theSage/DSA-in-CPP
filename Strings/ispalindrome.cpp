//Objective:
// Given a boolean function isPalindrome which takes a string as argument and is of return type boolean.
// Check whether a given string is palindrome or not.

//Time Complexity:
// Space Complexity:


#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str)
{
  int front, end;
  end = str.length()-1;
  bool flag =true;
  for(front =0 ; front < end ; front++, end--)
  {
    if(str[front] != str[end])
    {
        flag = false;
        break;
    }
  }


  return flag;
}



int main(){

    string str1 = "racecar";
    string str2= "malayalam";
    string str3= "comic";
    
    cout<< isPalindrome(str1) <<endl;  
    cout<< isPalindrome(str2) <<endl;  
    cout<< isPalindrome(str3) <<endl; 
    
    return 0;
}