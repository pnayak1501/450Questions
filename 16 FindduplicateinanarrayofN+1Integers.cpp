// https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1/
// https://leetcode.com/problems/find-the-duplicate-number/

    vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int> v(n, 0);
        for(int i=0; i<n; i++){
            v[arr[i]] = v[arr[i]]+1;
        }
        vector<int> ans;
        for(int i=0; i<n; i++){
            if(v[i]>1){
                ans.push_back(i);
            }
        }
        if(ans.empty()){
            ans.push_back(-1);
        }
        return ans;
    }
