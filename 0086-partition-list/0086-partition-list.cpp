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
    ListNode* partition(ListNode* head, int x) {
        if(!head) return head;
      ListNode* head1=new ListNode(-1);
      ListNode* dummy1=head1;
      ListNode* head2=new ListNode(-1);
      ListNode* dummy2=head2;
      ListNode* current=head;
      while(current){
        if(current->val<x){
            dummy1->next=current;
            dummy1=dummy1->next;
        }
        else{
            dummy2->next=current;
            dummy2=dummy2->next;
        }
        current=current->next;
      }
      dummy1->next=head2->next;
      dummy2->next=nullptr;
      return head1->next;  
    }
};