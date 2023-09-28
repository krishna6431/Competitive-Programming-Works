#include <iostream>
#include <vector>

using namespace std;

bool canCutRod(vector<int> &lengths, int minLength)
{
    int n = lengths.size();

    // Create a table to store the results of subproblems
    vector<bool> dp(n + 1, false);

    // If the required minLength is zero, it's always possible
    dp[0] = true;

    // Populate the dp table
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            // Try to cut the rod at position j-1
            if (lengths[j - 1] >= minLength && dp[j - 1])
            {
                dp[i] = true;
                break;
            }
        }
    }

    return dp[n];
}

int main()
{
    vector<int> lengths = {4, 2, 3};
    int minLength = 7;

    bool result = canCutRod(lengths, minLength);

    if (result)
    {
        cout << "It is possible to plan the cuts as required." << endl;
    }
    else
    {
        cout << "It is not possible to plan the cuts as required." << endl;
    }

    return 0;
}
