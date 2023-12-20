/*
     ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
     उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||
*/
// All Important Header Files
#include <bits/stdc++.h>
// ALL IMPORTANT MACROS
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define deb(x) cout << x << endl;
#define loop(start, end, incr) for (int i = start; i < end; i += incr)
#define MOD 1000000007
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a, n) a, a + n
#define endl "\n"
#define RadheKrishna                  \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
// USING NAME SPACE
using namespace std;
// SOME TYPEDEF DECLARATION
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;
#define que_max priority_queue<int>
#define que_min priority_queue<int, vi, greater<int>>
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
    cout << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}

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

        int parity = log2(end - start + 1);
        if (parity & 1)
        {
            (seg_tree[index] = seg_tree[2 * index] | seg_tree[2 * index + 1]);
        }
        else
        {
            seg_tree[index] = (seg_tree[2 * index] xor seg_tree[2 * index + 1]);
        }
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
        int right = query(mid + 1, mid, qStart, qEnd, 2 * index + 1);

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
            seg_tree[index] = change;
            return;
        }

        int mid = (start + end) / 2;
        pointUpdate(start, mid, point, change, 2 * index);
        pointUpdate(mid + 1, end, point, change, 2 * index + 1);
        int parity = log2(end - start + 1);
        if (parity & 1)
        {
            (seg_tree[index] = seg_tree[2 * index] | seg_tree[2 * index + 1]);
        }
        else
        {
            seg_tree[index] = (seg_tree[2 * index] ^ seg_tree[2 * index + 1]);
        }
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
        cout << seg_tree[1] << endl;
        // for (int i = 1; i <= 16; i++)
        // {
        //     cout << seg_tree[i] << " ";
        // }
        // cout << endl;
    }
};

// CODE WRITTEN BY mr_krishna(cc,cf,google)/krishna_6431(gfg,leet)
void HarHarMahadev()
{
    int n, m;
    cin >> n >> m;
    n = pow(2, n);
    vector<int> arr(n, 0);
    for (auto &x : arr)
    {
        cin >> x;
    }
    segment_tree st(4 * n + 1);
    st.build(arr, 0, n - 1, 1);
    for (int i = 0; i < m; i++)
    {
        int point, upd;
        cin >> point >> upd;
        st.pointUpdate(0, n - 1, point - 1, upd, 1);
        st.print();
    }
}

int main()
{
    RadheKrishna;
    HarHarMahadev();
    return 0;
}