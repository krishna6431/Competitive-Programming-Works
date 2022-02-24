//All Important Header Files
#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

//Code Logic

int main()
{
    fast;
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    vector<char> v1(s1.begin(), s1.end());
    vector<char> v2(s2.begin(), s2.end());
    while (find(v2.begin(), v2.end(), *(v1.begin())) != v2.end())
    {
        if (v1[0] == v2[0])
        {
            v1.erase(v1.begin());
            v2.erase(v2.begin());
        }
        else
        {
            v2.push_back(v2[0]);
            v2.erase(v2.begin());
        }
    }

    cout << v1.size() << endl;

    return 0;
}