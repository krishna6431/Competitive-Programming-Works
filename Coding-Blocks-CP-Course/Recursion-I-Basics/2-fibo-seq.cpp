#include <bits/stdc++.h>
using namespace std;

// recursive function which finds the fibonnaci number
int findFiboSeq(int n)
{
    if (n == 0 or n == 1)
    {
        return n;
    }
    int f1 = findFiboSeq(n - 1);
    int f2 = findFiboSeq(n - 2);
    return f1 + f2;
}

int main()
{
    int n;
    cin >> n;
    cout << findFiboSeq(n) << endl;
    return 0;
}