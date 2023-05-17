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
    int pairSum(ListNode* head) {
        ListNode* s=head;
        ListNode* f=head;
        int sum=0;
        while(f && f->next){
            s=s->next;
            f=f->next->next;
        }
        ListNode* nextNode=NULL;
        ListNode* prev=NULL;
        while(s){
            nextNode=s->next;
            s->next=prev;
            prev=s;
            s=nextNode;
        }
        while(prev){
            sum=max(sum,head->val+prev->val);
            prev=prev->next;
            head=head->next;
        }
        return sum;
    }
};
