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

vector<ll> sieve(int n)
{
    int *arr = new int[n + 1]();
    vector<ll> vect;
    for (int i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            vect.push_back(i);
            for (int j = 2 * i; j <= n; j += i)
                arr[j] = 1;
        }
    return vect;
}
/********************************************************************/

// CODE WRITTEN BY mr_krishna(cc,cf,google)/krishna_6431(gfg,leet)
class segment_tree
{
private:
    vector<int> seg_tree;

public:
    segment_tree(int n)
    {
        seg_tree.resize(n, 0);
    }

    void build(vector<int> &arr, int start, int end, int index)
    {
        if (start == end)
        {
            seg_tree[index] = arr[start];
            return;
        }

        int mid = (start + end) / 2;

        build(arr, start, mid, 2 * index);
        build(arr, mid + 1, end, 2 * index + 1);

        seg_tree[index] = min(seg_tree[2 * index], seg_tree[2 * index + 1]);
        return;
    }

    int query(int start, int end, int qStart, int qEnd, int index)
    {
        // complate overlap
        if (start >= qStart and end <= qEnd)
        {
            return seg_tree[index];
        }
        // no overlap
        if (qEnd < start or qStart > end)
        {
            return 1e9;
        }
        // partial overlap
        int mid = (start + end) / 2;
        int left = query(start, mid, qStart, qEnd, 2 * index);
        int right = query(mid + 1, end, qStart, qEnd, 2 * index + 1);
        return min(left, right);
    }

    void pointUpdate(int start, int end, int point, int change, int index)
    {
        // out of bound
        if (point > end or point < start)
        {
            return;
        }

        // leafnode
        if (start == end)
        {
            seg_tree[index] += change;
            return;
        }

        int mid = (start + end) / 2;
        pointUpdate(start, mid, point, change, 2 * index);
        pointUpdate(mid + 1, end, point, change, 2 * index + 1);
        seg_tree[index] = min(seg_tree[2 * index + 1], seg_tree[2 * index]);
    }

    void rangeUpdate(int start, int end, int l, int r, int change, int index)
    {
        // out of bound
        if (l > end or r < start)
        {
            return;
        }

        if (start == end)
        {
            seg_tree[index] += change;
            return;
        }

        int mid = (start + end) / 2;
        rangeUpdate(start, mid, l, r, change, 2 * index);
        rangeUpdate(mid + 1, end, l, r, change, 2 * index + 1);
        seg_tree[index] = min(seg_tree[2 * index + 1], seg_tree[2 * index]);
    }

    void print()
    {
        for (auto x : seg_tree)
        {
            cout << x << " ";
        }
        cout << endl;
    }
};
void HarHarMahadev()
{
    int n = nums.size();
    map<int, vector<int>> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]].push_back(i);
    }
    int *st = constructST(nums, n);
    segment_tree sgt(4 * n + 10);
    sgt.build(nums, 0, n - 1, 1);
    long long ans = 0;

    for (auto it : mp)
    {
        int start = 0;
        if (it.second.size() == 1)
        {
            ans++;
            continue;
        }
        for (int i = 1; i < it.second.size();)
        {
            while (i < it.second.size() and RMQ(st, n, it.second[i - 1], it.second[i]) == it.first)
                i++;
            long long temp = ((i - start)1ll(i - start + 1) * 1ll);
            temp = temp / 2;
            ans += temp;
            start = i;
            i++;
        }
        if (start < it.second.size())
            ans++;
    }

    return ans;
}

int main()
{
    RadheKrishna;
#ifdef mr_krishna
    freopen("Error.txt", "w", stderr);
#endif
    auto s1 = high_resolution_clock::now();
    ll testcase = 1;
    if (testcase)
    {
        ll testcase_cnt;
        cin >> testcase_cnt;
        while (testcase_cnt--)
        {
            HarHarMahadev();
        }
    }
    else
    {
        HarHarMahadev();
    }
    auto st1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(st1 - s1);

#ifdef mr_krishna
    cerr << "Time: " << duration.count() / 1000 << endl;
#endif
    return 0;
}