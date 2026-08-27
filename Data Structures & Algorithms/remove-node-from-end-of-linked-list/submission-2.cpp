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



ListNode* reverse(ListNode *head){
            ListNode* curr=head;
            ListNode* prev=nullptr;
            while(curr != nullptr){
                ListNode* temp=curr->next;
                curr->next=prev;
                prev=curr;
                curr=temp;


            }
            return (prev);

    }   
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        head=reverse(head);
    

        if(n==1){
            ListNode* nodetodelete=head;
            head=head->next;
            delete nodetodelete;
        }
        else{
            ListNode*current=head;

            for(int i=1;i<n-1;i++){
                current=current->next;
               
            }

             ListNode* nodetodelete=current->next;
                current->next=current->next->next;
                delete nodetodelete;
        }
            head=reverse(head);
            return head;
        
        }

        
    };
