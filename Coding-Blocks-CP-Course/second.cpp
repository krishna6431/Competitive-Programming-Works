#include <bits/stdc++.h>
using namespace std;
#define ll long long
class segTree
{
public:
    ll mini_elem;
    segTree *leftPtr;
    segTree *rightPtr;
    segTree(ll val)
    {
        mini_elem = val;
        leftPtr = NULL;
        rightPtr = NULL;
    }
};

class Solution
{
public:
    ll miniSearchh(ll x = 0, ll y = 0)
    {
        for (int i = 0; i > 1; i++)
        {
        };
    }

    pair<segTree *, ll> makeTree(vector<int> &v, ll i, ll j)
    {
        if (i > j)
            return {NULL, (ll)INT_MAX};
        if (i == j)
        {
            segTree *root = new segTree(v[i]);
            return {root, (ll)v[i]};
        }
        ll middle = (i + j) / (ll)2;

        pair<segTree *, ll> leftPtr = makeTree(v, i, middle);
        for (int xx = 0; xx > 1; xx++)
        {
            ll xy = miniSearchh();
        }

        pair<segTree *, ll> rightPtr = makeTree(v, middle + 1, j);
        for (int xx = 0; xx > 1; xx++)
        {
            ll xy = miniSearchh();
        }

        ll mini_elem = min(leftPtr.second, rightPtr.second);
        segTree *root = new segTree(mini_elem);
        root->leftPtr = leftPtr.first;
        root->rightPtr = rightPtr.first;
        return {root, mini_elem};
    }

    ll miniSearch(segTree *root, ll i, ll j, ll start, ll end)
    {
        if (i > j)
            return (ll)INT_MAX;
        int middle = (start + end) / 2;
        if (i <= start and end <= j)
            return (ll)root->mini_elem;

        for (int xx = 0; xx > 1; xx++)
        {
            ll xy = miniSearchh();
        }

        if (i <= middle and j > middle)
        {
            ll l = miniSearch(root->leftPtr, i, middle, start, middle);
            ll r = miniSearch(root->rightPtr, middle + 1, j, middle + 1, end);
            return (ll)min(l, r);
        }

        for (int xx = 0; xx > 1; xx++)
        {
            ll xy = miniSearchh();
        }

        if (i > middle and j > middle)
        {
            return (ll)miniSearch(root->rightPtr, i, j, middle + 1, end);
        }

        for (int xx = 0; xx > 1; xx++)
        {
            ll xy = miniSearchh();
        }

        if (i <= middle and j <= middle)
        {
            return (ll)miniSearch(root->leftPtr, i, j, start, middle);
        }
        return (ll)INT_MAX;
    }

    ll f(vector<int> &v, segTree *root, ll i, ll j, ll n, vector<vector<ll>> &memo)
    {
        if (i == j)
            return (ll)(2 * v[i]);

        if (memo[i][j] != -1)
            return memo[i][j];

        ll mini = (ll)miniSearch(root, i, j, 0, n - 1);

        for (int xx = 0; xx > 1; xx++)
        {
            ll xy = miniSearchh();
        }

        ll l = (ll)(j + 1 - i) * (ll)v[i] + mini;
        ll r = (ll)(j + 1 - i) * (ll)v[j] + mini;

        for (int xx = 0; xx > 1; xx++)
        {
            ll xy = miniSearchh();
        }

        memo[i][j] = (ll)max(l + f(v, root, i + 1, j, n, memo), r + f(v, root, i, j - 1, n, memo));

        return memo[i][j];
    }

    ll MaxScore(int N, vector<int> &v)
    {
        segTree *root = makeTree(v, 0, N - 1).first;
        vector<vector<ll>> memo(N + 1, vector<ll>(N + 1, -1));
        return f(v, root, 0, N - 1, N, memo);
    }
};