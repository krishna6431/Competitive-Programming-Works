#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    // Example: Check if 17 is a prime number
    int number = 17;

    if (isPrime(number))
    {
        cout << number << " is a prime number." << endl;
    }
    else
    {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}
