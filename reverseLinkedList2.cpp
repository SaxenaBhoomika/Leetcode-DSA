class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || left==right){
            return head;
        }
        ListNode dummy(0);
        dummy.next=head;
        ListNode* prev=&dummy;
        for(int i=0;i<left-1;i++){
            prev=prev->next;
        }
        ListNode* curr=prev->next;
        for(int i=0;i<right-left;i++){
            ListNode* nextN=curr->next;
            curr->next=nextN->next;
            nextN->next=prev->next;
            prev->next=nextN;
        }
        return dummy.next;
        
    }
};
