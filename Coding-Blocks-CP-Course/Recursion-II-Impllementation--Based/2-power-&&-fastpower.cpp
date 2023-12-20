#include <bits/stdc++.h>
using namespace std;

// normal power of two number (o((n)))
int power(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return a * power(a, n - 1);
}
// fast power technique O(logn)
int fastPower(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }

    int smallerAns = fastPower(a, n / 2);
    smallerAns *= smallerAns;

    if (n & 1)
    {
        return a * smallerAns;
    }
    return smallerAns;
}

int main()
{
    int a, n;
    cin >> a >> n;
    cout << "Power: " << power(a, n) << endl;
    cout << "Fast Power: " << fastPower(a, n) << endl;
    return 0;
}