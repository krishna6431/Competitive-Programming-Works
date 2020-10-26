#include<bits/stdc++.h>
using namespace std;

//Only solution class for the problem
// Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word (last word means the last appearing word if we loop from left to right) in the string.

// If the last word does not exist, return 0.

// Note: A word is defined as a maximal substring consisting of non-space characters only.

// Example:

// Input: "Hello World"
// Output: 5

// time complexity ---> o(n);
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int count = 0;
        int l = s.size();
        int i = 0;
        while (i < l)
        {
            if (s[i] != ' ')
            {
                count++;
                i++;
            }
            else
            {
                while (i < l && s[i] == ' ')
                    i++;
                if (i == l)
                {
                    return count;
                }
                else
                {
                    count = 0;
                }
            }
        }
        return count;
    }
};