// https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1#

vector<int> reverseLevelOrder(Node* root)
{
    stack <Node *> s;
    queue <Node *> q;
    q.push(root);
    vector<int> ans;
    while (!q.empty())
    {
        root = q.front();
        q.pop();
        s.push(root);
  
        if (root->right)
            q.push(root->right); 
  
        if (root->left)
            q.push(root->left);
    }
  
    while (s.empty() == false)
    {
        root = s.top();
        ans.push_back(root->data);
        s.pop();
    }
    return ans;
}
