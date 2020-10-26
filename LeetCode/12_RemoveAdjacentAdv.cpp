#include <bits/stdc++.h>
using namespace std;
//Only solution class for the problem
//All codes are written by krishna

// 1209. Remove All Adjacent Duplicates in String II
// Medium

// 479

// 14

// Add to List

// Share
// Given a string s, a k duplicate removal consists of choosing k adjacent and equal letters from s and removing them causing the left and the right side of the deleted substring to concatenate together.

// We repeatedly make k duplicate removals on s until we no longer can.

// Return the final string after all such duplicate removals have been made.

// It is guaranteed that the answer is unique.

// Example 1:

// Input: s = "abcd", k = 2
// Output: "abcd"
// Explanation: There's nothing to delete.
// Example 2:

// Input: s = "deeedbbcccbdaa", k = 3
// Output: "aa"
// Explanation:
// First delete "eee" and "ccc", get "ddbbbdaa"
// Then delete "bbb", get "dddaa"
// Finally delete "ddd", get "aa"
// Example 3:

// Input: s = "pbbcggttciiippooaais", k = 2
// Output: "ps"

// Constraints:

// 1 <= s.length <= 10^5
// 2 <= k <= 10^4
// s only contains lower case English letters.

//timecomplexity----->o(n)
// space complexity -----> o(n)

class Solution
{
public:
    string removeDuplicates(string str, int k)
    {
        stack<pair<char, int>> s;
        for (int i = 0; i < str.size(); i++)
        {
            if (s.empty())
            {
                s.push(make_pair(str[i], 1));
            }
            else
            {
                if (str[i] == s.top().first)
                {
                    s.top().second++;
                }
                else
                {
                    s.push(make_pair(str[i], 1));
                }
            }

            if (s.top().second == k)
            {
                s.pop();
            }
        }
        string res = "";
        while (!s.empty())
        {
            while (s.top().second--)
            {
                res.push_back(s.top().first);
            }
            s.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

string receivedText(string str)
{
    vector<char> res;
    int n_key = 0;
    int flag = 1;
    int q = 0;
    vector<char>::iterator it;
    int i = 0;
    while (i < str.size())
    {
        if (str[i] == '<')
        {
            it = res.begin();
            i++;
        }
        else if (str[i] == '>')
        {
            it = res.end();
            i++;
        }
        else if (str[i] == '*')
        {
            res.pop_back();
            i++;
        }
        else if (str[i] == '#')
        {
            n_key++;
            if (n_key % 2 != 0)
            {
                flag = 0;
                i++;
            }
        }

        if (str[i] >= 48 && str[i] <= 57)
        {
            if (flag == 1)
            {
                res.insert(it, str[i]);
            }
            else
            {
                continue;
            }
        }
        else
        {
            res.insert(it, str[i]);
        }
    }
    string res1 = "";
    for (int i = 0; i < res.size(); i++)
    {
        res1.push_back(res.at(i));
    }
    return res1;
}
