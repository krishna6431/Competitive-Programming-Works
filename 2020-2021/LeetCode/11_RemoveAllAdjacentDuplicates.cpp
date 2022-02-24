#include <bits/stdc++.h>
using namespace std;
//Only solution class for the problem
//All codes are written by krishna

// 1047. Remove All Adjacent Duplicates In String
// Easy

// 704

// 59

// Add to List

// Share
// Given a string S of lowercase letters, a duplicate removal consists of choosing two adjacent and equal letters, and removing them.

// We repeatedly make duplicate removals on S until we no longer can.

// Return the final string after all such duplicate removals have been made.  It is guaranteed the answer is unique.

// Example 1:

// Input: "abbaca"
// Output: "ca"
// Explanation:
// For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".

// Note:

// 1 <= S.length <= 20000
// S consists only of English lowercase letters.

//timecomplexity----->o(n)
// space complexity -----> o(n)

class Solution
{
public:
    string removeDuplicates(string str)
    {
        stack<char> s;
        for (int i = 0; i < str.size(); i++)
        {
            if (s.empty())
            {
                s.push(str[i]);
            }
            else
            {
                if (s.top() == str[i])
                {
                    s.pop();
                }
                else
                {
                    s.push(str[i]);
                }
            }
        }
        string res = "";
        while (!s.empty())
        {
            res.push_back(s.top());
            s.pop();
        }
        reverse(res.begin(), res.end());

        return res;
    }
};

// another approach o(1) extra space
//by simulating inplace stack;
class Solution
{
public:
    string removeDuplicates(string str)
    {
        int stkptr = -1;
        for (int i = 0; i < str.size(); i++)
        {
            if (stkptr == -1)
            {
                stkptr++;
                str[stkptr] = str[i];
            }
            else
            {
                if (str[i] == str[stkptr])
                {
                    stkptr--;
                }
                else
                {
                    stkptr++;
                    str[stkptr] = str[i];
                }
            }
        }
        string res = "";
        for (int i = 0; i <= stkptr; i++)
        {
            res.push_back(str[i]);
        }
        return res;
    }
};