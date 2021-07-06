// All Important Header Files
#include <bits/stdc++.h>
//ALL IMPORTANT MACROS
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define endl "\n"
#define deb(x) cout << x << endl;
#define display(start, end)           \
    for (int i = start; i < end; i++) \
        cout << i << " ";             \
    cout << endl;
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
// code is written by mr_krishna

//Problem Description
/*
Given two non-empty arrays, find the pair of numbers(one from each array) whose absolute differance is minimum. Print the any one pair with the smallest difference.

ans|a-b| -> min
*/

/*
Sample Input:
a1=[-1,5,10,20,3]
a2=[26,134,135,15,17]

Sample Output:
[20,17]
*/

/*
Time Complexity:O(MlogM+NlogM)
Space Complexity:O(1)
*/

void minPair(vector<int> a1, vector<int> a2)
{
    //sort the array
    sort(a2.begin(), a2.end());
    int p1, p2;
    int minDiff = INT_MAX;

    //iterate over 1 array and look for closest element in second array
    for (auto x : a1)
    {
        auto lb = lower_bound(a2.begin(), a2.end(), x) - a2.begin();
        if (lb >= 1 and abs(x - a2[lb - 1]) < minDiff)
        {
            p1 = x;
            p2 = a2[lb - 1];
            minDiff = abs(x - a2[lb - 1]);
        }
        if (lb != a2.size() and abs(x - a2[lb]) < minDiff)
        {
            p1 = x;
            p2 = a2[lb];
            minDiff = abs(x - a2[lb]);
        }
    }
    cout << "Min Pair is: " << p1 << " and " << p2 << endl;
}
int main()
{
    fast;

    // #ifndef ONLINE_JUDGE
    //     freopen("./input.txt", "r", stdin);
    //     freopen("./output.txt", "w", stdout);
    // #endif
    int t;
    cin >> t;
    int tc = 1;
    while (t--)
    {
        cout << "Case #" << tc++ << ":" << endl;
        int n1, n2;
        cin >> n1 >> n2;
        vector<int> v1(n1), v2(n2);
        for (int i = 0; i < n1; i++)
        {
            cin >> v1[i];
        }
        for (int i = 0; i < n2; i++)
        {
            cin >> v2[i];
        }
        minPair(v1, v2);
    }
    return 0;
}
