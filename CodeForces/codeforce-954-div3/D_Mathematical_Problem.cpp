// /*
//      ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
//      उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||
// */
// // All Important Header Files
// #pragma GCC optimize("O3,unroll-loops")

// #include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

// using namespace std;
// using namespace __gnu_pbds;
// using namespace chrono;

// // ALL IMPORTANT MACROS
// #define pb push_back
// #define mp make_pair
// #define fr first
// #define sc second
// #define deb(x) cout << x << endl;
// #define loop(start, end, incr) for (int i = start; i < end; i += incr)
// #define mod 1000000007
// #define mod1 998244353
// #define len(x) x.size()
// #define min3(a, b, c) min(a, min(b, c))
// #define max3(a, b, c) max(a, max(b, c))
// #define all(v) v.begin(), v.end()
// #define alla(a, n) a, a + n
// #define endl "\n"
// #define RadheKrishna                  \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL);
// // SOME TYPEDEF DECLARATION
// typedef long long ll;
// typedef unsigned long long ull;
// typedef long double lld;
// typedef pair<ll, ll> pll;
// typedef vector<ll> vll;
// typedef vector<pll> vpll;
// typedef vector<vll> vvll;
// typedef vector<string> vs;
// #define que_max priority_queue<int>
// #define que_min priority_queue<int, vi, greater<int>>
// mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
// #define mr_krishna
// #ifdef mr_krishna
// #define debug(x)        \
//     cerr << #x << " ";  \
//     printing_debugs(x); \
//     cerr << endl;
// #else
// #define debug(x) ;
// #endif

// #define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)
// /*******************************************printing_debugsing************************************************************/
// // credit : template from priyansh agrawal (only debug statement templates)
// // codeforces handle : priyansh31dec
// void printing_debugs(ll t) { cerr << t; }
// void printing_debugs(int t) { cerr << t; }
// void printing_debugs(string t) { cerr << t; }
// void printing_debugs(char t) { cerr << t; }
// void printing_debugs(lld t) { cerr << t; }
// void printing_debugs(double t) { cerr << t; }
// void printing_debugs(ull t) { cerr << t; }

// template <class T, class V>
// void printing_debugs(pair<T, V> p);
// template <class T>
// void printing_debugs(vector<T> v);
// template <class T>
// void printing_debugs(set<T> v);
// template <class T, class V>
// void printing_debugs(map<T, V> v);
// template <class T>
// void printing_debugs(multiset<T> v);
// template <class T, class V>
// void printing_debugs(pair<T, V> p)
// {
//     cerr << "{";
//     printing_debugs(p.fr);
//     cerr << ",";
//     printing_debugs(p.sc);
//     cerr << "}";
// }
// template <class T>
// void printing_debugs(vector<T> v)
// {
//     cerr << "[ ";
//     for (T i : v)
//     {
//         printing_debugs(i);
//         cerr << " ";
//     }
//     cerr << "]";
// }
// template <class T>
// void printing_debugs(set<T> v)
// {
//     cerr << "[ ";
//     for (T i : v)
//     {
//         printing_debugs(i);
//         cerr << " ";
//     }
//     cerr << "]";
// }
// template <class T>
// void printing_debugs(multiset<T> v)
// {
//     cerr << "[ ";
//     for (T i : v)
//     {
//         printing_debugs(i);
//         cerr << " ";
//     }
//     cerr << "]";
// }
// template <class T, class V>
// void printing_debugs(map<T, V> v)
// {
//     cerr << "[ ";
//     for (auto i : v)
//     {
//         printing_debugs(i);
//         cerr << " ";
//     }
//     cerr << "]";
// }
// // void printing_debugs(pbds v) {cerr << "[ "; for (auto i : v) {printing_debugs(i); cerr << " ";} cerr << "]";}

// /****************************printing_debugsing End*********************************************************/
// template <typename Arg1>
// void __f(const char *name, Arg1 &&arg1)
// {
//     cout << name << " : " << arg1 << endl;
// }
// template <typename Arg1, typename... Args>
// void __f(const char *names, Arg1 &&arg1, Args &&...args)
// {
//     const char *comma = strchr(names + 1, ',');
//     cout.write(names, comma - names) << " : " << arg1 << " | ";
//     __f(comma + 1, args...);
// }
// /**********Standard Algorithm************/
// // credit : template from priyansh agrawal (only debug statement templates)
// // codeforces handle : priyansh31dec
// ll fast_expo(ll a, ll b, ll m)
// {
//     ll res = 1;
//     while (b > 0)
//     {
//         if (b & 1)
//             res = (res * a) % m;
//         a = (a * a) % m;
//         b = b >> 1;
//     }
//     return res;
// }

// ll mod_add(ll a, ll b, ll m)
// {
//     a = a % m;
//     b = b % m;
//     return (((a + b) % m) + m) % m;
// }

