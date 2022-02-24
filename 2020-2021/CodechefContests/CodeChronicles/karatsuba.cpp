//All Important Header Files
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
//ALL IMPORTANT MACROS
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define deb(x) cout << x << endl;
#define display(start, end) for (int i = start; i < end; i++)
#define MOD 1000000007
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a, n) a, a + n
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
//USING NAME SPACE
using namespace std;
//SOME TYPEDEF DECLARATION
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;

int getLength(long long value);
long long multiply(long long x, long long y);

int getLength(long long value)
{
    int counter = 0;
    while (value != 0)
    {
        counter++;
        value /= 10;
    }
    return counter;
}

long long multiply(long long x, long long y)
{
    int xLength = getLength(x);
    int yLength = getLength(y);

    // the bigger of the two lengths
    int N = (int)(fmax(xLength, yLength));

    // if the max length is small it's faster to just flat out multiply the two nums
    if (N < 10)
        return x * y;

    //max length divided and rounded up
    N = (N / 2) + (N % 2);

    long long multiplier = pow(10, N);

    long long b = x / multiplier;
    long long a = x - (b * multiplier);
    long long d = y / multiplier;
    long long c = y - (d * N);

    long long z0 = multiply(a, c);
    long long z1 = multiply(a + b, c + d);
    long long z2 = multiply(b, d);

    return z0 + ((z1 - z0 - z2) * multiplier) + (z2 * (long long)(pow(10, 2 * N)));
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    long long a;
    long long b;
    cin >> a;
    cout << '\n';
    cin >> b;
    cout << '\n'
         << a * b << endl;
    return 0;
}
