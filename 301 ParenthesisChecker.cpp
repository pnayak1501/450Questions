// https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1

    bool ispar(string x)
    {
        // Your code here
        stack<char> st;
        for(int i=0; i<x.length(); i++){
            if(x[i]=='(' || x[i]=='[' || x[i]=='{'){
                st.push(x[i]);
            }
            else if( !st.empty() && x[i]==')' && st.top()=='('){
                st.pop();
            }
            else if( !st.empty() && x[i]=='}' && st.top()=='{'){
                st.pop();
            }
            else if( !st.empty() && x[i]==']' && st.top()=='['){
                st.pop();
            }
            else
                return false;
        }
        if(!st.empty()){
            return false;
        }
        return true;
    }
