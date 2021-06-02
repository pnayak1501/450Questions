// https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1/

int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here
        int flag = -1;
        for(int i=0;i<M.size();i++){
            vector<int> v(M.size(), 0);
            if(M[i] == v){
                flag = i;
                break;
            }
        }
        if(flag==-1){
            return -1;
        }
        if(flag!=-1){
            for(int i=0;i<M[flag].size();i++){
                if(M[i][flag] == 0 && i!=flag){
                    return -1;
                }
            }
        }
        return flag;
    }
