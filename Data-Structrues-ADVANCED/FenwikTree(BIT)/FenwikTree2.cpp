#include <bits/stdc++.h>
using namespace std;

#define ll long long int

// Fenwick Tree with Range Update
// All queries should be 0-based, although internal working is 1-based
struct FenwickTree
{
    vector<ll> bit;
    ll n;

    // Constructor to initialize the Fenwick Tree
    FenwickTree(ll n)
    {
        this->n = n + 1;        // Internal size is n+1 for 1-based indexing
        bit.assign(n + 1, 0ll); // Initialize BIT with zeros
    }

    // Add value `val` to index `idx`
    void add(ll idx, ll val)
    {
        for (++idx; idx < n; idx += idx & -idx)
        {
            bit[idx] += val;
        }
    }

    // Range update: Add `val` to all elements in range [l, r]
    void range_add(ll l, ll r, ll val)
    {
        add(l, val);      // Add `val` starting from index `l`
        add(r + 1, -val); // Subtract `val` starting from index `r + 1`
    }

    // Get the value at index `idx`
    ll get(ll idx)
    {
        ll ret = 0;
        for (++idx; idx > 0ll; idx -= idx & -idx)
        {
            ret += bit[idx];
        }
        return ret;
    }
};

int main()
{
    // Example usage of Fenwick Tree with Range Updates and Queries

    int n = 10; // Size of the array (0-based indexing)
    FenwickTree ft(n);

    // Perform some range updates
    ft.range_add(0, 4, 10); // Add 10 to range [0, 4]
    ft.range_add(3, 7, 5);  // Add 5 to range [3, 7]

    // Perform some queries
    cout << "Value at index 4: " << ft.get(4) << endl; // Get value at index 4
    cout << "Value at index 6: " << ft.get(6) << endl; // Get value at index 6
    cout << "Value at index 8: " << ft.get(8) << endl; // Get value at index 8

    // Perform another update and query
    ft.range_add(2, 9, 20); // Add 20 to range [2, 9]

    cout << "Value at index 5 after update: " << ft.get(5) << endl; // Get value at index 5 after update
    cout << "Value at index 9 after update: " << ft.get(9) << endl; // Get value at index 9 after update

    return 0;
}
