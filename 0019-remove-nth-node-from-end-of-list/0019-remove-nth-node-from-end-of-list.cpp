class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL ){
            ListNode* temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        ListNode* temp=head;
        int c=0;
        while(temp!=NULL){
            c++;
            temp=temp->next; 
        }
        if(c==n){
            temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        temp=head;
        for(int i=1;i<c-n;i++){
            temp=temp->next;
        }
        ListNode* del=temp->next;
        temp->next=temp->next->next;
        delete del;
    return head;
    }
};