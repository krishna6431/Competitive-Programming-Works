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
// #define for(x,n) for(int i=x;i<n;i++)
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
        //Code Logic
        int n,a;
        cin >> n;
        vll v1, v2;
        for(int i=0;i<n;i++) {
        cin >> a;
        v1.pb(a);
        }
    // for (auto it = v1.begin(); it != v1.end(); it++) 
    //     cout << *it << " "; 
    //     // int count=0;
        int a1=v1[0];ll count=1;
        for (int i = 1; i < n; i++)
        {
            if (v1[i] <= a1)
            {
                count++;
                a1=v1[i];
            }
           
        }

        cout << count << endl;
    }
    return 0;
}