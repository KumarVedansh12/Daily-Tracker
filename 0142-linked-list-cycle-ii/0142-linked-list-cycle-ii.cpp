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
    ListNode *detectCycle(ListNode *head) {
        map<ListNode* ,int>mpp;
        ListNode* temp=head;
        int v=0;
        while(temp!=NULL){
            if(mpp.find(temp)!=mpp.end()){
                v=mpp[temp];
                return temp;
            }
            mpp[temp]=v;
            v++;
            temp=temp->next;
        }
        return NULL;
       
    }
};