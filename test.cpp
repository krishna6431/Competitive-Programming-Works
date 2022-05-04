#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum1 = 0;
    int sum2 = 0;
    int j = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        sum1 += j * A[i];
        j++;
    }
    j = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        sum2 += j * B[i];
        j++;
    }
    return (sum1 - sum2);
}