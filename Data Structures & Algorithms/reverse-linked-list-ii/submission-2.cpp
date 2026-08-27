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
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if(head==nullptr||head->next==nullptr||left==right){
            return head;
        }
        

        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* beforestart=dummy;

        for (int i=0;i<left-1;i++){
            beforestart=beforestart->next;
        }
        ListNode* end=beforestart;
        for(int i=0;i<=right-left;i++){
            end=end->next;

        }

        ListNode* afterend=end->next;

        ListNode* start=beforestart->next;
        end->next=nullptr;
        ListNode* curr=start;
        ListNode* prev=nullptr;

        while(curr!=nullptr){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        beforestart->next=prev;
        start->next=afterend;

        ListNode* result = dummy->next;
        delete dummy;
        return result;


    }
};