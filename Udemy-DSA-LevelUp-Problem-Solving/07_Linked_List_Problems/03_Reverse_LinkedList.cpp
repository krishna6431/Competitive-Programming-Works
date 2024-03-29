// All Important Header Files
#include <bits/stdc++.h>
//ALL IMPORTANT MACROS
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define endl "\n"
#define deb(x) cout << x << endl;
#define display(start, end)           \
    for (int i = start; i < end; i++) \
        cout << i << " ";             \
    cout << endl;
#define MOD 1000000007
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a, n) a, a + n
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
//USING NAME SPACE
using namespace std;
//SOME TYPEDEF DECLARATION
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;
// code is written by mr_krishna

//Problem Description
/*
Given a Linked List. Write a Function to Reverse the Linked List
*/

/*
Sample Input:
1->2->3->4->5

Sample Output:
5->4->->3->2->1
*/

/*
Time Complexity:O(n)
Space Complexity:O(1)
*/

class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
//-------------linked list-----------------------//

//inserting data at head
void insertAtHead(node *&head, int data)
{
    if (head == NULL)
    {
        head = new node(data);
        return;
    }

    // otherwise
    node *n = new node(data);
    n->next = head;
    head = n;
}

//printing lineked list
void printLinkedList(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "-->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

//insert in middle of linked listNode

void insertInMiddle(node *&head, int data, int pos)
{
    if (pos == 0)
    {
        insertAtHead(head, data);
    }

    //otherwise
    node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }

    node *n = new node(data);
    n->next = temp->next;
    temp->next = n;
}

node *recReverse(node *head)
{
    //base case
    if (head == NULL or head->next == NULL)
    {
        return head;
    }

    //otherwise
    node *sHead = recReverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return sHead;
}

int main()
{
    fast;

    // #ifndef ONLINE_JUDGE
    //     freopen("./input.txt", "r", stdin);
    //     freopen("./output.txt", "w", stdout);
    // #endif
    int t;
    cin >> t;
    int tc = 1;
    while (t--)
    {
        cout << "Case " << tc++ << ": " << endl;
        node *head = NULL;
        int n;
        cin >> n;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            insertAtHead(head, temp);
        }

        //inseting at given pos
        insertInMiddle(head, 100, 3);
        printLinkedList(head);
        node *newHead = recReverse(head);
        printLinkedList(newHead);
    }
    return 0;
}
