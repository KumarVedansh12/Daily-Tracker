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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>arr;
        ListNode* t1=list1;
        ListNode* t2=list2;
        while(t1!=NULL){
            arr.push_back(t1->val);
            t1=t1->next;
        }
        while(t2!=NULL){
            arr.push_back(t2->val);
            t2=t2->next;
        }
        sort(arr.begin(),arr.end());
        int n=arr.size();
        ListNode* temp=NULL;
        for(int i=n-1;i>=0;i--){
            ListNode* newNode= new ListNode(arr[i]);
            newNode->next=temp; 
            temp=newNode;           
        }
        return temp;
    }
};