#include <iostream>
#include <string>
using namespace std;
#define ll long long
#define fr(i, a, b) for (int i = a; i < b; i++)
void solve()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string ss;
        cin >> ss;
        bool done = 0;
        ll count = 0;
        fr(i, 2, n)
        {
            if (ss[i - 2] == ss[i - 1] && ss[i - 2] == ss[i])
            {
                if (!done)
                    done = 1;
                continue;
            }
            if (i - 3 >= 0)
            {
                if (!(ss[i - 3] == ss[i - 2] && ss[i - 2] == ss[i]))
                    count++;
            }
            else
            {
                count++;
            }
        }
        cout << count + done << endl;
    }
}
int main()
{
    solve();
    return 0;
}