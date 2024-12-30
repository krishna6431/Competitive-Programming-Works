#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
// code written by krishna

// String : a a b a a  c  a a b a a  d
// LPS    : 0 1 0 1 2  0  1 2 3 4 5  0

// String : a a b #  a a b  a a b  a a b
// LPS    : 0 1 0 0  1 2 3  1 2 3  1 2 3

// Prefix that matches any substring of the string
// Largest prefix that matches a suffix
ll kmp(const string &s)
{
    vector<ll> lps(s.size(), 0);

    for (ll i = 1; i < lps.size(); i++)
    {
        ll prev_idx = lps[i - 1];

        while (prev_idx > 0 && s[i] != s[prev_idx])
        {
            prev_idx = lps[prev_idx - 1];
        }

        lps[i] = prev_idx + (s[i] == s[prev_idx] ? 1 : 0);
    }

    // Uncomment this block to print the LPS array for debugging
    for (ll i = 0; i < lps.size(); i++)
    {
        cout << lps[i] << " ";
    }
    cout << endl;

    return lps[lps.size() - 1];
}

int main()
{

    vector<string> examples = {
        "aabaab",         // Example with partial prefix-suffix match
        "aaaa",           // Example with all characters the same
        "abcdabc",        // Example with non-overlapping prefix-suffix match
        "abcab",          // Example with partial overlap
        "abacabadabacaba" // Complex example with repeating patterns
    };

    for (const string &example : examples)
    {
        cout << "String: " << example << endl;
        cout << "Longest prefix which is also a suffix: " << kmp(example) << endl;
        cout << endl;
    }

    return 0;
}
