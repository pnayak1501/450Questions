// https://practice.geeksforgeeks.org/problems/find-k-th-smallest-element-in-bst/1

  void inorder(Node* root, vector<int> &v){
        if(root==NULL){
            return;
        }
        inorder(root->left, v);
        v.push_back(root->data);
        inorder(root->right, v);
    }
    
    int KthSmallestElement(Node *root, int K)
    {
        //add code here.
        vector<int> v;
        inorder(root, v);
        if(K<=v.size()){
            return v[K-1];          
        }
        return -1;
    }
