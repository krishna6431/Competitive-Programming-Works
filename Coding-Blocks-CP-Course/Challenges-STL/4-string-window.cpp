/*
     ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
     उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||
*/
// All Important Header Files
#include <bits/stdc++.h>
// ALL IMPORTANT MACROS
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define deb(x) cout << x << endl;
#define loop(start, end, incr) for (int i = start; i < end; i += incr)
#define MOD 1000000007
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a, n) a, a + n
#define endl "\n"
#define RadheKrishna                  \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
// USING NAME SPACE
using namespace std;
// SOME TYPEDEF DECLARATION
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;
#define que_max priority_queue<int>
#define que_min priority_queue<int, vi, greater<int>>
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
    cout << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}

// CODE WRITTEN BY mr_krishna(cc,cf,google)/krishna_6431(gfg,leet)

// Algorithm To Solve This Problem
/*
1.First check if length of string is less than the length of given pattern, if yes then "no such window can exist ".
2.Store the occurrence of characters of given pattern in a hash_pat[].
3.Start matching the characters of pattern with the characters of string i.e. increment count if a character matches
4.Check if (count == length of pattern ) this means a window is found
5.If such window found, try to minimize it by removing extra characters from beginning of current window.
6.Update min_length
7.Print the minimum length window.
*/
void HarHarMahadev()
{
    string s1, s2;
    // taking string as input (with spaces)
    getline(cin, s1);
    getline(cin, s2);
    ll n = s1.size();
    ll m = s2.size();

    ll left = 0, right;

    ll resLeft = -1, resRight = 1e9;

    map<char, int> freq_str, freq_pat;

    // storing pattern string frequency
    for (char x : s2)
    {
        freq_pat[x]++;
    }

    // fixing right ptr for each index
    for (right = 0; right < n; right++)
    {
        freq_str[s1[right]]++;

        bool goodString = true;

        // iterating over all character of pattern and cheking if it found or not
        for (auto x : freq_pat)
        {
            // 0 count or less count than pattern
            if ((freq_str.count(x.first) == 0) || (freq_str[x.first] < x.second))
            {
                goodString = false;
                break;
            }
        }

        // if string window from left to right is not good
        if (!goodString)
            continue;

        // move left forward for every right
        //(check removal from begining can create any effect or not)
        while (left < n && left <= right && (freq_pat.count(s1[left]) == 0 || freq_str[s1[left]] > freq_pat[s1[left]]))
        {
            // if not increment begin ptr and reduce window size
            freq_str[s1[left]]--;
            if (freq_str[s1[left]] == 0)
            {
                freq_str.erase(s1[left]);
            }
            left++;
        }
        // update window
        if (resRight - resLeft + 1 > right - left + 1)
        {
            resRight = right;
            resLeft = left;
        }
    }
    if (resLeft == -1)
    {
        cout << "No String" << endl;
    }
    // printing final Answer
    cout << s1.substr(resLeft, resRight - resLeft + 1) << endl;
}

int main()
{
    RadheKrishna;

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    // int testcase = 1;
    // cin >> testcase;
    // int testcaseCount = 1;
    // while (testcase--)
    // {
    //     // cout << "Case #" << testcaseCount << ": ";
    //     testcaseCount++;
    HarHarMahadev();
    // }
    return 0;
}