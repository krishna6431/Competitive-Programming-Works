//All Important Header Files
#include <bits/stdc++.h>
#include <time.h>
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
    // clock_t t_start = clock();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--)
    {
        ll n, m, x, y;
        cin >> n >> m >> x >> y;
        ll res;
        ll sum = 0;
        if (n == 1 && m == 1)
        {
            res = min(x, y);
        }
        else if (x <= y / 2)
        {
            res = (x * m) * n;
        }
        else if (x >= y)
        {
            res = ((y / 2) * m) * n;
        }
        else
        {

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (i % 2 == 0)
                    {
                        if (j % 2 == 0)
                        {
                            sum += x;
                        }
                        else
                        {
                            sum += (y - x);
                        }
                    }
                    else
                    {
                        if (j % 2 == 0)
                        {
                            sum += (y - x);
                        }
                        else
                        {
                            sum += x;
                        }
                    }
                }
            }
            res = sum;
        }
        cout << res << endl;
    }

    // printf("Execution Time: %.2f sec", (double)(clock() - t_start) / CLOCKS_PER_SEC);
    return 0;
}