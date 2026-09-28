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
    ListNode* reverseLL(ListNode* head){
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp!=NULL){
            ListNode* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev;
    }
    ListNode* doubleIt(ListNode* head) {
        if(!head) return head;
        int carry=0;
        ListNode* re=reverseLL(head);
        ListNode* temp=re;
        while(temp!=NULL){
            int mul=temp->val*2+carry;
            temp->val=mul%10;
            carry=mul/10;;
            temp=temp->next;
        }
        ListNode* fin=reverseLL(re);
        if(carry){
                ListNode* newNode=new ListNode(carry);
                newNode->next=fin;
                fin=newNode;
            }
        return fin;
    }
};