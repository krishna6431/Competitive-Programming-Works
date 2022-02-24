#include <bits/stdc++.h>
using namespace std;
//Only solution class for the problem
//All codes are written by krishna

// 125. Valid Palindrome
// Easy

// 1165

// 2853

// Add to List

// Share
// Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

// Note: For the purpose of this problem, we define empty string as valid palindrome.

// Example 1:

// Input: "A man, a plan, a canal: Panama"
// Output: true
// Example 2:

// Input: "race a car"
// Output: false

//timecomplexity----->o(n)
// space complexity -----> o(1)
class Solution
{
public:
    bool isPalindrome(string str)
    {
        int s = 0;
        int n = str.size();
        int e = n - 1;
        while (s >= e)
        {
            while (s < e and !isalnum(str[s]))
                s++;
            while (s < e and !isalnum(str[e]))
                e--;

            if (toupper(str[s]) != toupper(str[e]))
                return false;
            s++;
            e--;
        }
        return true;
    }
};