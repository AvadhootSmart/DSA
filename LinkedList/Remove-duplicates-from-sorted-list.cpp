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
 #include <map>
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        map<int, bool> visited;

        ListNode* curr = head;
        ListNode* prev = nullptr;

        while(curr != nullptr){
            if(visited[curr->val]){
                prev -> next = curr -> next;
                delete curr;
                curr = prev -> next;
            }
            else{
                visited[curr->val] = true;
                prev = curr;
                curr = curr -> next;
            }
        }

        return head;

    }
};
