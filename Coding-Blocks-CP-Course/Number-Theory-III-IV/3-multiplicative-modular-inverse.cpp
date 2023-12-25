// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

template <typename T>
T extended_gcd(T a, T b, T &x, T &y)
{
    if (b == 0)
    {
        // base case
        x = 1;
        y = 0;
        return a;
    }
    T d = extended_gcd(b, a % b, x, y);
    T currX = y;
    T currY = x - (a / b) * y;

    // cout << currX << " " << currY << endl;

    x = currX;
    y = currY;
    return d;
}

/*
chinese remainder theorem = (ab)%m = 1 (it means b is the modulo inverse of a)
 (ab)%m = 1
 (ab)%m - 1 = 0 (it means ab-1 is multiple of m)
 (ab) - 1 = km;
 (ab) - km = 1
 (ab) + (-k)m  = 1;
 ab + (k")m = 1 (gcd(a,m));
 just apply extended euclied
*/
template <typename T>
T mod_inverse(T a, T m)
{
    T x = 0, y = 0;
    T gcd = extended_gcd(a, m, x, y);
    if (gcd != 1)
    {
        cout << "Mod Not Exist" << endl;
        return -1;
    }
    // we don't need y;
    if (x < 0)
    {
        return x + m;
    }
    else
    {
        return x;
    }
}

int main()
{
    cout << mod_inverse(6, 7) << endl;
    return 0;
}