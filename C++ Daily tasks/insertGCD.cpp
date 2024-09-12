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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (head == nullptr || head->next == nullptr) 
			return head;
		ListNode *current = head;
        int gcdValue;
        ListNode* newNode;
		while (current->next != nullptr) {
            gcdValue = gcd(current->val, current->next->val);
            
            newNode = new ListNode(gcdValue);
            
            newNode->next = current->next;
            current->next = newNode;
            
            current = newNode->next;
        }

        return head;
    }
private:
    int gcd(int a, int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
};