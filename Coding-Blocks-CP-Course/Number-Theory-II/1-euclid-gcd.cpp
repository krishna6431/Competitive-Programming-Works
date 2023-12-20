// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

template <typename T>
// TC : O(log(min(a,b)))
T euclid_gcd(T a, T b)
{
    if (b == 0)
        return a;
    return euclid_gcd(b, a % b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "GCD: " << euclid_gcd(a, b) << endl;
    return 0;
}