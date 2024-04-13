// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

class custom_multiset
{
private:
    multiset<int> mt1, mt2;
    int k;
    int sumK;

public:
    custom_multiset(int k)
    {
        this->k = k;
        sumK = 0;
        mt1.clear();
        mt2.clear();
    }

    void insert(int x)
    {
        mt1.insert(x);
        sumK += x;
        if (mt1.size() > k)
        {
            auto it = mt1.begin();
            mt2.insert(*it);
            sumK -= *it;
            mt1.erase(it);
        }
    }

    void erase(int x)
    {
        if (mt2.find(x) != mt2.end())
        {
            mt2.erase(mt2.find(x));
        }
        else
        {
            mt1.erase(mt1.find(x));
            sumK -= x;
        }

        if (mt1.size() < k and !mt2.empty())
        {
            auto it = mt2.end();
            it--;
            mt1.insert(*it);
            sumK += *it;
            mt2.erase(it);
        }
    }

    int getsum()
    {
        return sumK;
    }
};

int main()
{

    return 0;
}