#include <bits/stdc++.h>
using namespace std;

void incr(int n)
{
    if (n == 0)
    {
        return;
    }
    incr(n - 1);
    cout << n << " ";
}

void decr(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    decr(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << "Incresing: " << endl;
    incr(n);
    cout << endl;
    cout << "Decresing: " << endl;
    decr(n);
    return 0;
}