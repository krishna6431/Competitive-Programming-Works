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
Given a Linked List. Ur Task is to Implement Merge Sort.
*/

/*
Sample Input:
1->5->3->2->10

Sample Output:
1->2->3->5->10
*/

/*
Time Complexity:O(nlogn)
Space Complexity:O(n)
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

node *iterReverse(node *head)
{
    node *current = head;
    node *prev = NULL;
    node *temp;
    while (current != NULL)
    {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    return prev;
}

node *kReverse(node *head, int k)
{
    //base case
    if (head == NULL)
    {
        return NULL;
    }

    // reverse first k node
    node *current = head;
    node *prev = NULL;
    node *temp;
    int count = 1;
    while (current != NULL && count <= k)
    {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
        count++;
    }

    if (temp != NULL)
    {
        //trickier case think using pen paper
        head->next = kReverse(temp, k);
    }
    return prev;
}

node *sortedMerge(node *head1, node *head2)
{
    // base case
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }

    node *finalhead;
    if (head1->data <= head2->data)
    {
        finalhead = head1;
        finalhead->next = sortedMerge(head1->next, head2);
    }
    else
    {
        finalhead = head2;
        finalhead->next = sortedMerge(head1, head2->next);
    }
    return finalhead;
}

node *midPoint(node *head)
{
    node *slow_ptr = head;
    node *fast_ptr = head->next;

    while (fast_ptr != NULL and fast_ptr->next != NULL)
    {
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next->next;
    }
    return slow_ptr;
}

node *mergeSort(node *head)
{
    //base case
    if (head == NULL or head->next == NULL)
    {
        return head;
    }
    //rec case
    node *mid = midPoint(head);

    //break at mid point
    node *a = head;
    node *b = mid->next;
    mid->next = NULL;

    //recursive cases
    a = mergeSort(a);
    b = mergeSort(b);

    //merge case
    return sortedMerge(a, b);
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
        printLinkedList(head);
        head = mergeSort(head);
        printLinkedList(head);
    }
    return 0;
}
