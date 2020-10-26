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


void receivedText(string str)
{
    vector<char>res;
    int n_key = 0;
    int flag = 1;
    int it = 0;
    int i = 0;
    int pass = 0;
    for (int i = 0; i < str.size();)
    {
        if (str[i] == '<')
        {
            it = 0;
            i++;
            continue;
        }
        if (str[i] == '>')
        {
            it = res.size();
            i++;
            continue;
        }
        if (str[i] == '*')
        {
            res.pop_back();
            i++;
            continue;
        }
        if (str[i] == '#')
        {
            n_key++;
            if (n_key % 2 != 0)
            {
                flag = 0;
                i++;
            }
            else
            {
                flag = 1;
                i++;
            }
            continue;
        }

        if ((str[i] >= '0') && (str[i] <= '9'))
        {   
            if (flag == 1)
            {
                res.insert(res.begin()+it, str[i]);

            }
            else
            {
                continue;
            }
        }
        else
        {
            res.insert(res.begin()+it, str[i]);
        }
    }
    for(int j =0 ; j < res.size() ; j++){
        cout << res[j];
    }

    
}


int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    fast;
    // string in;
    // cin >> in;
    receivedText("HE*<LL>O");
    return 0;
}