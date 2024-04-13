#include <bits/stdc++.h>
using namespace std;

using ll = long long;

template <typename T>
class Vector
{
private:
    T sz = 0;
    T *arr;
    T index = 0;

public:
    Vector()
    {
        arr = new T[2];
        sz = 2;
    }

    void add(T val)
    {
        if (index == sz)
        {
            T *newarr = new T[sz * 2];
            for (ll i = 0; i < sz; i++)
            {
                newarr[i] = arr[i];
            }
            arr = newarr;
            newarr = nullptr;
            delete[] newarr;
        }
        arr[index++] = val;
    }

    T print(ll ind)
    {
        if (ind <= index)
            return arr[ind];
    }

    void remove()
    {
        if (index > 0)
            index--;
    }

    void clear()
    {
        index = 0;
        delete[] arr;
        arr = new T[2];
        sz = 2;
    }
};

signed main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll q;
        cin >> q;
        Vector<ll> arr;
        while (q--)
        {
            string query;
            ll val;
            cin >> query;
            if (query == "add")
            {
                ll val;
                cin >> val;
                arr.add(val);
            }
            else if (query == "remove")
            {
                arr.remove();
            }
            else if (query == "print")
            {
                ll index;
                cin >> index;
                cout << arr.print(index) << endl;
            }
            else if (query == "clear")
            {
                arr.clear();
            }
        }
    }
}

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long int
// #define LD long double

// const int N = 100010;

// int inf = 1e9;
// int mod = 1e9 + 7;

// signed main()
// {
//     // freopen("IN", "r", stdin);
//     // freopen("OUT", "w", stdout);

//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int q;
//         cin >> q;
//         vector<int> v;
//         while (q--)
//         {
//             string s;
//             cin >> s;
//             if (s == "add")
//             {
//                 int x;
//                 cin >> x;
//                 v.push_back(x);
//             }
//             else if (s == "remove")
//             {
//                 if (!v.empty())
//                     v.pop_back();
//             }
//             else if (s == "print")
//             {
//                 int x;
//                 cin >> x;
//                 if (x < (int)v.size())
//                     cout << v[x] << "\n";
//                 else
//                     cout << "0\n";
//             }
//             else if (s == "clear")
//             {
//                 v.clear();
//             }
//         }
//     }
//     return 0;
// }
