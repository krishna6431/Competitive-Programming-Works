// All Important Header Files
#include <bits/stdc++.h>
#include <cctype>
using namespace std;
//ALL IMPORTANT MACROS
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define deb(x) cout << x << endl;
#define display(start, end) for (int i = start; i < end; i++)
#define MOD 1000000007
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a, n) a, a + n
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
//USING NAME SPACE
using namespace std;
//SOME TYPEDEF DECLARATION
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;
// CODE WRITTEN BY KRISHNA_6431

int main()
{
    fast;

#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    string s;
    cin >> s;
    vector<int> v;
    for (int i = 0; i < s.size(); i++)
    {
        string temp = s.substr(i, 1);
        v.pb(stoi(temp));
    }
    // for (auto x : v)
    //     cout << x << endl;
    // return 0;
    ll max = v[0];
    int start = 1;
    int end = 1;
    for (int i = 0; i < v.size(); i++)
    {
        ll sum = v[i];
        int tStart = i, tEnd = -1;
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[j] >= v[j - 1])
            {
                sum += v[j];
            }
            else
            {
                tEnd = j;
                break;
            }
            tEnd = j + 1;
        }
        if (sum > max)
        {
            max = sum;
            start = tStart + 1;
            end = tEnd;
        }
    }
    cout << max << ":" << start << "-" << end << endl;
    return 0;
}