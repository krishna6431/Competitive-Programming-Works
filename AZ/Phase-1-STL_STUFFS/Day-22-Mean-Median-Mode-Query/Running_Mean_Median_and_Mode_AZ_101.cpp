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
// class customDs
// {
// private:
//     // mean members
//     ll sum = 0;
//     ll count = 0;
//     // mode members
//     map<ll, ll> freq;
//     multiset<pair<ll, ll>> freqOrder;
//     // median members
//     multiset<ll> low;
//     multiset<ll> high;

// public:
//     void insert(ll x)
//     {
//         // mean handling
//         this->sum += x;
//         this->count++;

//         // mode handling
//         // element already exists
//         if (freq.find(x) != freq.end())
//         {
//             freqOrder.erase(freqOrder.find({-freq[x], x}));
//             freq[x]++;
//             freqOrder.insert({-freq[x], x});
//         }
//         else
//         {
//             freq[x]++;
//             freqOrder.insert({-freq[x], x});
//         }

//         // median handling
//         low.insert(x);
//         balance();
//     }

//     void balance()
//     {
//         if (low.size() > high.size())
//         {
//             ll elem = *low.rbegin();
//             auto itr = low.find(elem);
//             low.erase(itr);
//             high.insert(elem);
//         }
//         if (high.size() > low.size())
//         {
//             ll elem = *high.begin();
//             high.erase(high.begin());
//             low.insert(elem);
//         }
//     }

//     void remove(ll x)
//     {
//         // mean handling
//         this->sum -= x;
//         this->count--;

//         // mode handling;
//         freqOrder.erase(freqOrder.find({-freq[x], x}));
//         freq[x]--;
//         freqOrder.insert({-freq[x], x});
//         if (freq[x] == 0)
//         {
//             freq.erase(x);
//             freqOrder.erase(freqOrder.find({-freq[x], x}));
//         }

//         // median Handling
//         if (low.find(x) != low.end())
//         {
//             low.erase(low.find(x));
//         }
//         else
//         {
//             high.erase(high.find(x));
//         }
//         balance();
//     }
//     // to retreave mean
//     ll getMean()
//     {
//         if (sum == 0)
//         {
//             return -1;
//         }
//         ll ans = mod_mul(this->sum, mod_inv_prime(this->count, mod), mod);
//         return ans;
//     }
//     // to retrieve mode
//     ll getMode()
//     {
//         if (freqOrder.size() == 0)
//         {
//             return -1;
//         }
//         return freqOrder.begin()->second;
//     }
//     // to retrieve median
//     ll getMedian()
//     {
//         ll sz = low.size() + high.size();
//         if (sz == 0)
//         {
//             return -1;
//         }
//         if (sz == 1)
//         {
//             return *low.begin() % mod;
//         }
//         if (sz % 2 == 0)
//         {
//             ll num = mod_add(*low.rbegin(), *high.begin(), mod);
//             ll ans = mod_mul(num, mod_inv_prime(2, mod), mod);
//             return ans;
//         }
//         else
//         {
//             return *low.rbegin() % mod;
//         }
//     }
// };

// void HarHarMahadev()
// {
//     customDs ds;
//     ll n;
//     cin >> n;
//     while (n--)
//     {
//         string str;
//         cin >> str;
//         if (str == "insert")
//         {
//             ll x;
//             cin >> x;
//             ds.insert(x);
//         }
//         else if (str == "remove")
//         {
//             ll x;
//             cin >> x;
//             ds.remove(x);
//         }
//         else if (str == "getMean")
//         {
//             cout << ds.getMean() << endl;
//         }
//         else if (str == "getMode")
//         {
//             cout << ds.getMode() << endl;
//         }
//         else if (str == "getMedian")
//         {
//             cout << ds.getMedian() << endl;
//         }
//     }
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

#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<pair<int, int>, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
/*
    order_of_key (k)
    find_by_order(k)
*/

inline void add(int &a, int b)
{
    a += b;
    if (a >= mod)
        a -= mod;
}

inline void sub(int &a, int b)
{
    a -= b;
    if (a < 0)
        a += mod;
}

inline int mul(int a, int b)
{
    return (int)((long long)a * b % mod);
}

inline int power(int a, long long b)
{
    int res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = mul(res, a);
        }
        a = mul(a, a);
        b >>= 1;
    }
    return res;
}

inline int inv(int a)
{
    a %= mod;
    if (a < 0)
        a += mod;
    int b = mod, u = 0, v = 1;
    while (a)
    {
        int t = b / a;
        b -= t * a;
        swap(a, b);
        u -= t * v;
        swap(u, v);
    }
    assert(b == 1);
    if (u < 0)
        u += mod;
    return u;
}

struct Mean
{
    int sum, cnt;

    Mean() : sum(0), cnt(0){};

    void insert(int x)
    {
        add(sum, x);
        add(cnt, 1);
    }

    void remove(int x)
    {
        sub(sum, x);
        sub(cnt, 1);
    }

    int GetMean() const
    {
        if (!cnt)
            return -1;
        return mul(sum, inv(cnt));
    }
};

struct Mode
{
    set<pair<int, int>> s;
    map<int, int> M;

    void insert(int x)
    {
        M[x]++;
        if (M[x] > 1)
            s.erase(s.find({-(M[x] - 1), x}));
        s.insert({-M[x], x});
    }

    void remove(int x)
    {
        s.erase(s.find({-M[x], x}));
        M[x]--;
        if (M[x])
            s.insert({-M[x], x});
    }

    int GetMode()
    {
        if (s.empty())
            return -1;
        return s.begin()->second;
    }
};

struct Median
{
    ordered_set s;
    map<int, int> M;

    void insert(int x)
    {
        M[x]++;
        s.insert({x, M[x]});
    }

    void remove(int x)
    {
        s.erase(s.find({x, M[x]}));
        M[x]--;
    }

    int GetMedian()
    {
        if (s.empty())
            return -1;
        int n = (int)s.size();
        if (n % 2 == 0)
        {
            int sum = s.find_by_order(n / 2 - 1)->first;
            add(sum, s.find_by_order(n / 2)->first);
            return mul(sum, inv(2));
        }
        return s.find_by_order(n / 2)->first;
    }
};

signed main()
{
    // freopen("IN", "r", stdin);
    // freopen("OUT", "w", stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int q;
        cin >> q;

        Mean mean;
        Mode mode;
        Median median;

        while (q--)
        {
            string s;
            cin >> s;

            if (s == "insert")
            {
                int x;
                cin >> x;
                mean.insert(x);
                mode.insert(x);
                median.insert(x);
            }
            else if (s == "remove")
            {
                int x;
                cin >> x;
                mean.remove(x);
                mode.remove(x);
                median.remove(x);
            }
            else if (s == "getMean")
            {
                cout << mean.GetMean() << "\n";
            }
            else if (s == "getMode")
            {
                cout << mode.GetMode() << "\n";
            }
            else if (s == "getMedian")
            {
                cout << median.GetMedian() << "\n";
            }
        }
    }
    return 0;
}
