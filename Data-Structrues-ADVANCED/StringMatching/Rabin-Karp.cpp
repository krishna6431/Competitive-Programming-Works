#include <iostream>
#include <vector>
#include <string>
using namespace std;

using ll = ll;

// Code is written by mr_krishna
// this is single hash solution...we can also do double hash or tripple hash for making probabiliyt of collision negligible
vector<ll> rabinKarp(const string &pattern, const string &text)
{
    const ll prime = 31;
    const ll mod = 1e9 + 9;
    ll patternLength = pattern.size();
    ll textLength = text.size();

    vector<ll> power(max(patternLength, textLength));
    power[0] = 1;
    for (ll i = 1; i < (ll)power.size(); i++)
    {
        power[i] = (power[i - 1] * prime) % mod;
    }

    vector<ll> prefixHash(textLength + 1, 0);
    for (ll i = 0; i < textLength; i++)
    {
        prefixHash[i + 1] = (prefixHash[i] + (text[i] - 'a' + 1) * power[i]) % mod;
    }

    ll patternHash = 0;
    for (ll i = 0; i < patternLength; i++)
    {
        patternHash = (patternHash + (pattern[i] - 'a' + 1) * power[i]) % mod;
    }

    vector<ll> occurrences;
    for (ll i = 0; i + patternLength - 1 < textLength; i++)
    {
        ll currentHash = (prefixHash[i + patternLength] + mod - prefixHash[i]) % mod;
        if (currentHash == patternHash * power[i] % mod)
        {
            occurrences.push_back(i);
        }
    }

    return occurrences;
}

signed main()
{
    string text = "ababcababcabc";
    string pattern = "abc";

    vector<ll> occurrences = rabinKarp(pattern, text);

    cout << "Pattern found at indices: ";
    for (ll index : occurrences)
    {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}
