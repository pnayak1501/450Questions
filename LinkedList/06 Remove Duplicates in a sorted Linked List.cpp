// https://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1

void removeDuplicates(struct Node* head)
{
    struct Node* c = head;
 
    while(c->next!=NULL){
        if(c->data == c->next->data){
            c->next = c->next->next;
        }else{
            c = c->next;
        }
    }
    
}
