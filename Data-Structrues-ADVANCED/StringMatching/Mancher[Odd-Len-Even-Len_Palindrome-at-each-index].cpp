#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"

// d1 is for odd-length palindromes
// d2 is for even-length palindromes
vector<ll> d1, d2;

// Manacher's Algorithm to find all palindromic substrings
void manachers(string &s)
{
    ll n = s.length();
    d1.clear();
    d1.resize(n);

    d2.clear();
    d2.resize(n);

    // Find odd-length palindromes
    for (ll i = 0, l = 0, r = -1; i < n; i++)
    {
        ll k = (i > r) ? 1 : min(d1[l + r - i], r - i + 1);
        while (0 <= i - k && i + k < n && s[i - k] == s[i + k])
        {
            k++;
        }
        d1[i] = k--;
        if (i + k > r)
        {
            l = i - k;
            r = i + k;
        }
    }

    // Find even-length palindromes
    for (ll i = 0, l = 0, r = -1; i < n; i++)
    {
        ll k = (i > r) ? 0 : min(d2[l + r - i + 1], r - i + 1);
        while (0 <= i - k - 1 && i + k < n && s[i - k - 1] == s[i + k])
        {
            k++;
        }
        d2[i] = k--;
        if (i + k > r)
        {
            l = i - k - 1;
            r = i + k;
        }
    }
}

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;

    manachers(s); // Run Manacher's Algorithm

    cout << "Odd-length Palindrome Sizes at Each Index:" << nl;
    for (ll i = 0; i < s.length(); i++)
    {
        cout << d1[i] << " ";
    }
    cout << nl;

    cout << "Even-length Palindrome Sizes at Each Index:" << nl;
    for (ll i = 0; i < s.length(); i++)
    {
        cout << d2[i] << " ";
    }
    cout << nl;

    return 0;
}
