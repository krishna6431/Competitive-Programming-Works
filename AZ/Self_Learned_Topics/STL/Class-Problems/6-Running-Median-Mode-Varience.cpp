// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

class running_ds
{
private:
    // for mean
    int sum = 0;
    int cnt = 0;
    // for variance
    int sumsq = 0;
    // mode
    map<int, int> freq;
    multiset<pair<int, int>> freqOrder;
    // median
    multiset<int> low, high;

public:
    void balance()
    {
        while (low.size() < high.size())
        {
            low.insert(*high.begin());
            high.erase(high.begin());
        }
        while (low.size() > high.size() + 1)
        {
            high.insert(*low.rbegin());
            low.erase(prev(low.end()));
        }
    }

    void insert(int x)
    {
        cnt++;
        sum += x;
        sumsq += x * x;

        // mode
        if (freqOrder.find(make_pair(freq[x], x)) != freqOrder.end())
        {
            freqOrder.erase(freqOrder.find(make_pair(freq[x], x)));
        }
        freq[x]++;
        freqOrder.insert(make_pair(freq[x], x));

        // median
        if (low.empty())
        {
            low.insert(x);
        }
        else if (x <= *low.rbegin())
        {
            low.insert(x);
        }
        else
        {
            high.insert(x);
        }
        balance();
    }
    void remove(int x)
    {
        cnt--;
        sum -= x;
        sumsq -= x * x;

        // mode
        if (freqOrder.find(make_pair(freq[x], x)) != freqOrder.end())
        {
            freqOrder.erase(freqOrder.find(make_pair(freq[x], x)));
        }
        freq[x]--;
        if (freq[x])
        {
            freqOrder.insert(make_pair(freq[x], x));
        }

        // median
        if (high.find(x) != high.end())
        {
            high.erase(high.find(x));
        }
        else if (low.find(x) != low.end())
        {
            low.erase(low.find(x));
        }
        balance();
    }

    double mean()
    {
        return (sum * 1.0) / cnt;
    }

    double variance()
    {
        return sumsq / cnt - mean() * mean();
    }

    double mode()
    {
        return freqOrder.rbegin()->second;
    }

    double median()
    {
        if ((low.size() + high.size()) % 2)
        {
            return *low.rbegin();
        }
        else
        {
            return (*low.rbegin() + (*high.begin())) / 2.0;
        }
    }
};

int main()
{
    running_ds ds;
    ds.insert(1);
    ds.insert(2);
    ds.insert(4);
    cout << ds.mean() << endl;
    cout << ds.variance() << endl;
    cout << ds.mode() << endl;
    cout << ds.median() << endl;

    return 0;
}