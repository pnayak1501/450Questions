// https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1

class Solution
{
    public:
    bool detectLoop(Node* head){
        // your code here
        Node* fast = head;
        Node* slow = head;
        
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(fast==slow){
                return true;
            }
        }
        return false;
    }
    
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        if(!detectLoop(head)){
            return;
        }
        struct Node* fast = head;
        struct Node* slow = head;
        do{
            slow = slow->next;
            fast = fast->next;
        }while(slow!=fast);
        fast = head;
        while(slow->next!=fast->next){
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = NULL;
    }
};
