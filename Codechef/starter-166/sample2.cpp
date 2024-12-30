#include <bits/stdc++.h>
using namespace std;

// code written by mr_krishna

vector<string> missingWords(string &s, string &t)
{
    vector<string> sen, pat, ans;
    stringstream ss1(s), ss2(t);
    string word;
    while (ss1 >> word)
    {
        sen.push_back(word);
    }
    while (ss2 >> word)
    {
        pat.push_back(word);
    }

    int left = 0;
    for (int i = 0; i < sen.size(); ++i)
    {
        if (left < pat.size() && sen[i] == pat[left])
        {
            ++left;
        }
        else
        {
            ans.push_back(sen[i]);
        }
    }
    return ans;
}

int main()
{
    string s = "I like cheese";
    string t = "like";

    vector<string> missing = missingWords(s, t);
    for (const auto &word : missing)
    {
        cout << word << " ";
    }
    cout << endl;

    string s1 = "I am using HackerRank to improve programming";
    string t1 = "am HackerRank to improve";
    vector<string> missing1 = missingWords(s1, t1);
    for (const auto &word : missing1)
    {
        cout << word << " ";
    }
    cout << endl;
    return 0;
}