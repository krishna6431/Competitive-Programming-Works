#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{

    if (n == 0 or n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int ncr(int n, int r)
{

    return factorial(n) / (factorial(n - r) * factorial(r));
}

// nc1 always equals n
int friendProblem(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;

    int ans = 1 * friendProblem(n - 1) + ncr(n - 1, 1) * friendProblem(n - 2);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << friendProblem(n) << endl;
    return 0;
}