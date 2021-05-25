// https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1

struct Node* reverseList(struct Node *head)
    {
        struct Node* curr = head;
        struct Node* prev = NULL;
        struct Node* n;
        while(curr!=NULL){
            n = curr->next;
            curr->next = prev;
            prev = curr;
            curr = n;
        }
        return prev;
   }
