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
    // Function to insert a new node at the tail of the list
    void insertAtTail(ListNode*& head, ListNode*& tail, int val) {
        ListNode* temp = new ListNode(val);
        if (head == NULL) {
            head = temp;
            tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }

    // Function to add two numbers represented by linked lists
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ansHead = NULL;
        ListNode* ansTail = NULL;

        int carry = 0;

        while (l1 != NULL || l2 != NULL || carry != 0) {
            int val1 = 0;
            if (l1 != NULL) {
                val1 = l1->val;
                l1 = l1->next;
            }

            int val2 = 0;
            if (l2 != NULL) {
                val2 = l2->val;
                l2 = l2->next;
            }

            int sum = carry + val1 + val2;
            int digit = sum % 10;

            insertAtTail(ansHead, ansTail, digit);
            carry = sum / 10;
        }

        return ansHead;
    }
};
