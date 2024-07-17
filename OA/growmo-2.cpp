#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string tbin(ll N)
{
    string binary;
    while (N > 0)
    {
        binary += (N % 2 == 0 ? '0' : '1');
        N /= 2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

ll tdec(const string &binary)
{
    ll decimal = 0;
    for (char bit : binary)
    {
        decimal = decimal * 2 + (bit - '0');
    }
    return decimal;
}

ll solve(ll N)
{
    string br = tbin(N);
    ll mv = N;

    for (size_t i = 0; i < br.size(); ++i)
    {

        char fb = (br[i] == '0') ? '1' : '0';

        string mbs = br;
        mbs[i] = fb;

        ll mvv = tdec(mbs);
        if (mvv < mv)
        {
            mv = mvv;
        }
    }

    return mv;
}

signed main()
{
    ll N;

    cin >> N;
    if (N == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        ll result = solve(N);
        cout << result << endl;
    }
    return 0;
}
