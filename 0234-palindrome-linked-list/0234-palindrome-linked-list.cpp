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
    bool isPalindrome(ListNode* head) {
        string s ="";
        ListNode* temp = head;
        while(temp!= NULL){
            s +=('0' +temp->val);
            temp = temp ->next;
        }
        
        
        string k = s;
        reverse(k.begin(),k.end());
        if(k == s){
            return true;
        }
        
        return false;
    }
};