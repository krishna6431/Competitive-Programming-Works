// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int minStepsToOne(int n)
{
    if (n == 1)
    {
        return 0;
    }

    int smallAns1 = 1e9, smallAns2 = 1e9, smallAns3 = 1e9;
    if (n % 3 == 0)
    {
        smallAns1 = minStepsToOne(n / 3);
    }
    if (n % 2 == 0)
    {
        smallAns2 = minStepsToOne(n / 2);
    }
    smallAns3 = minStepsToOne(n - 1);

    return 1 + min(smallAns1, min(smallAns2, smallAns3));
}
int main()
{
    int n;
    cin >> n;
    cout << minStepsToOne(n);
    return 0;
}