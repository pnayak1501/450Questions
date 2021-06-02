// https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1

vector<int> leftView(Node *root)
{
vector<int> nvec;
queue<Node*> q;
if(!root)
return {};
q.push(root);

while(!q.empty()){
int n=q.size();
for(int i=0;i<n;i++){ 
    Node *t=q.front(); q.pop(); 
    if(i==0) 
        nvec.push_back(t->data);
if(t->left)
q.push(t->left);
if(t->right)
q.push(t->right);
}
}
return nvec;
}   
