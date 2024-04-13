// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

class monotone_deque
{
private:
    deque<int> dq;

public:
    void insert(int x)
    {
        while (!dq.empty() && dq.back() > x)
        {
            dq.pop_back();
        }
        dq.push_back(x);
    };
    void erase(int x)
    {
        if (dq.front() == x)
        {
            dq.pop_front();
        }
    };

    int getmin()
    {
        return dq.front();
    };
};

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }

    monotone_deque md;

    for (int i = 0; i < n; i++)
    {
        md.insert(a[i]);
        if ((i - k) >= 0)
        {
            md.erase(a[i - k]);
        }
        if (i >= k - 1)
        {
            cout << md.getmin() << " ";
        }
    }
    return 0;
}