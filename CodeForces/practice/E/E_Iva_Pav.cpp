#define ll long long
#include <bits/stdc++.h>
using namespace std;

class segment_tree
{
private:
    vector<ll> seg_tree;

public:
    segment_tree(ll n)
    {
        seg_tree.resize(n, 0);
    }

    void build(vector<ll> &arr, ll start, ll end, ll index)
    {
        if (start == end)
        {
            seg_tree[index] = arr[start];
            return;
        }

        ll mid = (start + end) / 2;

        build(arr, start, mid, 2 * index + 1);
        build(arr, mid + 1, end, 2 * index + 2);

        seg_tree[index] = (seg_tree[2 * index + 1] & seg_tree[2 * index + 2]);
    }

    ll query(ll start, ll end, ll qStart, ll qEnd, ll index)
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
        ll mid = (start + end) / 2;
        ll left = query(start, mid, qStart, qEnd, 2 * index + 1);
        ll right = query(mid + 1, end, qStart, qEnd, 2 * index + 2);
        return (left & right);
    }

    void pollUpdate(ll start, ll end, ll poll, ll change, ll index)
    {
        // out of bound
        if (poll > end or poll < start)
        {
            return;
        }

        // leafnode
        if (start == end)
        {
            seg_tree[index] += change;
            return;
        }

        ll mid = (start + end) / 2;
        pollUpdate(start, mid, poll, change, 2 * index + 1);
        pollUpdate(mid + 1, end, poll, change, 2 * index + 2);
        seg_tree[index] = seg_tree[2 * index + 1] & seg_tree[2 * index + 2];
    }

    void rangeUpdate(ll start, ll end, ll l, ll r, ll change, ll index)
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

        ll mid = (start + end) / 2;
        rangeUpdate(start, mid, l, r, change, 2 * index + 1);
        rangeUpdate(mid + 1, end, l, r, change, 2 * index + 2);
        seg_tree[index] = seg_tree[2 * index + 2] & seg_tree[2 * index + 1];
    }

    void prll()
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        segment_tree st(4 * n + 5);
        st.build(v, 0, n - 1, 0);
        ll q;
        cin >> q;
        while (q--)
        {
            ll left, target;
            cin >> left >> target;
            left--;
            ll start = left;
            ll end = (n - 1);
            ll ans = -1;

            while (start <= end)
            {
                ll mid = (start + end) / 2;
                ll tempAns = st.query(0, n - 1, left, mid, 0);
                // cout << tempAns << endl;
                if (tempAns >= target)
                {
                    ans = mid;
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
            // cout << endl;
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}