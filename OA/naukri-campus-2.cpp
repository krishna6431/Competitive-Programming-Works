#include <bits/stdc++.h>
using namespace std;

void removeUniqueCharacters(std::string &str)
{
    while (!str.empty())
    {
        std::unordered_map<char, int> charCount;

        // Count the occurrences of each character in the string
        for (char ch : str)
        {
            charCount[ch]++;
        }

        // Remove characters that occur only once
        std::string newStr;
        for (char ch : str)
        {
            if (charCount[ch] > 1)
            {
                newStr += ch;
            }
        }

        // Print the string after removing unique characters
        std::cout << str << std::endl;

        // Update the string
        str = newStr;
    }
}

int main()
{
    std::string str = "xxxyyz";
    removeUniqueCharacters(str);
    return 0;
}
