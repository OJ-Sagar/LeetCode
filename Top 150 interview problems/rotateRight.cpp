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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr || k == 0) {
            return head;
        }
        int s = 1;
        ListNode* cur = head;
        while (cur->next != nullptr) {
            cur = cur->next;
            s++;
        }
        
        cur->next = head;

        k = k % s; // In case k is greater than the size of the list
        int stepsToNewHead = s - k;
        
        // Step 4: Find the new tail and new head
        cur = head;
        for (int i = 0; i < stepsToNewHead - 1; i++) {
            cur = cur->next;
        }

        ListNode* newHead = cur->next;
        cur->next = nullptr;

        return newHead;
    }
};