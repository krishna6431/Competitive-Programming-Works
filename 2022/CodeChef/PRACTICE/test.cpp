#include <bits/stdc++.h>
using namespace std;

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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, ans = INT_MAX;
        cin >> a >> b;
        string s;
        cin >> s;
        int arr[a];
        int count = 0;
        for (int i = 1; i < a; i++)
        {
            if (s[i - 1] != s[i])
            {
                count++;
                arr[i] = count;
            }
            else
                arr[i] = count;
        }
        arr[0] = 0;
        for (auto x : arr)
        {
            cout << x << " ";
        }
        cout << endl;
        for (int i = a - 1; i >= 0; i--)
        {
            bug(i);
            if ((i - (b - 1)) < 0)
                break;
            int check = arr[i] - arr[i - b + 1];
            bug(check);
            if (s[i] == '0')
                check++;
            ans = min(ans, check);
            bug(ans);
        }
        cout << ans << endl;
    }
}