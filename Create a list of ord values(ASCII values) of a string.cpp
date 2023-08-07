/*
You are given a string SS. SS can contain any alphanumeric character [0 - 9], [a - z] and [A to Z].
Create a new array AA, as follows:

    For each character of string SS - append its ordord value or ASCIIASCII value to the list AA

You need to generate and output the values in the array AA.
Input Format

    The first line will contain tt - the number of test cases. Then the test cases follow
    Each line of the test case consists of a single line of input - the string SS

Output Format

    Output the list AA
*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	
	int t;
    cin >> t;
	
	while(t--)
	{
	    string S;
	    cin >> S;
	    int A[S.length()];
	    
	    for(int i = 0; i < S.length(); i++)
	    {
            //Converts a character into its ASCII value
	        A[i] = int(S[i]);
	    }
	    for(int i = 0; i < S.length(); i++)
	    {
	        cout << A[i] << " ";
	    }
	    cout << endl;    
	
	}

}
