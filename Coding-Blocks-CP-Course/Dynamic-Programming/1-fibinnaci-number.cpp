// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

// recursive function to compute fibbonnaci number
// time complexity : O(2^n)
// space complexity : O(N) Recusion stack space
int fib(int n)
{
    if (n == 0 or n == 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

// main function starts here
int main()
{
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}