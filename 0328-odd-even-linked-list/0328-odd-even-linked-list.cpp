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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        vector<int>arr;
        ListNode* temp=head;
        ListNode* odd=head;
        ListNode* even=head->next;
        while(odd!=NULL && odd->next!=NULL){
            arr.push_back(odd->val);
            odd=odd->next->next;
        }
         if(odd) arr.push_back(odd->val);
        while(even!=NULL && even->next!=NULL){
            arr.push_back(even->val);
            even=even->next->next; 
        }
        for(int i=0;i<arr.size();i++){
            temp->val=arr[i];
            temp=temp->next;
        }
        return head;
    }
};