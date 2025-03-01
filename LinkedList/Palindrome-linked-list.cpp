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
private:
    ListNode* reverse(ListNode*& head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;

        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    ListNode* findMid(ListNode*& head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow ;
    }

public:
    bool isPalindrome(ListNode* head) {

        if (head == NULL || head -> next == NULL) {
            return true;
        }

        ListNode* mid = findMid(head);
        
        ListNode* rev = reverse(mid);

        ListNode* curr = head;
        
        while (rev != nullptr) {
            if (curr->val != rev->val) {
                return false;
            }
            rev = rev->next;
            curr = curr ->next;
        }

        return true;
    }
};
