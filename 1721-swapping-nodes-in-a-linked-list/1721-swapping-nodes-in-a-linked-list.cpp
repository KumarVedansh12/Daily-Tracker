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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        int c=0;
        while(temp!=NULL){
            c++;
            temp=temp->next;
        }
        temp=head;
        ListNode* beg=NULL;
        ListNode* last=NULL;
        for(int i=1;i<=c;i++){
            if(i==k){
                beg=temp;
            }
            if(i==c-k+1){
                last=temp;
            }
            temp=temp->next;
        }
        swap(beg->val,last->val);
        return head;
    }
};
