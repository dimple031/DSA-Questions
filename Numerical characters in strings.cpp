/*
#codechef- c++ _ problem solving 2
For some programming problems, it is beneficial to treat numbers as strings.

You are given an integer AA.
Can the digits of AA be rearranged such that the resulting number is divisible by 55?
Input Format

    The first line will contain tt - the number of test cases. Then the test cases follow
    Each line of the test case consists of a single line of input - the number AA

Output Format

    For each test case output 'YES' if the number AA can be rearranged such that it becomes divisible by 55, and 'NO' otherwise
  */

#include <iostream>
#include <string>
using namespace std;

int main() 
{
  int t;
  cin>>t; 
  while(t--)
  {
   string A;
   cin>>A;
   int flag=0;

  // If any '0' or '5' is found in the string A - then set flag as 1 and exit the loop
   for(int i=0; i<A.length();i++)
      {
        if(A[i]=='0' || A[i]=='5')
          {
            flag = 1;
            break;
          } 
      }
    if(flag == 1)
      {
        cout<<"Yes"<<endl;
      }
    else
      {
        cout<<"No"<<endl;
      }

  }
 return 0;
}
