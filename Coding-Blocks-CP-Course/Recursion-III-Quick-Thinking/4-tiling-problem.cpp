#include <bits/stdc++.h>
using namespace std;

int tilingProblem(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;
    if (n == 3)
        return 1;
    if (n == 4)
        return 2;

    return tilingProblem(n - 1) + tilingProblem(n - 4);
}

int main()
{
    // Given a wall of size 4*n and tiles of size 1*4 and 4*1;
    int n;
    cin >> n;
    cout << tilingProblem(n) << endl;
    return 0;
}