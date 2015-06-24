//Leetcode c++
//Remove Linked List Elements
/*
 Remove all elements from a linked list of integers that have value val.
 
 Example
 Given: 1 --> 2 --> 6 --> 3 --> 4 --> 5 --> 6, val = 6
 Return: 1 --> 2 --> 3 --> 4 --> 5
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL)return NULL;
        ListNode *new_head = new ListNode(0);
        new_head->next = head;
        ListNode *p, *q;
        p = new_head; q = head;
        while(q != NULL){
            if(q->val == val){
                ListNode *temp = q;
                p->next = q->next;
                q = p->next;
                delete temp;
            }
            else{
                q = q->next;
                p = p->next;
            }
        }
        return new_head->next;
    }
    
};