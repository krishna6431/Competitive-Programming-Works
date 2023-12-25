#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    string add(string &s1, string &s2)
    {
        string ans = "";
        int i = s1.size() - 1;
        int j = s2.size() - 1;
        int carry = 0;
        while (i >= 0 and j >= 0)
        {
            int add = (s1[i] - '0') + (s2[j] - '0') + carry;
            ans = to_string(add % 10) + ans;
            carry = add / 10;
            i--;
            j--;
        }
        while (i >= 0)
        {
            int add = (s1[i] - '0') + carry;
            ans = to_string(add % 10) + ans;
            carry = add / 10;
            i--;
        }
        while (j >= 0)
        {
            int add = (s2[j] - '0') + carry;
            ans = to_string(add % 10) + ans;
            carry = add / 10;
            j--;
        }
        while (carry)
        {
            ans = to_string(carry % 10) + ans;
            carry /= 10;
        }

        return ans;
    }

public:
    string multiply(string num1, string num2)
    {
        int carry = 0;
        string final = "";
        for (int j = num2.size() - 1; j >= 0; j--)
        {
            int multiplier = num2[j] - '0';
            string ans = "";
            for (int i = num1.size() - 1; i >= 0; i--)
            {
                int digit = num1[i] - '0';
                int prod = digit * multiplier;
                prod += carry;
                ans = to_string(prod % 10) + ans;
                carry = prod / 10;
            }
            while (carry)
            {
                ans = to_string(carry % 10) + ans;
                carry /= 10;
            }
            if (j == num2.size() - 1)
            {
                final = ans;
            }
            else
            {
                int zeroAppend = num2.size() - (j + 1);
                while (zeroAppend--)
                    ans += "0";
                final = add(final, ans);
            }
        }
        int idx = 0;
        for (int i = 0; i < final.size(); i++)
        {
            if (final[i] == '0')
            {
                idx = i;
            }
            else
            {
                break;
            }
        }
        return final.substr(idx, final.size() - idx + 1);
    }
};