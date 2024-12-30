#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll N = 2e5 + 7;
const ll maxn = N;

struct FenwickTree
{
    ll BIT[maxn] = {0}; // Fenwick Tree array initialized to zero

    // Query function to get the prefix sum from index 0 to i (1-based indexing)
    ll query(ll i)
    {
        i++; // Convert to 1-based indexing
        ll sum = 0;
        while (i > 0)
        {
            sum += BIT[i];
            i -= (i & -i); // Move to the parent node
        }
        return sum;
    }

    // Update function to add 'val' at index 'i' (1-based indexing)
    void update(ll i, ll val)
    {
        i++; // Convert to 1-based indexing
        while (i <= maxn)
        {
            BIT[i] += val;
            i += (i & -i); // Move to the next node
        }
    }

    // Range update function: Add 'val' to all elements in range [l, r]
    void rangeUpdate(ll l, ll r, ll val)
    {
        update(l, val);      // Add 'val' starting from index l
        update(r + 1, -val); // Subtract 'val' starting from index r + 1
    }

} fenw;

int main()
{
    // Example usage of Fenwick Tree

    // Initialize the Fenwick Tree
    FenwickTree fenw;

    // Array size and operations
    int n = 10;           // Size of the array (0-based indexing)
    vector<ll> arr(n, 0); // Example array initialized with zeros

    // Point updates
    fenw.update(2, 5);  // Add 5 at index 2
    fenw.update(4, 10); // Add 10 at index 4

    // Range update
    fenw.rangeUpdate(3, 6, 7); // Add 7 to all elements in range [3, 6]

    // Queries
    cout << "Prefix sum up to index 4: " << fenw.query(4) << endl; // Prefix sum [0..4]
    cout << "Prefix sum up to index 6: " << fenw.query(6) << endl; // Prefix sum [0..6]

    // Demonstrating the effect of range updates
    cout << "Value at index 3: " << fenw.query(3) - fenw.query(2) << endl; // Value at index 3
    cout << "Value at index 5: " << fenw.query(5) - fenw.query(4) << endl; // Value at index 5

    return 0;
}
