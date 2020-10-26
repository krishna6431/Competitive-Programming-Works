#include <bits/stdc++.h>
using namespace std;
//Only solution class for the problem
//All codes are written by krishna

// Write a function that reverses a string. The input string is given as an array of characters char[].

// Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

// You may assume all the characters consist of printable ascii characters.

// Example 1:

// Input: ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]
// Example 2:

// Input: ["H","a","n","n","a","h"]
// Output: ["h","a","n","n","a","H"]

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int l = s.size();
        int i, j;
        for (i = 0, j = l - 1; i <= j; i++, j--)
        {
            swap(s[i], s[j]);
        }
    }
};

//another approaches

// 1. using stack
//    first push all characters in stack and pop it and print it
//   time complexity---->o(n)