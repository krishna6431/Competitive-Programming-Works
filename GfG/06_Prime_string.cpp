#include <iostream>
#include <string>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        string s;
        cin >> n >> s;
        long long sum = 0;
        for (long long i = 0; i < n; i++)
        {
            sum += (int)(s[i]);
        }
        int flag = 1;
        for (int i = 2; i * i <= sum; i++)
        {
            if (sum % i == 0)
            {
                flag = 0;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}