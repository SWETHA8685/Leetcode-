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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next== nullptr){
         return head;
        }
        ListNode *f=head;//1
        ListNode *s=head->next;//2
        f->next=swapPairs(s->next);//
        s->next=f;
        return s;
        
    }
};