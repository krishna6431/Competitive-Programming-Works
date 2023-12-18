#include <iostream>
#include <vector>
#include <map>
using namespace std;

// typedef vector<long long> vlong long;

class UnionFindSet
{
    vector<long long> rank, parent, setSize;

public:
    UnionFindSet(long long n)
    {
        rank.assign(n + 1, 0);
        parent.resize(n + 1);
        setSize.assign(n + 1, 1);
        for (long long i = 0; i <= n; i++)
        {
            parent[i] = i;
        }
    }

    long long findSet(long long node)
    {
        if (node == parent[node])
            return node;
        return parent[node] = findSet(parent[node]);
    }

    void mergeByRank(long long u, long long v)
    {
        long long rootU = findSet(u);
        long long rootV = findSet(v);
        if (rootU == rootV)
            return;

        if (rank[rootU] < rank[rootV])
            parent[rootU] = rootV;
        else if (rank[rootV] < rank[rootU])
            parent[rootV] = rootU;
        else
        {
            parent[rootV] = rootU;
            rank[rootU]++;
        }
    }
};

void solveProblem()
{
    long long arraySize;
    cin >> arraySize;
    map<long long, long long, greater<long long>> elementFrequencyMap;
    vector<long long> arrayElements(arraySize);
    for (long long &element : arrayElements)
    {
        cin >> element;
        elementFrequencyMap[element]++;
    }

    vector<long long> sortedValues, frequencies;
    for (const auto &entry : elementFrequencyMap)
    {
        sortedValues.push_back(entry.first);
        frequencies.push_back(entry.second);
    }

    UnionFindSet unionFind(sortedValues.size());

    vector<long long> maxRemovableElements(arraySize);
    for (long long i = sortedValues.size() - 1; i >= 0; i--)
    {
        maxRemovableElements[i] = sortedValues[i] * frequencies[i];
    }

    for (long long i = sortedValues.size() - 2; i >= 0; i--)
    {
        maxRemovableElements[i] += maxRemovableElements[i + 1];
    }

    for (long long i = 1; i < sortedValues.size(); i++)
    {
        if (maxRemovableElements[i] >= sortedValues[i - 1])
        {
            unionFind.mergeByRank(i, i - 1);
        }
    }

    map<long long, long long> resultMap;
    resultMap[sortedValues[0]] = arraySize;
    long long cumulativeFrequency = frequencies[0];
    for (long long i = 1; i < sortedValues.size(); i++)
    {
        long long rootCurrent = unionFind.findSet(i);
        long long rootPrevious = unionFind.findSet(i - 1);
        if (rootCurrent != rootPrevious)
        {
            arraySize -= cumulativeFrequency;
            cumulativeFrequency = 0;
        }
        resultMap[sortedValues[i]] = arraySize;
        cumulativeFrequency += frequencies[i];
    }
    vector<long long> finalResults;
    for (auto element : arrayElements)
    {
        finalResults.push_back(resultMap[element] - 1);
    }

    for (auto result : finalResults)
    {
        cout << result << " ";
    }
    cout << endl;
}

int main()
{
    long long testCases;
    cin >> testCases;
    while (testCases--)
    {
        solveProblem();
    }
    return 0;
}