#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    TrieNode *next[26] = {}; // Array to store pointers to child nodes (for 26 lowercase letters)
    bool word = false;       // Flag to indicate if this node marks the end of a word
};

class Trie
{
    TrieNode root;

    // Helper function to find a node corresponding to a given word/prefix
    TrieNode *find(string word)
    {
        auto node = &root;
        for (auto ch : word)
        {
            if (!node->next[ch - 'a'])
                return NULL; // If the path doesn't exist, return NULL
            node = node->next[ch - 'a'];
        }
        return node;
    }

public:
    Trie() {}

    // Insert a word into the Trie
    void insert(string word)
    {
        auto node = &root;
        for (auto ch : word)
        {
            if (!node->next[ch - 'a'])
                node->next[ch - 'a'] = new TrieNode(); // Create a new node if it doesn't exist
            node = node->next[ch - 'a'];
        }
        node->word = true; // Mark the end of the word
    }

    // Check if a word exists in the Trie
    bool search(string word)
    {
        auto node = find(word);
        return node && node->word; // Return true if the word exists and is marked as a complete word
    }

    // Check if there is any word in the Trie that starts with the given prefix
    bool startsWith(string prefix)
    {
        return find(prefix) != NULL; // Return true if the prefix exists in the Trie
    }
};

int main()
{
    // Example usage of the Trie

    Trie trie;

    // Insert words into the Trie
    trie.insert("apple");
    trie.insert("app");
    trie.insert("banana");

    // Search for words
    cout << "Does 'apple' exist? " << (trie.search("apple") ? "Yes" : "No") << endl; // Output: Yes
    cout << "Does 'app' exist? " << (trie.search("app") ? "Yes" : "No") << endl;     // Output: Yes
    cout << "Does 'appl' exist? " << (trie.search("appl") ? "Yes" : "No") << endl;   // Output: No

    // Check prefixes
    cout << "Does any word start with 'app'? " << (trie.startsWith("app") ? "Yes" : "No") << endl; // Output: Yes
    cout << "Does any word start with 'ban'? " << (trie.startsWith("ban") ? "Yes" : "No") << endl; // Output: Yes
    cout << "Does any word start with 'bat'? " << (trie.startsWith("bat") ? "Yes" : "No") << endl; // Output: No

    return 0;
}
