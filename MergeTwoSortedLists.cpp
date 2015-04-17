//Leetcode c++
//Merge Two Sorted Lists
/*
Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.
 */
class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        if(l1 == NULL && l2 == NULL)return NULL;
        if(l1 == NULL)return l2;
        if(l2 == NULL)return l1;
        ListNode *head;
        ListNode *p = new ListNode(0);
        head = p; p->next = l1;
        while(l1 != NULL && l2!= NULL){
            if(l1->val < l2->val){
                l1 = l1->next;
            }else{
                ListNode *temp = new ListNode(l2->val);
                p->next = temp;
                temp->next = l1;
                l2 = l2->next;
            }
            p = p->next;
        }
        if(l2 != NULL){
            p->next = l2;
        }
        return head->next;
        
    }
    
};