#include <bits/stdc++.h>
using namespace std;

using ll = long long;
class TreeNode
{
public:
    string v;
    vector<TreeNode *> connections;
    TreeNode *root;
    ll locked_op, locked_op2, idNum;
    bool checkLocked;

    TreeNode(string x, TreeNode *p)
    {
        v = x;
        root = p;
        locked_op = 0;
        locked_op2 = 0;
        idNum = 0;
        checkLocked = false;
    }

    void createConn(vector<string> l, TreeNode *p)
    {
        for (auto &i : l)
        {
            connections.push_back(new TreeNode(i, p));
        }
    }
};

TreeNode *createTree(TreeNode *root, ll &m, vector<string> &s)
{
    queue<TreeNode *> q;
    q.push(root);

    ll st = 1;
    while (!q.empty())
    {
        TreeNode *r = q.front();
        q.pop();

        if (st >= s.size())
            continue;

        vector<string> temp;
        for (ll i = st; i < st + m; i++)
            temp.push_back(s[i]);
        r->createConn(temp, r);
        st += m;

        for (auto k : r->connections)
            q.push(k);
    }

    return root;
}

class Tree
{
private:
    TreeNode *root;
    unordered_map<string, TreeNode *> verticesToN;

public:
    Tree(TreeNode *r) { root = r; }

    TreeNode *findRoot() { return root; }

    void insertVertices(TreeNode *r)
    {
        if (!r)
            return;
        verticesToN[r->v] = r;
        for (auto k : r->connections)
        {
            insertVertices(k);
        }
    }

    void messageDec(TreeNode *r, ll val)
    {
        for (auto k : r->connections)
        {
            k->locked_op += val;
            messageDec(k, val);
        }
    }

    bool verifyDec(TreeNode *r, ll &id, vector<TreeNode *> &v)
    {
        if (r->checkLocked)
        {
            if (r->idNum != id)
                return false;
            v.push_back(r);
        }
        if (r->locked_op2 == 0)
            return true;

        bool ans = true;
        for (auto k : r->connections)
        {
            ans &= verifyDec(k, id, v);
            if (ans == false)
            {
                return false;
            }
        }
        return ans;
    }

    bool lock(string v, ll id)
    {
        TreeNode *t = verticesToN[v];
        if (t->checkLocked)
            return false;

        if (t->locked_op != 0)
            return false;
        if (t->locked_op2 != 0)
            return false;

        TreeNode *cur = t->root;
        while (cur)
        {
            cur->locked_op2++;
            cur = cur->root;
        }
        messageDec(t, 1);
        t->checkLocked = true;
        t->idNum = id;
        return true;
    }

    bool unlock(string v, ll id)
    {
        TreeNode *t = verticesToN[v];
        if (!t->checkLocked)
            return false;
        if (t->checkLocked && t->idNum != id)
            return false;

        TreeNode *cur = t->root;
        while (cur)
        {
            cur->locked_op2--;
            cur = cur->root;
        }
        messageDec(t, -1);
        t->checkLocked = false;
        return true;
    }

    bool update(string v, ll id)
    {
        TreeNode *t = verticesToN[v];
        if (t->checkLocked)
            return false;

        if (t->locked_op != 0)
            return false;
        if (t->locked_op2 == 0)
            return false;

        vector<TreeNode *> vec;
        if (verifyDec(t, id, vec))
        {
            for (auto k : vec)
            {
                unlock(k->v, id);
            }
        }
        else
            return false;
        lock(v, id);
        return true;
    }
};

signed main()
{

    ll n, m, q;
    cin >> n;
    cin >> m;
    cin >> q;
    // cout << n << " " << m << " " << q << endl;
    vector<string> s(n);
    for (ll i = 0; i < n; i++)
        cin >> s[i];

    // for (auto &x : s)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
    TreeNode *r = new TreeNode(s[0], nullptr);
    r = createTree(r, m, s);
    // prllTree(r);

    Tree t(r);
    t.insertVertices(t.findRoot());

    ll op, idNum;
    string str;
    // cout << q << endl;
    for (ll i = 0; i < q; i++)
    {
        cin >> op >> str >> idNum;
        // cout << op << str << idNum << endl;
        // cout << op << endl;
        if (op == 1)
        {
            if (t.lock(str, idNum))
            {
                cout << "true" << endl;
            }
            else
            {
                cout << "false" << endl;
            }
        }
        else if (op == 2)
        {
            if (t.unlock(str, idNum))
            {
                cout << "true" << endl;
            }
            else
            {
                cout << "false" << endl;
            }
        }
        else
        {
            if (t.update(str, idNum))
            {
                cout << "true" << endl;
            }
            else
            {
                cout << "false" << endl;
            }
        }
    }
    return 0;
}