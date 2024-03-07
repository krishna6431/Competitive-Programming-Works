#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> dp;
bool helper(unordered_map<char, bool> memo, string exp, int &idx)
{
    bool flag = false;
    int currAns = 0;
    char op = 'x';
    char orOp = '|';
    char andOp = '&';
    char tildeOp = '~';
    char openOp = '(';
    char closeOp = ')';
    for (; idx < exp.size(); idx++)
    {
        if (exp[idx] >= 'a' && exp[idx] <= 'z')
        {
            bool temp;
            if (!flag)
            {
                temp = memo[exp[idx]];
            }
            else
            {
                temp = !memo[exp[idx]];
            }
            flag = false;
            if (op == andOp)
            {

                if (currAns)
                {
                    currAns = temp;
                }
            }
            else if (op == orOp)
            {
                if (temp)
                {
                    currAns = temp;
                }
            }
            else
            {
                currAns = temp;
            }
        }
        else if (exp[idx] == openOp)
        {
            idx++;
            currAns = helper(memo, exp, idx);
        }
        else if (exp[idx] == orOp)
        {
            op = orOp;
        }

        else if (exp[idx] == tildeOp)
        {
            flag = true;
        }
        else if (exp[idx] == andOp)
        {
            op = andOp;
        }

        else if (exp[idx] == closeOp)
        {
            return currAns;
        }
    }

    return currAns;
}

string ans(string str)
{
    unordered_map<char, bool> memo;
    for (int x = 0; x < str.size(); x++)
    {
        if (str[x] >= 'a' && str[x] <= 'z')
        {
            memo[str[x]] = 1;
        }
        if (str[x] == '&' && str[x + 1] == '~')
        {
            x += 2;
            memo[str[x]] = 0;
        }
    }

    int init = 0;
    int ans = helper(memo, str, init);
    return ans == true ? "yes" : "no";
}

int main()
{
    cout << ans("(a&b)|c") << endl;       // yes
    cout << ans("((a&c)&~a)") << endl;    // no
    cout << ans("(a&b&c)|~a") << endl;    // yes
    cout << ans("a&(b|c)&~b&~c") << endl; // no
    cout << ans("(a&(b)&~c)") << endl;    // yes
    cout << ans("(c|a|b)&~c") << endl;    // yes
    return 0;
}