//All Important Header Files
#include <bits/stdc++.h>
#include <iostream>
#include <string>
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
#define MOD 1000000007
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a, n) a, a + n
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

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        ll flag;
        for (ll i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            v.pb(temp);
        }
        sort(v.begin(), v.end());
        ll m = v[v.size() - 1];
        vector<ll> hash(m + 1, 0);

        for (ll i = 0; i < v.size(); i++)
        {
            hash[v[i]]++;
        }

        for (ll i = 0; i < hash.size(); i++)
        {
            if (hash[i] > 2)
            {
                flag = 2;
                break;
            }
            else if (hash[i] == 2)
            {
                flag = 1;
                break;
            }
            else
            {
                flag = 3;
            }
        }
        // for (ll i = 0; i < hash.size(); i++)
        // {
        //     cout << hash[i] << " ";
        // }
        // cout << endl;

        if (flag == 2)
        {
            cout << "NO" << endl;
        }
        else if (flag == 3)
        {
            cout << "YES" << endl;
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }

        else if (flag == 1)
        {
            vector<ll> temp1, temp2;
            ll check = 1;

            for (ll i = 0; i < v.size(); i++)
            {

                if (hash[v[i]] == 2)
                {
                    temp2.pb(v[i]);
                    hash[v[i]]--;
                    continue;
                }
                else if (hash[v[i]] == 1)
                {
                    temp1.pb(v[i]);
                    hash[v[i]]--;
                    continue;
                }
            }
            sort(temp2.begin(), temp2.end(), greater<ll>());
            if(temp1[temp1.size()-1]==temp2[0]){
                cout << "NO" << endl;
                continue;
            }
            cout << "YES" << endl;
            for (ll i = 0; i < temp1.size(); i++)
            {
                cout << temp1[i] << " ";
            }
            for (ll i = 0; i < temp2.size(); i++)
            {
                cout << temp2[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
