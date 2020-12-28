#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// Complete the reverse function below.

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
/*DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
DoublyLinkedListNode *p=head,*q;
q=NULL;
while(p!=NULL){
 
    q=p->next;
    p->next=p->prev;
    p->prev=q;
    p=p->prev;
if(p!=NULL && p->next==NULL)
head=p;
    }

return head;
}

)*/