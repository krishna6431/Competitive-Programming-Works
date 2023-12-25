#include <bits/stdc++.h>
using namespace std;

class segment_tree
{
private:
    vector<int> seg_tree;

public:
    segment_tree(int n)
    {
        seg_tree.resize(n, 0);
    }

    void build(vector<int> &arr, int start, int end, int index)
    {
        if (start == end)
        {
            seg_tree[index] = arr[start];
            return;
        }

        int mid = (start + end) / 2;

        build(arr, start, mid, 2 * index);
        build(arr, mid + 1, end, 2 * index + 1);

        seg_tree[index] = min(seg_tree[2 * index], seg_tree[2 * index + 1]);
        return;
    }

    int query(int start, int end, int qStart, int qEnd, int index)
    {
        // complate overlap
        if (start >= qStart and end <= qEnd)
        {
            return seg_tree[index];
        }
        // no overlap
        if (qEnd < start or qStart > end)
        {
            return 1e9;
        }
        // partial overlap
        int mid = (start + end) / 2;
        int left = query(start, mid, qStart, qEnd, 2 * index);
        int right = query(mid + 1, end, qStart, qEnd, 2 * index + 1);
        return min(left, right);
    }

    void pointUpdate(int start, int end, int point, int change, int index)
    {
        // out of bound
        if (point > end or point < start)
        {
            return;
        }

        // leafnode
        if (start == end)
        {
            seg_tree[index] += change;
            return;
        }

        int mid = (start + end) / 2;
        pointUpdate(start, mid, point, change, 2 * index);
        pointUpdate(mid + 1, end, point, change, 2 * index + 1);
        seg_tree[index] = min(seg_tree[2 * index + 1], seg_tree[2 * index]);
    }

    void rangeUpdate(int start, int end, int l, int r, int change, int index)
    {
        // out of bound
        if (l > end or r < start)
        {
            return;
        }

        if (start == end)
        {
            seg_tree[index] += change;
            return;
        }

        int mid = (start + end) / 2;
        rangeUpdate(start, mid, l, r, change, 2 * index);
        rangeUpdate(mid + 1, end, l, r, change, 2 * index + 1);
        seg_tree[index] = min(seg_tree[2 * index + 1], seg_tree[2 * index]);
    }

    void print()
    {
        for (auto x : seg_tree)
        {
            cout << x << " ";
        }
        cout << endl;
    }
};

int main()
{
    vector<int> arr = {1, 3, 2, -5, 6, 4};
    int n = arr.size();
    segment_tree st(100);
    st.build(arr, 0, arr.size() - 1, 1);
    st.pointUpdate(1, n - 1, 1, -20, 1);
    // st.rangeUpdate(0, n - 1, 1, 3, -10, 1);
    cout << st.query(0, n - 1, 2, 3, 1) << endl;
    st.print();
    return 0;
}