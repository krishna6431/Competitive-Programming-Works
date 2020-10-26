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
        //Code Logic
        int n, temp;
        cin >> n;
        vector<int> v(n), v1, v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int sum = 1;
        for (int i = 1; i <= n; i++)
        {
            if (i == n)
            {
                if ((v[i - 1] - v[i - 2]) < 2)
                {
                    // sum+=1;
                    v1.push_back(sum);
                    break;
                }
                else
                {   v1.push_back(sum);
                    break;
                }
            }

             if ((v[i] - v[i - 1]) <= 2)
            {
                sum+=1;
            }
            else if ((v[i] - v[i - 1]) > 2)
            {
                v1.push_back(sum);
                sum = 1;
            
            }
        }
        int best = *min_element(v1.begin(), v1.end());
        int worst = *max_element(v1.begin(), v1.end());

        cout << best << " " << worst << endl;
        v1.clear();v.clear();
    }

    return 0;
}