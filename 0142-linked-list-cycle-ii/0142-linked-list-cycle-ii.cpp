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
        int timer=0;
        while(temp!=NULL){
            if(mpp.find(temp)!=mpp.end()){
                int value=mpp[temp];
                return temp;
            }
            mpp[temp]=timer;
            timer++;
            temp=temp->next;
        }
        return NULL;
    }
};