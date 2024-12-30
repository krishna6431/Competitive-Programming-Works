#include <bits/stdc++.h>
using namespace std;

#define ll long long int

// Custom Hash Function for Unordered Map
struct custom_hash
{
    static uint64_t splitmix64(uint64_t x)
    {
        // Source: http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const
    {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

int main()
{
    // Declare an unordered map with the custom hash
    unordered_map<ll, ll, custom_hash> mp;

    // Insert key-value pairs into the map
    mp[1] = 100;
    mp[2] = 200;
    mp[3] = 300;

    // Access and print elements
    cout << "Unordered Map Elements:" << endl;
    for (auto it : mp)
    {
        cout << "Key: " << it.first << ", Value: " << it.second << endl;
    }

    // Check if a key exists
    ll key = 2;
    if (mp.find(key) != mp.end())
    {
        cout << "Key " << key << " exists with value: " << mp[key] << endl;
    }
    else
    {
        cout << "Key " << key << " does not exist." << endl;
    }

    // Erase a key from the map
    mp.erase(3);
    cout << "After erasing key 3:" << endl;
    for (auto it : mp)
    {
        cout << "Key: " << it.first << ", Value: " << it.second << endl;
    }

    return 0;
}
