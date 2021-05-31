// https://practice.geeksforgeeks.org/problems/level-order-traversal/1

vector<int> levelOrder(Node* node)
    {
      //Your code here
      queue<Node*> q;
      vector<int> ans;s
      q.push(node);
      q.push(NULL);
      Node* c;
      while(!q.empty()){
          c = q.front();
          q.pop();
          if(c!=NULL){
            ans.push_back(c->data);
            if(c->left != NULL)
                q.push(c->left);
            if(c->right != NULL)
                q.push(c->right);
          }else if(!q.empty()){
              q.push(NULL);
          }
      }
      return ans;
    }
