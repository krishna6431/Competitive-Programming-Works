#include <bits/stdc++.h>
using namespace std;
//Only solution class for the problem
//All codes are written by krishna

// Write a program that outputs the string representation of numbers from 1 to n.

// But for multiples of three it should output “Fizz” instead of the number and for the multiples of five output “Buzz”. For numbers which are multiples of both three and five output “FizzBuzz”.

// Example:

// n = 15,

// Return:
// [
//     "1",
//     "2",
//     "Fizz",
//     "4",
//     "Buzz",
//     "Fizz",
//     "7",
//     "8",
//     "Fizz",
//     "Buzz",
//     "11",
//     "Fizz",
//     "13",
//     "14",
//     "FizzBuzz"
// ]

// time complexity ---> o(n)
// space complexity ---> o(1)
class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> ans;
        for (int i = 1; i <= n; i++)
        {
            if (i % 3 == 0 and i % 5 == 0)
            {
                ans.push_back("FizzBuzz");
            }
            else if (i % 3 == 0)
            {
                ans.push_back("Fizz");
            }
            else if (i % 5 == 0)
            {
                ans.push_back("Buzz");
            }

            else
            {
                ans.push_back(to_string(i));
            }
        }

        return ans;
    }
};