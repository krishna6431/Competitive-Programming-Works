#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    for (int i = 1; i <= 64; i++)
    {
        cout << bitset<6>(i) << endl;
    }
}