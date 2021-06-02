// https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
    if (!head)
        return NULL;
        
    struct node* current = head;
    struct node* next = NULL;
    struct node* prev = NULL;
    int count = 0;
 
    while (current != NULL && count < k) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
 
        head->next = reverse(current, k);
 
    return prev;
    }
};
