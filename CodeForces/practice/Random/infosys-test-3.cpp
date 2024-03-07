#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5; // Maximum length of the string

// Segment Tree Node
struct Node
{
    int freq[26]; // Frequency of each character
};

// Segment Tree
Node tree[4 * MAXN];

// Initialize the segment tree
void build(int v, int tl, int tr, const string &s)
{
    if (tl == tr)
    {
        tree[v].freq[s[tl] - 'a']++;
        return;
    }
    int tm = (tl + tr) / 2;
    build(2 * v, tl, tm, s);
    build(2 * v + 1, tm + 1, tr, s);
    for (int i = 0; i < 26; ++i)
    {
        tree[v].freq[i] = tree[2 * v].freq[i] + tree[2 * v + 1].freq[i];
    }
}

// Update character at position pos in the tth copy of S
void update(int v, int tl, int tr, int t, int pos, char newChar)
{
    if (tl == tr)
    {
        tree[v].freq[newChar - 'a']++;
        return;
    }
    int tm = (tl + tr) / 2;
    if (pos <= tm)
    {
        update(2 * v, tl, tm, t, pos, newChar);
    }
    else
    {
        update(2 * v + 1, tm + 1, tr, t, pos, newChar);
    }
    for (int i = 0; i < 26; ++i)
    {
        tree[v].freq[i] = tree[2 * v].freq[i] + tree[2 * v + 1].freq[i];
    }
}

// Query the score for substring [l, r] in the tth copy of S
int query(int v, int tl, int tr, int t, int l, int r)
{
    if (l > r)
        return 0;
    if (tl == l && tr == r)
    {
        int oddFreq = 0;
        for (int i = 0; i < 26; ++i)
        {
            if (tree[v].freq[i] % 2 == 1)
            {
                oddFreq++;
            }
        }
        return oddFreq / 2; // Score is half of odd frequencies
    }
    int tm = (tl + tr) / 2;
    int leftScore = query(2 * v, tl, tm, t, l, min(r, tm));
    int rightScore = query(2 * v + 1, tm + 1, tr, t, max(l, tm + 1), r);
    return leftScore + rightScore;
}

int main()
{
    int N, K, Q;
    cin >> N >> K;
    string S;
    cin >> S;

    // Build the segment tree for the initial string
    build(1, 0, N - 1, S);

    cin >> Q;
    int ans = 0;
    while (Q--)
    {
        int type, t, l, r;
        cin >> type >> t;
        if (type == 1)
        {
            int i;
            char j;
            cin >> i >> j;
            update(1, 0, N - 1, t, i - 1, j);
        }
        else if (type == 2)
        {
            cin >> l >> r;
            ans += query(1, 0, N - 1, t, l - 1, r - 1);
        }
    }

    cout << ans << "\n";
    return 0;
}
