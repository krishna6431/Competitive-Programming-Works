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
There is a long wire along at straight line, which contains N bird nests at postion x1,x2,x3...xN.

There are B(B<=N) birds,whic becomes angry towards each other once put into a nest .To put the birds from hurting each other you want to assign birds to nests such that minimum distance between any two birds is as large as possible.What is the largest minimum distance?
*/

/*
Sample Input:
N = 5 stalls/nests
B = 3 Birds
Nests = [1,2,4,8,9]

Sample Output:
3
*/

/*
Time Complexity:O(Nlog(Xn-X0))
Space Complexity:O(1)
*/

//helper function
bool canPlaceBirds(int n, int b, vector<int> nests, int sep)
{
    int birds = 1;
    int location = nests[0];

    for (int i = 1; i < n; i++)
    {
        int currLocation = nests[i];
        if (currLocation - location >= sep)
        {
            birds++;
            location = currLocation;
            if (birds == b)
            {
                return true;
            }
        }
    }
    return false;
}

int angryBird(int n, int b, vector<int> nests)
{
    //sort the nests array first
    sort(nests.begin(), nests.end());
    //do binary search for finding seperation
    int start = 0;
    int end = nests[n - 1] - nests[0]; // distance
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        bool canPlace = canPlaceBirds(n, b, nests, mid);
        if (canPlace)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
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
        int nestNo, Birds;
        cin >> nestNo >> Birds;
        int temp;
        vector<int> nests;
        for (int i = 0; i < nestNo; i++)
        {
            cin >> temp;
            nests.push_back(temp);
        }
        cout << angryBird(nestNo, Birds, nests) << endl;
    }
    return 0;
}
