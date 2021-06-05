/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int k) {
        if(head==NULL or head->next==NULL) {
             if(k==1){
                return NULL;
             }
        }
        ListNode *one = head;
        ListNode *two = head;
        for (int i = 0; i < k; i++)
            two = two->next;
        if(two==NULL) return one->next;
        while (two->next)
        {
            one = one->next;
            two = two->next;
        }
        ListNode *temp = one->next;
        one->next = one->next->next;
        delete temp;
    return head;
    }
};