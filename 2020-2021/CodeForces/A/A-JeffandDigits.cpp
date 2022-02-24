//All Important Header Files
#include <iostream>
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

//Code Logic

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    fast;
    // ll testcase;
    // cin >> testcase;
    // while (testcase--)
    // {

    // }
    int n;
    cin >> n;
    int f = 0;
    int z = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp == 5)
        {
            f++;
        }
        else
        {
            z++;
        }
    }
    if (f >= 9 and z > 0)
    {
        for (int k = 0; k < f / 9; k++)
        {

            cout << "555555555";
        }
        for (int k = 0; k < z; k++)
        {
            cout << "0";
        }
        cout << endl;
    }
    else if (z > 0)
    {
        cout << "0";
    }
    else
    {
        cout << "-1";
    }
    return 0;
}