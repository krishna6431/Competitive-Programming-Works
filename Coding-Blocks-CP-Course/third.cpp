#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void calculateLPS(const vector<int> &pattern, vector<int> &lps)
    {
        int m = pattern.size();
        int length = 0;
        lps[0] = 0;

        for (int i = 1; i < m; ++i)
        {
            while (length > 0 && pattern[i] != pattern[length])
            {
                length = lps[length - 1];
            }
            if (pattern[i] == pattern[length])
            {
                length++;
            }
            lps[i] = length;
        }
    }

    void kmpSearch(const vector<int> &target, const vector<int> &pattern, vector<int> &found)
    {
        int n = target.size();
        int m = pattern.size();
        vector<int> lps(m, 0);
        int count = 0;

        calculateLPS(pattern, lps);

        int i = 0, j = 0;
        while (i < n)
        {
            if (pattern[j] == target[i])
            {
                i++;
                j++;
            }

            if (j == m)
            {
                found[i - 1] = 1;
                j = lps[j - 1];
            }
            else if (i < n && pattern[j] != target[i])
            {
                if (j != 0)
                {
                    j = lps[j - 1];
                }
                else
                {
                    i++;
                }
            }
        }
    }

    vector<int> geeksJourney(vector<int> &geeksTown, int n, vector<int> &journey, int m, vector<vector<int>> &queries, int q)
    {
        vector<int> ans;
        vector<int> found(m, 0);
        kmpSearch(journey, geeksTown, found);

        for (int i = 1; i < m; i++)
        {
            found[i] += found[i - 1];
        }

        for (const auto &query : queries)
        {
            int l = query[0];
            int r = query[1];
            if (r + 1 - l < n)
                ans.push_back(0);
            else
                ans.push_back(found[r] - found[l + n - 2]);
        }
        return ans;
    }
};

