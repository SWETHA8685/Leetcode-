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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
      
       ListNode *ans=nullptr;
       for(int i=0;i<lists.size();i++)
       {
        ans=merg(ans,lists[i]);
       }
       return ans;
        
    }
    ListNode *merg(ListNode *a,ListNode *b)
    {
        if(a==nullptr)
        {
            return b;
        }
        if(b==nullptr)
        {
            return a;
        }
        if(a->val<=b->val)
        {
            a->next=merg(a->next,b);
            return a;
        }
        else
        {
            b->next=merg(a,b->next);
            return b;
        }
    }
};