#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int tc = 1;
    int testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
        ll a, b;
        cin >> a >> b;
        ll res = 0;
        for (ll i = a; i <= b; i++)
        {
            string s = to_string(i);
            string s1 = to_string(i);
            ll p = 1;
            for (int i = 0; i < s.size(); i++)
            {
                p *= (s[i] - '0');
            }
            ll p1 = 0;
            for (int i = 0; i < s1.size(); i++)
            {
                p1 += (s1[i] - '0');
            }
            if(p%p1==0){
                res++;
            }
        }
            cout << "Case #" << tc++ << ": "  << res<< endl;
        }
        return 0;
    }