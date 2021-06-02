// https://practice.geeksforgeeks.org/problems/check-for-bst/1

vector<int> p;

   void inorder(Node *root){

       if(root==NULL)return;

       inorder(root->left);

       p.push_back(root->data);

       inorder(root->right);

   }  

bool isBST(Node* root) {

       inorder(root);

 for(int i=0;i<p.size()-1;i++)

       {

           if(p[i]>=p[i+1])

           {

               return false;

           }

       }

    return true;

}
