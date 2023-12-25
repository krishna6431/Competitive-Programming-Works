#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> prime_fact;

void prime_factor(int n)
{
    int cnt;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cnt = 0;
            while (n % i == 0)
            {
                cnt++;
                n /= i;
            }
            prime_fact.push_back({i, cnt});
        }
    }
    if (n != 1)
    {
        prime_fact.push_back({n, 1});
    }
}

int main()
{
    int n;
    cin >> n;
    prime_factor(n);
    for (auto x : prime_fact)
    {
        cout << "(" << x.first << "^" << x.second << ")";
    }
    cout << endl;
    return 0;
}