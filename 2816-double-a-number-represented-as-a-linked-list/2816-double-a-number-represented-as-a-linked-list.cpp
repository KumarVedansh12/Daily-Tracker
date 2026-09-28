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
    ListNode* doubleIt(ListNode* head) {
        if(!head) return head;
        stack<int>st;
        ListNode* temp=head;
        while(temp!=NULL){
            st.push(temp->val);
            temp=temp->next;
        }
        ListNode* ans=NULL;
        int carry=0;
        while(!(st.empty())){
            int mul=st.top()*2+carry;
            st.pop();
            carry=mul/10;
            ListNode* newNode=new ListNode(mul%10);
            newNode->next=ans;
            ans=newNode;
        }
        if(carry){
            ListNode* newNode=new ListNode(carry);
            newNode->next=ans;
            ans=newNode;
        }
        return ans;
    }
};