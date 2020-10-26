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
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arrA[n];
        int arrB[n];
        int sumA[n];
        int sumB[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arrA[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arrB[i];
        }
        sumA[0] = arrA[0];
        sumB[0] = arrB[0];
        for (int i = 1; i < n; i++)
        {
            sumA[i] = arrA[i] + sumA[i - 1];
        }
        for (int i = 1; i < n; i++)
        {
            sumB[i] = arrB[i] + sumB[i - 1];
        }
        int weired = 0;
        for (int i = 0; i < n; i++)
        {
            if (sumA[i] == sumB[i])
            {
                if (arrA[i] == arrB[i])
                {
                    weired += arrA[i];
                }
            }
            else
            {
                continue;
            }
        }

        cout << weired << endl;
    }

    return 0;
}
