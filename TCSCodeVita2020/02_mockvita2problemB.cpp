//All Important Header Files
#include <bits/stdc++.h>
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
#define display(i, x, n) for (int i = x; i < n; i++)

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

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int vsz = v.size();
    for (int i = 0; i < vsz; i++)
    {
        int tem = (v[i] % 10);
        v[i] /= 10;
        int tem1 = (v[i] % 10);
        v[i] /= 10;
        int tem2 = (v[i] % 10);
        int maxi = max3(tem, tem1, tem2);
        int mini = min3(tem, tem1, tem2);
        int res = maxi * 11 + mini * 7;
        if (res < 100)
        {
            v[i] = res;
        }
        else
        {
            int d1 = res % 10;
            res /= 10;
            int d2 = res % 10;
            v[i] = d2 * 10 + d1;
        }
    }

    vector<int> odd;
    vector<int> even;
    for (int i = 0; i < vsz; i++)
    {
        v[i] /= 10;
        if (i % 2 == 0)
        {
            odd.push_back(v[i]);
        }
        else
        {
            even.push_back(v[i]);
        }
    }

    map<int, int> od;
    map<int, int> eve;
    int oddsz = odd.size();
    int evensz = even.size();

    for (int i = 0; i < oddsz; i++)
    {
        od[odd[i]]++;
    }
    for (int i = 0; i < evensz; i++)
    {
        eve[even[i]]++;
    }

    int count = 0;

    for (map<int, int>::iterator itr = od.begin(); itr != od.end(); itr++)
    {
        if (itr->second == 2)
        {
            count++;
        }
        if ((itr->second) > 2)
        {
            count += 2;
        }
    }

    for (map<int, int>::iterator itr = eve.begin(); itr != eve.end(); itr++)
    {
        if (itr->second == 2)
        {
            count++;
        }
        if ((itr->second) > 2)
        {
            count += 2;
        }
    }

    cout << count << endl;
    return 0;
}