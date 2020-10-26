//All Important Header Files
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
//ALL IMPORTANT MACROS
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define deb(x) cout << x << endl;
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

//CODE WRITTEN BY KRISHNA_6431
// string int_str(int i){
//     ostringstream s1;
//     s1<<i;
//     string str=s1.str();
//     return str;
// }

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;
    int t;

    cin >> t;
    while (t--)
    {
        int n, q;
        int c;
        string s;
        vector<int> v, v1;
        cin >> n >> q;
        cin >> s;
        sort(s.begin(), s.end());
        while (q--)
        {
            cin >> c;
            int count = 1;
            for (int i = 0; i < n; i++)
            {
                if (i == n - 1)
                {
                    if (s[i] == s[i - 1])
                    {
                        count++;
                        v1.pb(count);
                        break;
                    }
                    else
                    {
                        v1.pb(1);
                        break;
                    }
                }

                else if (s[i] == s[i + 1])
                {
                    count++;
                }
                else
                {
                    v1.pb(count);
                    count = 1;
                }
            }
            for (int i = 0; i < v1.size(); i++)
            {
                if (v1[i] <= c)
                {
                    v1[i] = 0;
                }
                else
                {
                    v1[i] -= c;
                }
            }
            cout << accumulate(v1.begin(), v1.end(), 0) << endl;
        }

        //Code Logic
    }

    return 0;
}