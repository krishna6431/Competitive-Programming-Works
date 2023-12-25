// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;
/**
 * ax + by = gcd(a,b); eqn1
 * ax + by = gcd(b,a%b)
 * bx1 + (a%b)y1 = gcd(b,a%b) eqn2
 * a%b = a - floor(a/b)*b;
 * eqn2 can be represented as
 * ay1 + b(x1-y1.floor(a/b));
 *
 * we found values of x and y
 * x = y1
 * y = x1 - y1.floor(a/b)
 *
 * we can found values of x and y using bottomup manner
 */

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

int main()
{
    int x = 0, y = 0;
    cout << extended_gcd(18, 30, x, y) << endl;
    return 0;
}