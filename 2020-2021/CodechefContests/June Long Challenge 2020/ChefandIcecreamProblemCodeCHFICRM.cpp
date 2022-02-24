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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int cfive = 0;
        int cten = 0;
        int cfif = 0;
        if (arr[0] == 5)
        {
            cfive++;
        }
        else
        {
            cout << "NO" << endl;
            continue;
        }
        int i;
        for (i = 1; i < n; i++)
        {
            if (arr[i] == 5)
            {
                cfive++;
                continue;
            }
            else if (arr[i] == 10)
            {
                if (cfive > 0)
                {
                    cten++;
                    cfive--;
                    continue;
                }
                else
                {
                    cout << "NO" << endl;
                    break;
                }
            }
            else if (arr[i] = 15)
            {
                if (cten > 0)
                {
                    cfif++;
                    cten--;
                    continue;
                }
                else if (cfive >= 2)
                {
                    cfif++;
                    cfive -= 2;
                    continue;
                }
                else
                {
                    cout << "NO" << endl;
                    break;
                }
            }
            else
            {
                cout << "NO" << endl;
                break;
            }
        }
        if (i == n)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}