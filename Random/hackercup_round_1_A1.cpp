//All Important Header Files
#include <bits/stdc++.h>
#include <time.h>
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
    clock_t t_start = clock();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    int tc;
    cin >> tc;
    int c = 1;
    while (tc--)
    {
        ll n, k, w;
        cin >> n >> k >> w;
        vector<ll> L(n + 1);
        for (ll i = 1; i <= k; i++)
        {
            cin >> L[i];
        }
        ll al, bl, cl, dl;
        cin >> al >> bl >> cl >> dl;
        vector<ll> H(n + 1);
        for (ll i = 1; i <= k; i++)
        {
            cin >> H[i];
        }
        ll ah, bh, ch, dh;
        cin >> ah >> bh >> ch >> dh;
        int flag = 0;
        for (ll i = k + 1; i <= n; i++)
        {
            L[i] = ((al * L[i - 2] + bl * L[i - 1] + cl) % dl) + 1;
        }
        for (ll i = k + 1; i <= n; i++)
        {
            H[i] = ((ah * H[i - 2] + bh * H[i - 1] + ch) % dh) + 1;
        }
        // for (auto x : L)
        // {
        //     cout << x << " ";
        // }
        // cout << endl;
        vector<ll> P(n + 1);
        vector<ll> p1, p2;
        ll breakpoint = 0;
        ll p_temp = 0;
        ll overlap = L[1];
        ll max_h = H[1];
        ll b = 0;
        ll firstpart = 0;
        int counter = 0;
        for (ll i = 1; i <= n; i++)
        {
            p1.pb(L[i]);
            p1.pb(0);
            p2.pb(L[i] + w);
            p2.pb(H[i]);
            if (H[i] > max_h)
            {

                max_h = H[i];
            }

            if (i >= 2 && L[i] <= L[i - 1] + w)
            {

                // if ((L[i] + w > L[i - 1] + w))
                // {

                P[i] = firstpart + (2 * ((p2[0] - overlap) + max_h));
                counter = 0;

                // }
            }

            else
            {
                if (counter == 1)
                {
                    P[i - 1] = P[i - 1] - firstpart;
                    firstpart = P[i - 2];
                }
                else
                {
                    firstpart = P[i - 1];
                }
                P[i] = firstpart + (2 * ((p2[0] - p1[0]) + H[i]));
                breakpoint = 1;
                counter++;
                max_h = H[i];
                overlap = p1[0];
            }
            p1.clear();
            p2.clear();
        }
        ll sz = P.size();
        ll ans = 1;
        for (ll i = 1; i < sz; i++)
        {
            ans = (ans * P[i]) % MOD;
        }
        cout << "Case #" << c << ": " << ans << endl;
        c++;
    }
    return 0;
}