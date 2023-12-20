#include <bits/stdc++.h>
using namespace std;

// n == 1 : 0(1 way)   n == 2 : 00 01 10(3 ways);

int f(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 3;
    }
    return f(n - 1) + f(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}