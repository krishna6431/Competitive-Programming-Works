#include <bits/stdc++.h>
using namespace std;

int toh(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int ans1 = toh(n - 1);
    int ans2 = toh(n - 1);
    return ans1 + ans2 + 1;
}
int main()
{
    int n;
    cin >> n;
    cout << toh(n);
    return 0;
}