/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*, int> m;
       while (head != nullptr) {
        if (m.find(head) != m.end()) {
            
            return true;
        }
        
        m[head]++;  // Store the node in the map
        head = head->next;  // Move to the next node
    }
               return false;
    }
};