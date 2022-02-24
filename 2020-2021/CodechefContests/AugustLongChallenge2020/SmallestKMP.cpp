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
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s, p;
        cin >> s >> p;
        int arr[26] ={ 0 };
        if (s.size() == 1)
        {
            cout << s << endl;
            continue;
        }
        for (int i = 0; i < s.size(); i++)
        {
            arr[s[i] - 97]++;
        }
        for (int i = 0; i < p.size(); i++)
        {
            arr[p[i] - 97]--;
        }
        string res = "";
        string res1 = "";
        for (int i =0; i < 26; i++) {
            for (int j =0; j < p.size();j++) {
                if (i+97 < p[j]) {
                    while (arr[i]--) {
                        res.push_back(char(i+97));
                    }
                    break;
                }
                else if (i+97 > p[j]) {
                    while (arr[i]--) {
                        res1.push_back(char(i+97));
                    }
                    break;
                }
                else {
                    continue;
                }
            }
        }
        cout << res + p + res1 << endl;
    }

    return 0;
}
