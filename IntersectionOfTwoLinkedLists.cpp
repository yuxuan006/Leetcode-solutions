//Leetcode c++
//Intersection of Two Linked Lists
/*
Write a program to find the node at which the intersection of two singly linked lists begins.


For example, the following two linked lists:

A:          a1 → a2
                    ↘
                    c1 → c2 → c3
                    ↗
B:     b1 → b2 → b3
begin to intersect at node c1.
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL){
            return NULL;
        }
        ListNode *p, *q;
        p = headA; q = headB;
        int c1=1, c2=1;
        while(p->next != NULL){
            c1++;
            p = p->next;
        }
        while(q->next != NULL){
            c2++;
            q = q->next;
        }
        if(p->val != q->val){
            return NULL;
        }
        else{
            p = headA; q = headB;
            if(c1>=c2){
                int dis = c1-c2;
                while(dis > 0){
                    p = p->next;
                    dis--;
                }
                while(p->val != q->val){
                    p = p->next;
                    q = q->next;
                }
                return p;
            }
            if(c1<c2){
                int dis = c2-c1;
                while(dis > 0){
                    q = q->next;
                    dis--;
                }
                while(p->val != q->val){
                    p = p->next;
                    q = q->next;
                }
                return q;
            }
        }
        return NULL;
    }
};