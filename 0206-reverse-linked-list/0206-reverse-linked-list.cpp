// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         stack<int> s;
//         ListNode* temp = head ,ans;
//         while(temp != NULL){
//             s.push(temp->val);
//             temp = temp->next;
//         }
        
//         while(!s.empty()){
//             int x = s.top();
//             s.pop();
//             ListNode* temp(x);
//             ans->next = temp;
//             ans=ans->next;
//         }
//         return ans;
//     }
// };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        stack<int> s;
        ListNode* temp = head;
        while(temp != nullptr){
            s.push(temp->val);
            temp = temp->next;
        }
        
        ListNode* dummy = new ListNode();
        ListNode* ans = dummy;
        
        while(!s.empty()){
            int x = s.top();
            s.pop();
            ListNode* newNode = new ListNode(x);
            ans->next = newNode;
            ans = ans->next;
        }
        
        return dummy->next;
    }
};
