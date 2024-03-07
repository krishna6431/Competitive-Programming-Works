// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    string str;
    cin >> str;
    while (q--)
    {
        string query;
        cin >> query;
        int l, r;
        if (query == "substr")
        {

            cin >> l >> r;
            if (l > r)
            {
                swap(l, r);
            }
            l--;
            r--;
            cout << str.substr(l, r - l + 1) << endl;
        }
        else if (query == "sort")
        {
            cin >> l >> r;
            if (l > r)
            {
                swap(l, r);
            }
            l--;
            r--;
            sort(str.begin() + l, str.begin() + r + 1);
        }
        else if (query == "pop_back")
        {
            str.pop_back();
        }
        else if (query == "back")
        {
            cout << str.back() << endl;
        }
        else if (query == "reverse")
        {
            cin >> l >> r;
            if (l > r)
            {
                swap(l, r);
            }
            l--;
            r--;
            reverse(str.begin() + l, str.begin() + r + 1);
        }
        else if (query == "front")
        {
            cout << str.front() << endl;
        }
        else if (query == "push_back")
        {
            char ch;
            cin >> ch;
            if (str.size() == 0)
            {
                str = "";
                str += ch;
            }
            else
            {
                str.push_back(ch);
            }
        }
        else if (query == "print")
        {
            int idx;
            cin >> idx;
            cout << str[idx - 1] << endl;
        }
    }
    return 0;
}