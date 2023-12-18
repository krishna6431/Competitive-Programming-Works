#include <bits/stdc++.h>
using namespace std;
// Get the bitmask representation of the number's digits.
int getDigitMask(int number)
{
    int mask = 0;
    while (number > 0)
    {
        int digit = number % 10;
        // If a digit appears more than once, it's not a valid number for pairing.
        if (mask & (1 << digit))
            return -1;
        mask |= (1 << digit);
        number /= 10;
    }
    return mask;
}

int solution(const std::vector<int> &A)
{
    int maxSum = -1;
    std::vector<std::pair<int, int>> masks; // Pair of digit mask and the number itself.

    // Prepare the masks.
    for (int num : A)
    {
        int mask = getDigitMask(num);
        if (mask != -1)
        { // Valid mask, no repeated digits.
            masks.emplace_back(mask, num);
        }
    }

    // Sort by the second element of the pair (the numbers) in descending order.
    std::sort(masks.begin(), masks.end(), [](const std::pair<int, int> &a, const std::pair<int, int> &b)
              { return a.second > b.second; });

    // Attempt to find the pair with the highest sum where the digit masks do not overlap.
    for (size_t i = 0; i < masks.size(); ++i)
    {
        for (size_t j = i + 1; j < masks.size(); ++j)
        {
            if ((masks[i].first & masks[j].first) == 0)
            { // Masks do not overlap.
                maxSum = std::max(maxSum, masks[i].second + masks[j].second);
                break; // Found the best pair for masks[i], move on to the next.
            }
        }
    }

    return maxSum;
}

int main()
{
    std::vector<int> A = {15, 0, 105}; // Example input
    std::cout << "Maximum sum of two numbers with non-overlapping digits: " << solution(A) << std::endl;
    return 0;
}