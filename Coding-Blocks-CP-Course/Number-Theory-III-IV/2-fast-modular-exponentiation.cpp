// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

/*
(a^b)%m (O(log(b)) time  b = no of bits
idea of bitmask
*/

template <typename T>

T fast_expo(T a, T b, T m)
{
    T res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = (res * a) % m;
        }
        a = (a * a) % m;
        b = b >> 1;
    }
    return res;
}

int main()
{
    cout << fast_expo(2, 12, (int)1e9 + 7) << endl;
    return 0;
}