// ll mod_mul(ll a, ll b, ll m)
// {
//     a = a % m;
//     b = b % m;
//     return (((a * b) % m) + m) % m;
// }

// ll mod_sub(ll a, ll b, ll m)
// {
//     a = a % m;
//     b = b % m;
//     return (((a - b) % m) + m) % m;
// }

// ll mod_inv_prime(ll a, ll b)
// {
//     return fast_expo(a, b - 2, b);
// }

// ll mod_div(ll a, ll b, ll m)
// {
//     a = a % m;
//     b = b % m;
//     return (mod_mul(a, mod_inv_prime(b, m), m) + m) % m;
// } // only for prime m

// vector<ll> sieve(int n)
// {
//     int *arr = new int[n + 1]();
//     vector<ll> vect;
//     for (int i = 2; i <= n; i++)
//         if (arr[i] == 0)
//         {
//             vect.push_back(i);
//             for (int j = 2 * i; j <= n; j += i)
//                 arr[j] = 1;
//         }
//     return vect;
// }
// /********************************************************************/

// // CODE WRITTEN BY mr_krishna(cc,cf,google)/krishna_6431(gfg,leet)
// const ll INF = LLONG_MAX / 2;
// ll stolong(const string &s, int start, int end)
// {
//     ll num = 0;
//     for (int i = start; i <= end; ++i)
//     {
//         num = num * 10 + (s[i] - '0');
//         if (num > INF)
//             return INF;
//     }
//     return num;
// }

// ll calculate(ll left, ll right, char op)
// {
//     if (op == '+')
//     {
//         return left + right;
//     }
//     else
//     {
//         return left * right;
//     }
// }

// // Recursive function with memoization
// ll dp[25][25][25];
// vector<char> op = {'+', '*'};
// ll solve(string &s, ll i, ll j, ll k)
// {
//     if (k == 0)
//     {

//         return stolong(s, i, j);
//     }

//     if (dp[i][j][k] != -1)
//     {
//         return dp[i][j][k];
//     }

//     ll ans = INF;
//     for (int l = i; l < j; l++)
//     {
//         ll lval = stolong(s, i, l);
//         if (lval == INF)
//             continue;
//         for (char o : op)
//         {
//             ll rval = solve(s, l + 1, j, k - 1);
//             if (rval == INF)
//                 continue;
//             ans = min(ans, calculate(lval, rval, o));
//         }
//     }
//     return dp[i][j][k] = ans;
// }
// void HarHarMahadev()
// {
//     ll n;
//     cin >> n;
//     string str;
//     cin >> str;
//     memset(dp, -1, sizeof(dp));
//     ll ans = solve(str, 0, n - 1, n - 2);
//     cout << ans << endl;
// }

// int main()
// {
//     RadheKrishna;
// #ifdef mr_krishna
//     freopen("Error.txt", "w", stderr);
// #endif
//     auto s1 = high_resolution_clock::now();
//     ll testcase = 1;
//     if (testcase)
//     {
//         ll testcase_cnt;
//         cin >> testcase_cnt;
//         while (testcase_cnt--)
//         {
//             HarHarMahadev();
//         }
//     }
//     else
//     {
//         HarHarMahadev();
//     }
//     auto st1 = high_resolution_clock::now();
//     auto duration = duration_cast<microseconds>(st1 - s1);

// #ifdef mr_krishna
//     cerr << "Time: " << duration.count() / 1000 << endl;
// #endif
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

long long stomyll(string &str, int s, int e)
{
    long long value = 0;
    for (int i = s; i <= e; i++)
    {
        value = value * 10 + (str[i] - '0');
        if (value > (LLONG_MAX / 2))
            return LLONG_MAX / 2;
    }
    return value;
}

long long eval(string &s, int start, int end, int symbols, vector<vector<vector<long long>>> &dp)
{
    if (symbols == 0)
    {
        return stomyll(s, start, end);
    }

    if (dp[start][end][symbols] != -1)
        return dp[start][end][symbols];

    long long res = LLONG_MAX / 2;

    for (int i = start; i < end; ++i)
    {
        long long leftValue = eval(s, start, i, symbols - 1, dp);
        if (leftValue == LLONG_MAX / 2)
            continue;
        long long rightValue = eval(s, i + 1, end, 0, dp);
        if (rightValue == LLONG_MAX / 2)
        {
            continue;
        }
        res = min(res, leftValue + rightValue);
        res = min(res, leftValue * rightValue);
    }

    return dp[start][end][symbols] = res;
}

long long solve(string s, vector<vector<vector<long long>>> &dp)
{
    int n = s.size();
    return eval(s, 0, n - 1, n - 2, dp);
}

int main()
{
    int testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<vector<vector<long long>>> dp(30, vector<vector<long long>>(30, vector<long long>(30, -1)));
        cout << solve(s, dp) << endl;
    }
    return 0;
}