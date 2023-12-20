#include <bits/stdc++.h>
using namespace std;

const int n = 10000000;
bitset<10000000> prime;
vector<int> primes;

void seive()
{

    // set all bits
    prime.set(); // 1 1 1 1 1 1 1 1 1 1 1 1...
    prime[0] = prime[1] = 0;
    prime[2] = 1;
    primes.push_back(2);

    for (long long i = 3; i <= sqrt(n); i += 2)
    {
        if (prime[i])
        {
            primes.push_back(i);
            for (long long j = i * i; j <= n; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}

vector<pair<int, int>> factorizeKaro(int n)
{
    vector<pair<int, int>> ans;
    int p = primes[0];
    int i = 0;
    int cnt;
    while (p * p <= n)
    {
        if (n % p == 0)
        {
            cnt = 0;
            while (n % p == 0)
            {
                cnt++;
                n /= p;
            }
        }
        ans.push_back({p, cnt});
        i++;
        p = primes[i];
    }
    if (n != 1)
    {
        ans.push_back({n, 1});
    }
    return ans;
}

int main()
{
    seive();
    int N;
    cin >> N;
    vector<pair<int, int>> ans = factorizeKaro(N);
    int res = 1;
    for (auto x : ans)
    {
        res *= (x.second + 1);
    }
    cout << res;
    cout << endl;
    return 0;
}