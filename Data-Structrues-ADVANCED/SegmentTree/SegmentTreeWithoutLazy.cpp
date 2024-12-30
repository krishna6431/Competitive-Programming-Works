#include <iostream>
#include <vector>
using namespace std;
// code is written by mr_krishna

/* Segment Tree Standard Code (Without Lazy Propagation) */
class SegTree
{
public:
    int len;
    vector<int> t;

    SegTree() {}
    SegTree(int l)
    {
        len = l;
        t.resize(4 * len); // Allocate space for the segment tree
    }

    // Build Segment Tree -- build(a, 1, 0, len-1);
    void build(vector<int> &a, int v, int tl, int tr)
    {
        if (tl == tr)
        { // Leaf node
            t[v] = a[tl];
            return;
        }
        int tm = (tl + tr) / 2;          // Midpoint
        build(a, 2 * v, tl, tm);         // Build left child
        build(a, 2 * v + 1, tm + 1, tr); // Build right child
        t[v] = t[2 * v] + t[2 * v + 1];  // Combine results
    }

    // Query input question is = [l, r] included -- query(1, 0, len-1, l, r)
    int query(int v, int tl, int tr, int l, int r)
    {
        if (tl > r || tr < l)
            return 0; // No overlap
        if (l <= tl && tr <= r)
            return t[v]; // Full overlap

        // Partial overlap
        int tm = (tl + tr) / 2;                            // Midpoint
        int leftAns = query(2 * v, tl, tm, l, r);          // Query left child
        int rightAns = query(2 * v + 1, tm + 1, tr, l, r); // Query right child
        return leftAns + rightAns;                         // Combine results
    }

    // Update at index id of nums to a value val (assign/override/set) -- update(1, 0, len-1, id, val)
    void update(int v, int tl, int tr, int id, int val)
    {
        if (tl == id && tr == id)
        { // Reached leaf node
            t[v] = val;
            return;
        }
        if (id > tr || id < tl)
            return; // Out of bounds

        int tm = (tl + tr) / 2;                 // Midpoint
        update(2 * v, tl, tm, id, val);         // Update left child
        update(2 * v + 1, tm + 1, tr, id, val); // Update right child
        t[v] = t[2 * v] + t[2 * v + 1];         // Combine results
    }

    // Overloaded functions for ease of use
    void build(vector<int> &a)
    {
        build(a, 1, 0, len - 1);
    }

    int query(int l, int r)
    {
        return query(1, 0, len - 1, l, r);
    }

    void update(int id, int val)
    {
        update(1, 0, len - 1, id, val);
    }
};

int main()
{
    cout << "Segment Tree Example" << endl;

    vector<int> arr = {1, 3, 5, 7, 9}; // Input array
    int n = arr.size();

    SegTree segTree(n);

    segTree.build(arr); // Build the segment tree

    cout << "Initial Segment Tree Built from Array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Value at index " << i << ": " << segTree.query(i, i) << endl;
    }

    cout << "\nQuerying Range Sum [1..3]: " << segTree.query(1, 3) << endl;
}
