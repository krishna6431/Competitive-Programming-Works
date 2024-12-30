#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007

class Fenwick
{
public:
    vector<ll> B1, B2;
    int n;

    // Constructor to initialize Fenwick Tree
    Fenwick(int n)
    {
        this->n = n;
        B1.resize(n + 1, 0); // Fenwick Tree for range addition
        B2.resize(n + 1, 0); // Fenwick Tree for range subtraction
    }

    // Add value `x` to index `idx` in the specified tree `b`
    void add(vector<ll> &b, int idx, ll x)
    {
        while (idx <= n)
        {
            b[idx] += x;
            idx += (idx & -idx); // Move to the next node
        }
    }

    // Range update: Add `x` to all elements in range [l, r]
    void rangeAdd(int l, int r, ll x)
    {
        add(B1, l, x);           // Add `x` starting from index `l`
        add(B1, r + 1, -x);      // Subtract `x` starting from index `r + 1`
        add(B2, l, x * (l - 1)); // Adjust for prefix sums
        add(B2, r + 1, -x * r);
    }

    // Get sum of elements up to index `idx` in the specified tree `b`
    ll sum(vector<ll> &b, int idx)
    {
        ll total = 0;
        while (idx > 0)
        {
            total += b[idx];
            idx -= (idx & -idx); // Move to the parent node
        }
        return total;
    }

    // Prefix sum up to index `idx`
    ll prefSum(int idx)
    {
        return sum(B1, idx) * idx - sum(B2, idx);
    }

    // Range sum query for range [l, r]
    ll rangeSum(int l, int r)
    {
        return prefSum(r) - prefSum(l - 1);
    }
};

int main()
{
    // Example usage of Fenwick Tree with Range Updates and Queries

    int n = 10; // Size of the array (1-based indexing)
    Fenwick fenwickTree(n);

    // Perform some range updates
    fenwickTree.rangeAdd(1, 5, 10); // Add 10 to range [1, 5]
    fenwickTree.rangeAdd(3, 7, 5);  // Add 5 to range [3, 7]

    // Perform some queries
    cout << "Range sum [1, 5]: " << fenwickTree.rangeSum(1, 5) << endl;   // Query sum in range [1, 5]
    cout << "Range sum [3, 7]: " << fenwickTree.rangeSum(3, 7) << endl;   // Query sum in range [3, 7]
    cout << "Range sum [6, 10]: " << fenwickTree.rangeSum(6, 10) << endl; // Query sum in range [6, 10]

    // Perform another update and query
    fenwickTree.rangeAdd(2, 8, 20); // Add 20 to range [2, 8]

    cout << "Range sum [2, 8]: " << fenwickTree.rangeSum(2, 8) << endl;   // Query sum in range [2, 8]
    cout << "Range sum [1, 10]: " << fenwickTree.rangeSum(1, 10) << endl; // Query sum in range [1, 10]

    return 0;
}
