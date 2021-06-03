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
void resetInput()
{
    static char *input = NULL;
}
char *mystrtok(char *str, char delim)
{
    static char *input = NULL; // create static so that it maintains the state of string
    if (str != NULL)
    {
        input = str;
    }
    if (input == NULL) // if input pointint ot null return null
    {
        return NULL;
    }
    char *token = new char[strlen(input) + 1]; // crate dynamically so that we can retutn it;
    int i = 0;
    for (; input[i] != '\0'; i++)
    {
        if (input[i] != delim)
        {
            token[i] = input[i];
        }
        else
        {
            token[i] = '\0';
            input = input + i + 1;
            return token;
        }
    }
    //set null to last token of string
    token[i] = '\0';
    //reset input to NULL
    input = NULL;
    delete input;
    return token;
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
        cout << "Case #" << tc++ << ":";
        char in[1000];
        cin.getline(in, 1000, '#');
        //strtok
        char *token = mystrtok(in, ' ');
        cout << token << ",";
        while (token != NULL)
        {
            token = mystrtok(NULL, ' ');
            cout << token << ",";
        }
        cout << endl;
        static char *input = NULL;
    }
    return 0;
}