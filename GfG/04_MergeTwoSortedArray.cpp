#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        vector<long long> a(x), b(y);
        for (int i = 0; i < x; i++)
        {
            cin >> a.at(i);
        }
        for (int i = 0; i < y; i++)
        {
            cin >> b.at(i);
        }
        int i, j;

        if (a.size() < b.size())
        {
            for (i = 0, j = 0; i < x; i++)
            {
                if (a.at(i) > b.at(j))
                {
                    swap(a.at(i), b.at(j));
                    ;
                }
                if (a.at(i) < b.at(j))
                {
                    //  a.at(i)=b.at(j);
                    j++;
                }
            }
        }
        else
        {

            for (i = 0, j = 0; i < y; i++)
            {
                if (b.at(i) > a.at(j))
                {
                    swap(b.at(i), a.at(j));
                    i++;
                }
                if (a.at(i) < b.at(j))
                {
                    //  a.at(i)=b.at(j);
                    i++;
                    j++;
                }
            }
        }
        for (int i = 0; i < x; i++)
        {
            cout << a.at(i) << " ";
        }

        for (int i = 0; i < y; i++)
        {
            cout << b.at(i) << " ";
        }
        cout << endl;
    }

    return 0;
}