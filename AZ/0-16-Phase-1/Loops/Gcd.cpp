// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int main()
{
    int a, b;
    cin >> a >> b;

    if (a < b)
        swap(a, b);

    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout << a << "\n";
    return 0;
}