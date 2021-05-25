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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // int tc;
    // cin >> tc;

    // while (tc--)
    // {
    // }
    double mark = 0;
    vector<string> v{
        "ACov(A)",
        "BCov(B)",
        "CCov(C)",
        "DCov(D)",
        "ECov(E)",
        "FCov(F)",
        "ACov",
        "BCov", "CCov", "DCov", "ECov", "FCov", "(A)", "(B)", "(C)", "(D)", "(E)", "(F)"};
    string s;
    vector<string> vec;
    while (cin >> s)
    {
        vec.push_back(s);
    }
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cout << vec.at(i) << v[i] << endl;
    // }
    vector<string>::iterator itr, itr1, itr2;
    for (int i = 0; i < vec.size(); i++)
    {
        itr = find(v.begin(), v.end(), vec[i]);
        if (itr != v.end())
        {
            mark += 1;
            v.erase(itr);
        }
        else
        {

            itr1 = find(v.begin(), v.end(), vec[i].substr(vec[i].size() - 3, vec[i].size() - 1));
            if (itr1 != v.end())
            {
                mark += 0.5;
                v.erase(itr1);
            }
            itr2 = find(v.begin(), v.end(), vec[i].substr(0, 3));
            if (itr2 != v.end())
            {
                mark += 0.5;
                v.erase(itr2);
            }
        }
    }
    cout << mark << endl;
    return 0;
}