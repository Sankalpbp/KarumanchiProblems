class Solution {
public:
    string removeDuplicates(string S) {
        
        stack<char> st;
        
        for(int i = 0; i < S.length(); ++i) {
            if(st.empty() == true || st.top() != S[i]) {
                st.push(S[i]);
            } else if(st.top() == S[i]) {
                st.pop();
            }
        }
        
        S = "";
        while(st.empty() == false) {
            S += st.top();
            st.pop();
        }
        
        reverse(S.begin(), S.end());
        return S;
    }
};
