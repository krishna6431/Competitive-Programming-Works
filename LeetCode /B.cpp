/*
     ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
     उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||
*/
// All Important Header Files
#pragma GCC optimize("O3,unroll-loops")

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
using namespace chrono;

// ALL IMPORTANT MACROS
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define deb(x) cout << x << endl;
#define loop(start, end, incr) for (int i = start; i < end; i += incr)
#define mod 1000000007
#define mod1 998244353
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a, n) a, a + n
#define endl "\n"
#define RadheKrishna                  \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
// SOME TYPEDEF DECLARATION
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;
#define que_max priority_queue<int>
#define que_min priority_queue<int, vi, greater<int>>
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define mr_krishna
#ifdef mr_krishna
#define debug(x)        \
    cerr << #x << " ";  \
    printing_debugs(x); \
    cerr << endl;
#else
#define debug(x) ;
#endif

#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)
/*******************************************printing_debugsing************************************************************/
// credit : template from priyansh agrawal (only debug statement templates)
// codeforces handle : priyansh31dec
void printing_debugs(ll t) { cerr << t; }
void printing_debugs(int t) { cerr << t; }
void printing_debugs(string t) { cerr << t; }
void printing_debugs(char t) { cerr << t; }
void printing_debugs(lld t) { cerr << t; }
void printing_debugs(double t) { cerr << t; }
void printing_debugs(ull t) { cerr << t; }

template <class T, class V>
void printing_debugs(pair<T, V> p);
template <class T>
void printing_debugs(vector<T> v);
template <class T>
void printing_debugs(set<T> v);
template <class T, class V>
void printing_debugs(map<T, V> v);
template <class T>
void printing_debugs(multiset<T> v);
template <class T, class V>
void printing_debugs(pair<T, V> p)
{
    cerr << "{";
    printing_debugs(p.fr);
    cerr << ",";
    printing_debugs(p.sc);
    cerr << "}";
}
template <class T>
void printing_debugs(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        printing_debugs(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void printing_debugs(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        printing_debugs(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void printing_debugs(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        printing_debugs(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void printing_debugs(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        printing_debugs(i);
        cerr << " ";
    }
    cerr << "]";
}
// void printing_debugs(pbds v) {cerr << "[ "; for (auto i : v) {printing_debugs(i); cerr << " ";} cerr << "]";}

/****************************printing_debugsing End*********************************************************/
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
    cout << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}
/**********Standard Algorithm************/
// credit : template from priyansh agrawal (only debug statement templates)
// codeforces handle : priyansh31dec
ll fast_expo(ll a, ll b, ll m)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % m;
        a = (a * a) % m;
        b = b >> 1;
    }
    return res;
}

ll mod_add(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}

ll mod_mul(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}

ll mod_sub(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}

ll mod_inv_prime(ll a, ll b)
{
    return fast_expo(a, b - 2, b);
}

ll mod_div(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (mod_mul(a, mod_inv_prime(b, m), m) + m) % m;
} // only for prime m

set<ll> sieve(int n)
{
    int *arr = new int[n + 1]();
    set<ll> vect;
    for (int i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            vect.insert(i);
            for (int j = 2 * i; j <= n; j += i)
                arr[j] = 1;
        }
    return vect;
}
/********************************************************************/

// CODE WRITTEN BY mr_krishna(cc,cf,google)/krishna_6431(gfg,leet)
// Generated by LeetCodeContestHelper at 07/07/2024, 08:01:57
// 100328. Generate Binary Strings Without Adjacent Zeros
// https://leetcode.com/contest/weekly-contest-405/problems/generate-binary-strings-without-adjacent-zeros/

#define _USE_MATH_DEFINES
#include <climits>
#include <cmath>

#include <array>
#include <deque>
#include <forward_list>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#include <iomanip>
#include <iostream>
#include <sstream>

#include <algorithm>
#include <bitset>
#include <functional>
#include <iterator>
#include <limits>
#include <numeric>
#include <regex>
#include <string>
#include <tuple>
#include <utility>
#include <valarray>

using namespace std;

class Solution
{
public:
    void solve(int n, string str, vector<string> &ans)
    {
        if (str.size() == n)
        {
            ans.push_back(str);
            return;
        }
        if (str.empty() || str.back() == '1')
        {
            solve(n, str + "0", ans);
            solve(n, str + "1", ans);
        }
        else if (str.back() == '0')
        {
            solve(n, str + "1", ans);
        }
    }

    vector<string> validStrings(int n)
    {
        vector<string> ans;
        solve(n, "", ans);
        return ans;
    }
};

// vector<string> Solution::validStrings(int n)

int main()
{
    cout << "*** 100328. Generate Binary Strings Without Adjacent Zeros ***" << endl
         << endl;

    Solution s0;

    {
        cout << "Test 1: ";

        int n = 3;
        vector<string> ans0 = s0.validStrings(n);
        vector<string> exp0 = {"010", "011", "101", "110", "111"};

        if (ans0 == exp0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
            cout << "  Answer: ";
            for (string &i : ans0)
            {
                cout << i << " ";
            }
            cout << endl
                 << "  Expect: ";
            for (string &i : exp0)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }

    {
        cout << "Test 2: ";

        int n = 1;
        vector<string> ans1 = s0.validStrings(n);
        vector<string> exp1 = {"0", "1"};

        if (ans1 == exp1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
            cout << "  Answer: ";
            for (string &i : ans1)
            {
                cout << i << " ";
            }
            cout << endl
                 << "  Expect: ";
            for (string &i : exp1)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
