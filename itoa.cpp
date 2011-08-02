// program that implements the itoa function.

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string itoa(int n)
{
  if( n == 0)
    {
      return "0";
    }

  string str;
  int digit;
  while(n > 0)
    {
      digit = n%10;
      n = n/10;
      str.push_back('0' + digit);
    }
  
  
  
  
