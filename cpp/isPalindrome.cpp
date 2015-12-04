// Program to check whether a string is a palindrome.

#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string& str)
{
  int length = str.length();
  int limit = length/2;

  bool palindrome = true;
  for(int i = 0;i < limit;i++)
    {
      if(str[i] != str[length - 1 - i])
	{
	  palindrome = false;
	  break;
	}
    }
  return palindrome;
}


main()
{
  string str;
  cout<<"Enter a string."<<endl;
  cin>>str;
  
  if(isPalindrome(str))
    {
      cout<<"String is a palindrome."<<endl;
    }
  else
    {
      cout<<"String is not a palindrome."<<endl;
    }

}
  
  
