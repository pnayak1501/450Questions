// https://practice.geeksforgeeks.org/problems/reverse-a-string-using-stack/1#

char* reverse(char *S, int len)
{
    //code here
    stack<char> st;
    for(int i=0;i<len;i++){
        st.push(S[i]);
    }
    char* ans = new char[len];
    int i = 0;
    while(!st.empty()){
        ans[i] = st.top();
        st.pop(); 
        i++;
    }
    return ans;

}
