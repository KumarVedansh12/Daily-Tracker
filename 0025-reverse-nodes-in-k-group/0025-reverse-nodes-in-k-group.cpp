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
    ListNode* reverse(ListNode* head){
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
    ListNode* findlen(ListNode* head,int k){
        ListNode* temp=head;
        k-=1;
        while(temp!=NULL && k>0){
            k--;
            temp=temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prevnode=NULL;
       while(temp!=NULL){
        ListNode* kthnode=findlen(temp,k);
        if(kthnode==NULL){
            prevnode->next=temp;
            break;
        }
        ListNode* newNode=kthnode->next;
        kthnode->next=NULL;
        reverse(temp);
        if(temp==head){
            head=kthnode;
        }
        else{
            prevnode->next=kthnode;
        }
        prevnode=temp;
        temp=newNode;
       }
        return head;
    }
};