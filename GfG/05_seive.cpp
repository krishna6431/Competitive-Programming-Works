#include <iostream>
using namespace std;

int is_prime[100001];
void seive()
{
    int max = 100000;
    for (int i = 2; i <= max; i++)
    {
        is_prime[i] = 1;
    }
    is_prime[0] = is_prime[1] = 0;
    for (int i = 2; i * i <= max; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= max; j += i)
            {
                is_prime[j] = 0;
            }
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    seive();
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        for (int i = a; i <= b; i++)
        {
            if (is_prime[i])
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}