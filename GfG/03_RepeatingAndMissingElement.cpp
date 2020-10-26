#include <iostream>
#include <vector>
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
        int n;
        cin >> n;
        vector<int> hash(n + 1, 0);
        vector<int> res;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            res.push_back(temp);
        }
        for (int i = 0; i < n; i++)
        {
            hash[res[i]]++;
        }
        int repeat;
        int miss;

        for (int i = 1; i < hash.size(); i++)
        {
            if (hash[i] == 0)
            {
                miss = i;
            }
            if (hash[i] == 2)
            {
                repeat = i;
            }
        }
        cout << repeat << " " << miss << endl;
        ;
    }
    return 0;
}