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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* list=head;
        ListNode* list1=head;

        int c=0;

        while(list!=NULL)
        {
           c++;
           list=list->next;
        }

        int nn=c-n;

        if(nn==0)
        {
            return head->next;
        }

        int cnt=0;

        while(list1!=NULL)
        {
           cnt++;
           if(cnt==nn)
           {
             list1->next=list1->next->next;
             break;
           }
           list1=list1->next;
        }
        return head;




    }
};
