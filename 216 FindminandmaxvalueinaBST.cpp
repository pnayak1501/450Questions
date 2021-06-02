// https://practice.geeksforgeeks.org/problems/minimum-element-in-bst/1

int minValue(Node* root)
{
    // Code here
    if(root->left==NULL){
        return root->data;
    }
    if(root->left!=NULL)
        return minValue(root->left);
}
