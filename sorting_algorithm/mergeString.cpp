// C++ code to alternatively merge two strings
#include <bits/stdc++.h>
using namespace std;

// Function for alternatively merging two strings 
string merge(string s1, string s2) 
{ 
        // To store the final string 
        string result = "";

        // For every index in the strings 
        for (int i = 0; i < s1.length() ||
                                        i < s2.length(); i++) 
        { 

                // First choose the ith character of the 
                // first string if it exists 
                if (i < s1.length()) 
                        result += s1[i];

                // Then choose the ith character of the 
                // second string if it exists 
                if (i < s2.length()) 
                        result += s2[i];
        } 
        return result; 
} 

// Driver code 
int main() 
{ 
        string s1 = "geeks"; 
        string s2 = "forgeeks"; 
        cout << merge(s1, s2);

        return 0;
}

// This code is contributed by gp6
