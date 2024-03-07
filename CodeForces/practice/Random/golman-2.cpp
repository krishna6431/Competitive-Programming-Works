#include <iostream>
#include <fstream>
#include <queue>
#include <string>

using namespace std;

priority_queue<int, vector<int>, greater<int>> heap;

int getMNCount(const string &pattern)
{
    int mCount = 0, nCount = 0;
    for (char ch : pattern)
    {
        if (ch == 'M')
        {
            mCount++;
        }
        if (ch == 'N')
        {
            nCount++;
        }
    }
    return nCount + mCount;
}

int getElement(int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int tmp = 0, c = 0;

    while (k-- > 0)
    {
        tmp = heap.top();
        heap.pop();
        c++;
        if (k > 0)
        {
            pq.push(tmp);
        }
        else
        {
            break;
        }
    }
    while (!pq.empty())
    {
        heap.push(pq.top());
        pq.pop();
    }
    return tmp;
}

bool validatePattern(const string &pattern)
{
    return (pattern.empty() || pattern == "" || pattern == " " || pattern == "\0" || getMNCount(pattern) != pattern.length());
}

int getConsecutiveCount(const string &input, int index, char ch)
{
    int c = 0;
    for (int i = index; i < input.length(); i++)
    {
        if (input[i] == ch)
        {
            c++;
        }
        else
        {
            break;
        }
    }
    return c;
}

string processString(const string &input)
{
    string res = "";
    int len = input.length();
    for (int k = 1; k <= len + 1; k++)
        heap.push(k);
    int mCount = 0;
    int nCount = 0;
    for (char ch : input)
    {
        if (ch == 'M')
        {
            mCount = getConsecutiveCount(input, nCount, 'M');
            res += to_string(getElement(mCount + 1));
            mCount = 0;
        }
        else
        {
            res += to_string(getElement(1));
            nCount = 0;
        }
    }
    while (!heap.empty())
    {
        res += to_string(heap.top());
        heap.pop();
    }
    return res;
}

int findPossibleSmallestNumberMatchingPattern(const string &pattern)
{
    if (validatePattern(pattern))
        return -1;
    return stoi(processString(pattern));
}

int main()
{

    int res;
    string pattern;
    cin >> pattern;
    res = findPossibleSmallestNumberMatchingPattern(pattern);
    cout << res << endl;
    return 0;
}