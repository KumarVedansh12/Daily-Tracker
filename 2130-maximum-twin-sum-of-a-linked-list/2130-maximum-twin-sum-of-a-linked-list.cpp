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
    int pairSum(ListNode* head) {
        stack<int>st;
        int maxi=0;
       ListNode* temp=head;
       while(temp!=NULL){
        st.push(temp->val);
        temp=temp->next;
       }
       temp=head;
       int n=st.size();
       for(int i=0;i<n/2;i++){
            int sum =temp->val+st.top();
            maxi=max(maxi,sum);
            st.pop();
            temp=temp->next;
       }
       return maxi;
    }
};