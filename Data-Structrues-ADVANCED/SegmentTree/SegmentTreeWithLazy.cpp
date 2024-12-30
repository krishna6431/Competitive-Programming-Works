#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/* Segment Tree Lazy Propagation Code */
class SegTree
{
public:
    int len;
    vector<int> t, unpropUpd; // Segment tree and unpropagated updates
    vector<bool> isLazy;      // Indicates if a node has unpropagated updates

    SegTree() {}
    SegTree(int l)
    {
        len = l;
        t.resize(4 * len);
        isLazy.resize(4 * len);
        unpropUpd.resize(4 * len);
    }

    // Apply an update to a node
    void apply(int v, int tl, int tr, int val)
    {
        if (tl != tr)
        { // Leaf nodes can't propagate updates
            isLazy[v] = true;
            unpropUpd[v] = val; // Store the update for future propagation
        }
        t[v] = (tr - tl + 1) * val; // Assign/override update
    }

    // Push down lazy updates to children
    void pushDown(int v, int tl, int tr)
    {
        if (!isLazy[v])
            return;        // No lazy update to propagate
        isLazy[v] = false; // Clear lazy flag
        int tm = (tl + tr) / 2;
        apply(2 * v, tl, tm, unpropUpd[v]);         // Propagate to left child
        apply(2 * v + 1, tm + 1, tr, unpropUpd[v]); // Propagate to right child
        unpropUpd[v] = 0;                           // Clear the update after propagation
    }

    // Build the Segment Tree
    void build(vector<int> &a, int v, int tl, int tr)
    {
        if (tl == tr)
        { // Leaf node
            t[v] = a[tl];
            return;
        }
        int tm = (tl + tr) / 2;
        build(a, 2 * v, tl, tm);         // Build left child
        build(a, 2 * v + 1, tm + 1, tr); // Build right child
        t[v] = t[2 * v] + t[2 * v + 1];  // Combine results
    }

    // Query the range [l, r]
    int query(int v, int tl, int tr, int l, int r)
    {
        if (tl > r || tr < l)
            return 0; // No overlap
        if (l <= tl && tr <= r)
            return t[v]; // Full overlap

        pushDown(v, tl, tr); // Remove lazy tag before going down
        int tm = (tl + tr) / 2;
        int leftAns = query(2 * v, tl, tm, l, r);          // Query left child
        int rightAns = query(2 * v + 1, tm + 1, tr, l, r); // Query right child
        return leftAns + rightAns;                         // Combine results
    }

    // Update the range [l, r] with value `val`
    void update(int v, int tl, int tr, int l, int r, int val)
    {
        if (l <= tl && tr <= r)
        { // Full overlap -- apply update and return
            apply(v, tl, tr, val);
            return;
        }
        if (tl > r || tr < l)
            return; // No overlap

        pushDown(v, tl, tr); // Push down lazy updates before proceeding
        int tm = (tl + tr) / 2;
        update(2 * v, tl, tm, l, r, val);         // Update left child
        update(2 * v + 1, tm + 1, tr, l, r, val); // Update right child
        t[v] = t[2 * v] + t[2 * v + 1];           // Combine results
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

    void update(int l, int r, int val)
    {
        update(1, 0, len - 1, l, r, val);
    }
};

int main()
{
    cout << "Segment Tree with Lazy Propagation Example" << endl;

    vector<int> arr = {1, 2, 3, 4}; // Input array
    int n = arr.size();

    SegTree segTree(n);

    segTree.build(arr); // Build the segment tree

    cout << "Initial Segment Tree Built from Array:" << endl;
}
