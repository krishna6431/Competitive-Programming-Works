#include <iostream>
#include <string>
#include <queue>

int getMNCount(const std::string &pattern)
{
    int mCount = 0, nCount = 0;
    for (char ch : pattern)
    {
        if (ch == 'M')
        {
            mCount++;
        }
        else if (ch == 'N')
        {
            nCount++;
        }
    }
    return nCount + mCount;
}

std::string processString(const std::string &input)
{
    std::priority_queue<int, std::vector<int>, std::greater<int>> heap;
    std::string result = "";
    int len = input.length();
    for (int k = 1; k <= len + 1; k++)
        heap.push(k);
    int mCount = 0;
    for (int i = 0; i < len; i++)
    {
        if (input[i] == 'M')
        {
            mCount = 1;
            while (i + mCount < len && input[i + mCount] == 'M')
            {
                mCount++;
            }
            for (int j = 0; j < mCount + 1; j++)
            {
                result += std::to_string(heap.top());
                heap.pop();
            }
        }
        else
        {
            result += std::to_string(heap.top());
            heap.pop();
        }
    }
    while (!heap.empty())
    {
        result += std::to_string(heap.top());
        heap.pop();
    }
    return result;
}

std::string getElement(int count, std::priority_queue<int, std::vector<int>, std::greater<int>> &heap)
{
    std::priority_queue<int, std::vector<int>, std::greater<int>> priorityQueue;
    std::string elementStr = "";
    while (count-- > 0)
    {
        int element = heap.top();
        heap.pop();
        elementStr += std::to_string(element);
        if (count > 0)
        {
            priorityQueue.push(element);
        }
    }
    heap = priorityQueue;
    return elementStr;
}

int findPossibleSmallestNumberMatchingPattern(const std::string &pattern)
{
    if (pattern.empty() || getMNCount(pattern) != pattern.length())
        return -1;
    return std::stoi(processString(pattern));
}

int main()
{
    std::string pattern = "MNMM";
    int result = findPossibleSmallestNumberMatchingPattern(pattern);
    if (result != -1)
        std::cout << "Smallest Number: " << result << std::endl;
    else
        std::cout << "Invalid pattern" << std::endl;
    return 0;
}
