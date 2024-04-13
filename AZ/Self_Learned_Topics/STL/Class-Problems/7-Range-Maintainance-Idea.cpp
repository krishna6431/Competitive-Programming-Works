// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

class range_maintain
{
private:
    set<pair<int, int>> st;

public:
    void fill_range(int l, int r)
    {
        auto it = st.upper_bound({l, 1e9});
        if (it != st.begin())
        {
            it--;
            if (it->second >= l)
            {
                l = it->first;
                r = max(r, it->second);
                st.erase(it);
            }
        }

        it = st.upper_bound({r, 1e9});
        if (it != st.begin())
        {
            it--;
            if (it->second >= r)
            {
                r = it->second;
                l = min(l, it->first);
                st.erase(it);
            }
        }

        while (1)
        {
            it = st.lower_bound({l, 0});
            if (it == st.end() or (it->first > r))
            {
                break;
            }
            else
            {
                st.erase(it);
            }
        }
        st.insert({l, r});
    }

    void clear_range(int l, int r)
    {
        auto it = st.upper_bound({l, 1e9});
        if (it != st.begin())
        {
            it--;
            if (it->second >= r)
            {
                int lo1 = it->first;
                int hi1 = l;
                int lo2 = r;
                int hi2 = it->second;
                st.erase(it);
                st.insert({lo1, hi1});
                st.insert({lo2, hi2});
                return;
            }

            if (it->second >= l)
            {
                int lo = it->first;
                int hi = l;
                st.erase(it);
                st.insert({lo, hi});
            }
        }

        it = st.upper_bound({r, 1e9});
        if (it != st.begin())
        {
            it--;
            if (it->second >= r)
            {
                int lo = r;
                int hi = it->second;
                st.erase(it);
                st.insert({lo, hi});
            }
        }

        while (1)
        {
            it = st.lower_bound({l, 0});
            if (it == st.end() or (it->first > r))
            {
                break;
            }
            else
            {
                st.erase(it);
            }
        }
    }

    bool check_point(int x)
    {
        auto it = st.upper_bound({x, 1e9});
        if (it == st.begin())
        {
            return false;
        }
        else
        {
            it--;
            if (it->second >= x)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }

    bool check_range_any(int x, int y)
    {
        auto it = st.upper_bound({x, 1e9});
        if (it != st.end())
        {
            if (it->first <= y)
            {
                return true;
            }
        }
        return check_point(x);
    }

    bool check_range_all(int x, int y)
    {
        auto it = st.upper_bound({x, 1e9});
        if (it == st.begin())
        {
            return false;
        }
        else
        {
            it--;
            if (it->second >= y)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }

    void print_status()
    {
        cout << "Current Status: ";
        for (auto v : st)
        {
            cout << "(" << v.first << "," << v.second << ") ";
        }
        cout << endl;
    }
};

int main()
{
    int q;
    cin >> q;
    range_maintain rds;
    while (q--)
    {
        int ch;
        cin >> ch;
        if (ch == 1)
        {
            int l, r;
            cin >> l >> r;
            rds.fill_range(l, r);
        }
        else if (ch == 2)
        {
            int l, r;
            cin >> l >> r;
            rds.clear_range(l, r);
        }
        else if (ch == 3)
        {
            int x;
            cin >> x;
            if (rds.check_point(x))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            int x, y;
            cin >> x >> y;
            if (rds.check_range_any(x, y))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        rds.print_status();
    }
    return 0;
}