#include <bits/stdc++.h>
using namespace std;
//Only solution class for the problem
//All codes are written by krishna

// 171. Excel Sheet Column Number
// Easy

// 943

// 152

// Add to List

// Share
// Given a column title as appear in an Excel sheet, return its corresponding column number.

// For example:

//     A -> 1
//     B -> 2
//     C -> 3
//     ...
//     Z -> 26
//     AA -> 27
//     AB -> 28
//     ...
// Example 1:

// Input: "A"
// Output: 1
// Example 2:

// Input: "AB"
// Output: 28
// Example 3:

// Input: "ZY"
// Output: 701

// time complexity ---> o(n)
// space Complexity ---> o(1)
class Solution
{
public:
    int titleToNumber(string s)
    {
        int n = s.size() - 1;
        int res = 0;
        long long power = 1;
        for (int i = n; i >= 0; i--)
        {
            res += (s[i] - 64) * power;
            power = power * 26;
        }
        return res;
    }
};