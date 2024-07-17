#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

// Function to count the number of valid parenthesis sequences
int countValidSequences(const string &nums, int pos, int balance, unordered_map<string, int> &memo)
{
    if (balance < 0)
    {
        return 0; // Invalid sequence if balance is negative
    }
    if (pos == nums.size())
    {
        return balance == 0 ? 1 : 0; // Valid sequence if balance is 0
    }

    string key = to_string(pos) + "," + to_string(balance);
    if (memo.find(key) != memo.end())
    {
        return memo[key];
    }

    // Get the current number (character) from the string
    char current = nums[pos];

    // Calculate number of valid sequences by treating the current number as '(' and ')'
    int count = 0;

    // Treat current number as '('
    count += countValidSequences(nums, pos + 1, balance + 1, memo);

    // Treat current number as ')'
    count += countValidSequences(nums, pos + 1, balance - 1, memo);

    memo[key] = count;
    return count;
}

int main()
{
    string nums = "12356718"; // Example input

    unordered_map<string, int> memo;
    int result = countValidSequences(nums, 0, 0, memo);

    cout << "Total number of valid parenthesis sequences: " << result << endl;

    return 0;
}
