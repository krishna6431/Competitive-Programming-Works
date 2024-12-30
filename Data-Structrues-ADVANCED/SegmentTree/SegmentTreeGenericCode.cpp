#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/* Segment Tree with Lazy Propagation - Generic Implementation */

/*
Key Concepts:
- merge(x, identityElement) = x
- identityTransformation.combine(x) = x
*/

class Node
{
public:
    int v = 0; // Value stored in the node (can be extended for more variables)

    // 1. Identity element: Default node value that does not impact the result
    Node() {}

    // 2. Constructor to initialize the node
    Node(int val)
    {
        v = val;
    }

    // 3. Merge function: Defines how to combine child nodes
    void merge(const Node &l, const Node &r)
    {
        v = l.v + r.v; // Example: Sum of child nodes
    }
};

class Update
{
public:
    int v = 0;

    // 4. Identity transformation: Default update value
    Update() {}

    // 5. Constructor to initialize update value
    Update(int val)
    {
        v = val;
    }

    // 6. Combine updates for future propagation
    void combine(const Update &otherUpdate, const int &tl, const int &tr)
    {
        v += otherUpdate.v; // Example: Adding updates (modify as needed)
    }

    // 7. Apply the update to a node
    void apply(Node &node, const int &tl, const int &tr) const
    {
        node.v += (tr - tl + 1) * v; // Example: Range addition
    }
};

template <typename node, typename update>
class SegTree
{
public:
    int len;
    vector<node> t;           // Segment tree array
    vector<update> unpropUpd; // Unpropagated updates for lazy propagation
    vector<bool> isLazy;      // Lazy flags for nodes
    node identityElement;
    update identityTransformation;

    SegTree() {}

    SegTree(int l)
    {
        len = l;
        t.resize(4 * len);
        isLazy.resize(4 * len);
        unpropUpd.resize(4 * len);
        identityElement = node();
        identityTransformation = update();
    }

    // Apply an update to a node and mark it lazy if necessary
    void apply(const int &v, const int &tl, const int &tr, const update &upd)
    {
        if (tl != tr)
        { // Leaf nodes cannot be lazy
            isLazy[v] = true;
            unpropUpd[v].combine(upd, tl, tr);
        }
        upd.apply(t[v], tl, tr);
    }

    // Push down lazy updates to children nodes
    void pushDown(const int &v, const int &tl, const int &tr)
    {
        if (!isLazy[v])
            return;
        isLazy[v] = false;
        int tm = (tl + tr) / 2;
        apply(2 * v, tl, tm, unpropUpd[v]);         // Left child
        apply(2 * v + 1, tm + 1, tr, unpropUpd[v]); // Right child
        unpropUpd[v] = identityTransformation;
    }

    // Build the segment tree from an array
    template <typename T>
    void build(const T &a, const int &v, const int &tl, const int &tr)
    {
        if (tl == tr)
        {
            t[v] = a[tl];
            return;
        }
        int tm = (tl + tr) / 2;
        build(a, 2 * v, tl, tm);
        build(a, 2 * v + 1, tm + 1, tr);
        t[v].merge(t[2 * v], t[2 * v + 1]);
    }

    // Query a range [l, r]
    node query(const int &v, const int &tl, const int &tr, const int &l, const int &r)
    {
        if (tl > r || tr < l)
            return identityElement; // No overlap
        if (l <= tl && tr <= r)
            return t[v]; // Full overlap

        pushDown(v, tl, tr); // Partial overlap: push updates down
        int tm = (tl + tr) / 2;
        node leftAns = query(2 * v, tl, tm, l, r);
        node rightAns = query(2 * v + 1, tm + 1, tr, l, r);

        node ans;
        ans.merge(leftAns, rightAns);
        return ans;
    }

    // Update a range [l, r]
    void rangeUpdate(const int &v, const int &tl, const int &tr, const int &l, const int &r, const update &upd)
    {
        if (l <= tl && tr <= r)
        { // Full overlap: apply update and return
            apply(v, tl, tr, upd);
            return;
        }
        if (tl > r || tr < l)
            return; // No overlap

        // Partial overlap: push lazy updates down and recurse
        pushDown(v, tl, tr);
        int tm = (tl + tr) / 2;
        rangeUpdate(2 * v, tl, tm, l, r, upd);
        rangeUpdate(2 * v + 1, tm + 1, tr, l, r, upd);
        t[v].merge(t[2 * v], t[2 * v + 1]); // Recalculate current node after updates
    }

    // Overloaded functions for ease of use
    template <typename T>
    void build(const T &a)
    {
        build(a, 1, 0, len - 1);
    }

    node query(const int &l, const int &r)
    {
        return query(1, 0, len - 1, l, r);
    }

    void rangeUpdate(const int &l, const int &r, const update &upd)
    {
        rangeUpdate(1, 0, len - 1, l, r, upd);
    }
};

int main()
{
    // Example usage of the Segment Tree with Lazy Propagation

    int n = 8;
    vector<int> a = {1, 2, 1, 4, 2, 3, 1, 1};

    // Initialize the segment tree
    SegTree<Node, Update> segTree(n);
    segTree.build(a);

    // Display initial segment tree values
    for (int i = 0; i < n; i++)
    {
        cout << segTree.query(i, i).v << " ";
    }
    cout << endl;

    // Query: Range sum query for [1, 5]
    int sum = segTree.query(1, 5).v;
    cout << "Sum for range [1 to 5]: " << sum << endl;

    // Update: Point update at index 2 (set value to 10)
    segTree.rangeUpdate(2, 2, Update(10));
    sum = segTree.query(1, 5).v;
    cout << "New Sum for range [1 to 5]: " << sum << endl;

    // Display updated segment tree values
    for (int i = 0; i < n; i++)
    {
        cout << segTree.query(i, i).v << " ";
    }
    cout << endl;

    // Update: Range update for [2 to 7] with value +10 and then +20
    segTree.rangeUpdate(2, 7, Update(10));
    segTree.rangeUpdate(2, 7, Update(20));

    // Display updated segment tree values after range updates
    for (int i = 0; i < n; i++)
    {
        cout << segTree.query(i, i).v << " ";
    }
    cout << endl;

    // Query: Range sum query for [2 to 3]
    sum = segTree.query(2, 3).v;
    cout << "New Sum for range [2 to 3]: " << sum << endl;

    return 0;
}
