#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long int

// Define an ordered set
#define ordered_set tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>

int main()
{
    // Declare an ordered set
    ordered_set os;

    // Insert elements into the ordered set
    os.insert(5);
    os.insert(1);
    os.insert(2);
    os.insert(8);
    os.insert(10);

    cout << "Ordered Set Elements: ";
    for (auto it : os)
    {
        cout << it << " ";
    }
    cout << endl;

    // Find the k-th smallest element (0-based indexing)
    cout << "2nd smallest element (0-based index): " << *(os.find_by_order(1)) << endl;

    // Find the number of elements strictly less than a given value
    cout << "Number of elements strictly less than 6: " << os.order_of_key(6) << endl;

    // Check if an element exists and erase it
    if (os.find(2) != os.end())
    {
        cout << "Element 2 exists in the set. Removing it..." << endl;
        os.erase(os.find(2));
    }

    // Print the updated set
    cout << "Updated Ordered Set Elements: ";
    for (auto it : os)
    {
        cout << it << " ";
    }
    cout << endl;

    // Find the k-th smallest element after deletion
    cout << "2nd smallest element after deletion: " << *(os.find_by_order(1)) << endl;

    return 0;
}
