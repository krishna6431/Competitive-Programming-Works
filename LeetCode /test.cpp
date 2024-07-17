#include <bits/stdc++.h>
using namespace std;

using ll = long long;
struct TrieNode
{
    TrieNode *ch[26];
    bool end;
    int cost;

    TrieNode()
    {
        for (int i = 0; i < 26; ++i)
        {
            ch[i] = nullptr;
        }
        end = false;
        cost = INT_MAX;
    }
};

void insert(TrieNode *root, string &word, int cost)
{
    TrieNode *node = root;
    for (char c : word)
    {
        if (!node->ch[c - 'a'])
        {
            node->ch[c - 'a'] = new TrieNode();
        }
        node = node->ch[c - 'a'];
    }
    node->end = true;
    node->cost = min(node->cost, cost);
}

ll dp[500005];

class Solution
{
public:
    int solve(string &tar, ll idx, TrieNode *root)
    {
        if (idx >= tar.size())
            return 0;

        ll &ans = dp[idx];

        if (ans != -1)
        {
            return ans;
        }

        TrieNode *node = root;
        int res = 1e9;

        for (int i = idx; i < tar.size(); ++i)
        {
            int nIdx = tar[i] - 'a';
            if (!node->ch[nIdx])
                break;

            node = node->ch[nIdx];
            if (node->end)
            {
                int rem = solve(tar, i + 1, root);
                if (rem != -1)
                {
                    res = min(res, node->cost + rem);
                }
            }
        }

        return ans = (res == 1e9 ? -1 : res);
    }

    int minimumCost(string &target, vector<string> &words, vector<int> &costs)
    {
        TrieNode *root = new TrieNode();
        for (int i = 0; i < words.size(); ++i)
        {
            insert(root, words[i], costs[i]);
        }

        memset(dp, -1, sizeof(dp));
        return solve(target, 0, root);
    }
};

// Testing
int main()
{
    Solution sol;
    string target = "zpeapbke";
    vector<string> words = {"zpeapbke", "z"};
    vector<int> costs = {8, 1};

    int result = sol.minimumCost(target, words, costs);
    cout << "Result: " << result << endl; // Expected output: -1

    return 0;
}
