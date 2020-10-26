//All Important Header Files
#include <bits/stdc++.h>
#include <iostream>
#include <string>
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
        int g;
        cin >> g;
        ll n;
        int i, q;
        while (g--)
        {
            int c_h = 0, c_t = 0;
            cin >> i >> n >> q;
            if (n % 2 == 0)
            {
                c_t = n / 2;
                c_h = n / 2;
            }

            else
            {
                if (i == 1)
                {
                    c_h = n / 2;
                    c_t = n - c_h;
                }
                else
                {
                    c_t = n / 2;
                    c_h = n - c_t;
                }
            }

            // cout << c_h << c_t;

            if(q==1)
            {

                cout << c_h << endl;
            }
            if(q==2){
                cout << c_t << endl;
            }
        }
    }

    return 0;
}