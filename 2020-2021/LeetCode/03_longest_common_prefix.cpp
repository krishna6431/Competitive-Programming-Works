#include <bits/stdc++.h>
using namespace std;
//Only solution class for the problem
//All codes are written by krishna

// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

// Example 1:

// Input: ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.
// Note:

// All given inputs are in lowercase letters a-z.

//time complexity is o(mn)

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string res = "";
        if(strs.empty()){
            return res;
        }
        string min = *min_element(strs.begin(), strs.end());
        int l = min.length();
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < strs.size(); j++)
            {
                if (min[i] != strs[j][i])
                {
                    return res;
                }
            }
            res.push_back(min[i]);
        }
        return res;
    }
};