// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

class custom_pq
{
private:
    priority_queue<int> pq;
    int k;
    int sumK;

public:
    custom_pq(int k)
    {
        this->k = k;
        sumK = 0;
    }

    void insert(int x)
    {
        pq.push(-x);
        sumK += x;
        if (pq.size() > k)
        {
            int sm = -pq.top();
            sumK -= sm;
            pq.pop();
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