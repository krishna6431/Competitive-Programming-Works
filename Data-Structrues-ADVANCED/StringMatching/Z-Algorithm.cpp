#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef long long ll;

// code is written by mr_krishna
// Function to calculate the Z-array
vector<ll> computeZFunction(const string &s)
{
    ll n = s.length();
    vector<ll> z(n, 0);

    ll left = 0, right = 0;
    for (ll i = 1; i < n; i++)
    {
        if (i <= right)
        {
            z[i] = min(right - i + 1, z[i - left]);
        }

        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
        {
            z[i]++;
        }

        if (i + z[i] - 1 > right)
        {
            left = i;
            right = i + z[i] - 1;
        }
    }

    return z;
}

int main()
{
    string inputString = "abacaba";
    vector<ll> zArray = computeZFunction(inputString);

    cout << "Z-array: ";
    for (ll value : zArray)
    {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
