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
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    fast;
    int t;

    cin >> t;
    int res = 0;
    while (t--)
    {
        int res = 0;
        int activity;
        string origin;
        cin >> activity >> origin;

        for (int i = 0; i < activity; i++)
        {
            string input;
            cin >> input;
            if (input == "CONTEST_WON")
            {
                int rank;
                cin >> rank;
                if (rank > 20)
                {
                    res += 300;
                }
                else
                {
                    res += 300 + (20 - rank);
                }
            }
            else if (input == "TOP_CONTRIBUTOR")
            {
                res += 300;
            }

            else if (input == "BUG_FOUND")
            {
                int no;
                cin >> no;
                res += no;
            }
            if (input == "CONTEST_HOSTED")
            {

                res += 50;
            }
        }

        if (origin == "INDIAN")
        {
            cout << res / 200 << endl;
        }
        else
        {
            cout << res / 400 << endl;
        }
    }
    return 0;
}