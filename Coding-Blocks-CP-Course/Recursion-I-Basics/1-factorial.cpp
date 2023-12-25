#include <bits/stdc++.h>
using namespace std;

// recursive function to compute factorial of the number
int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }

    int fact = n * factorial(n - 1);

    return fact;
}

// main function starts here
int main()
{
    int n;
    cin >> n;
    cout << "Factorial: " << factorial(n) << endl;
    return 0;
}