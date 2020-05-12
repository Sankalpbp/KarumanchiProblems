queue<long long int> rev(queue<long long int> q)
{
    stack<long long int> st;
    
    while(q.empty() == false) {
        st.push(q.front());
        q.pop();
    }
    
    while(st.empty() == false) {
        q.push(st.top());
        st.pop();
    }
    
    return q;
}
