#include <bits/stdc++.h>

using namespace std;
// #define long long ll
void Solve()
{
    long long n;
    cin >> n;
    vector<long long> v(n);
    for (auto &x : v)
    {
        cin >> x;
    }
    sort(v.begin(), v.end());
    double prefix[n];
    double suffix[n];
    prefix[0] = 0;
    for (int i = 1; i < n; i++)
    {
        prefix[i] = (v[i] + v[0]) / 2.0;
    }
    suffix[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = (v[n - 1] + v[i]) / 2.0;
    }

    double ans = 0;
    for (int i = 1; i < n; i++)
    {
        if ((n - i - 2) >= 0 and (n - i - 1) - i - 1 == 1)
        {
            // cout << "Yes" << endl;
            ans = max(ans, suffix[n - i - 1 - 1] - prefix[i]);
            ans = max(ans, suffix[n - i - 1] - prefix[i + 1]);
            break;
        }
        ans = max(ans, suffix[n - i - 1] - prefix[i]);
    }

    cout << setprecision(6) << ans << endl;
}

int main()
{
    freopen("a1-overall.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // auto s1 = high_resolution_clock::now();
    long long testcase = 1;
    if (testcase)
    {
        long long testcase_cnt;
        cin >> testcase_cnt;

        while (testcase_cnt--)
        {
            cout << "Case #" << testcase << ": ";
            Solve();
            testcase++;
        }
    }
    else
    {
        Solve();
    }

    return 0;
}