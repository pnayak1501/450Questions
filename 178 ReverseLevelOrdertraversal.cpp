// https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1#

//METHOD 1
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
        ans.insert(ans.begin(), root->data);
  
        if (root->right)
            q.push(root->right); 
  
        if (root->left)
            q.push(root->left);
    }

    return ans;
}


//METHOD 2
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
