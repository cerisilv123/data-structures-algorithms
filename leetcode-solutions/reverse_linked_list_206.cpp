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
    ListNode* reverseList(ListNode* head) {
        // 3 pointers
        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* next = nullptr;

        while (curr != nullptr) {
            next = curr->next; // Save next for later
            curr->next = prev; // Reverse current nodes pointer

            // Move below pointers one step ahead each (example: prev could move to index 4, curr would move to index 5) 
            prev = curr; 
            curr = next; 
        }

        head = prev; // Head becomes first element in linked list
        return head;
    }
};