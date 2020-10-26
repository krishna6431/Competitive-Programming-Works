#include <bits/stdc++.h>
using namespace std;
//Only solution class for the problem
//All codes are written by krishna

// 150. Evaluate Reverse Polish Notation
// Medium

// 978

// 466

// Add to List

// Share
// Evaluate the value of an arithmetic expression in Reverse Polish Notation.

// Valid operators are +, -, *, /. Each operand may be an integer or another expression.

// Note:

// Division between two integers should truncate toward zero.
// The given RPN expression is always valid. That means the expression would always evaluate to a result and there won't be any divide by zero operation.
// Example 1:

// Input: ["2", "1", "+", "3", "*"]
// Output: 9
// Explanation: ((2 + 1) * 3) = 9
// Example 2:

// Input: ["4", "13", "5", "/", "+"]
// Output: 6
// Explanation: (4 + (13 / 5)) = 6
// Example 3:

// Input: ["10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"]
// Output: 22
// Explanation:
//   ((10 * (6 / ((9 + 3) * -11))) + 17) + 5
// = ((10 * (6 / (12 * -11))) + 17) + 5
// = ((10 * (6 / -132)) + 17) + 5
// = ((10 * 0) + 17) + 5
// = (0 + 17) + 5
// = 17 + 5
// = 22

// time complexity ---> o(n)
// space complexity ---> o(n)
class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> s;
        for (int i = 0; i < tokens.size(); i++)
        {
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
            {
                int v1 = s.top();
                s.pop();
                int v2 = s.top();
                s.pop();

                if (tokens[i] == "+")
                {
                    s.push(v1 + v2);
                }
                else if (tokens[i] == "-")
                {
                    s.push(v2 - v2);
                }
                else if (tokens[i] == "*")
                {

                    s.push(v2 * v1);
                }
                else if (tokens[i] == "/")
                {
                    s.push(v2 / v1);
                }
            }
            else{
                //we need to push int value but vector contains string value
                // we need to convert it to int value
                s.push(atoi(tokens[i].c_str()));
            }
        }
        return s.top();
    }
};