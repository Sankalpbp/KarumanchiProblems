queue<ll> modifyQueue(queue<ll> q, int k)
{
    //add code here.
    stack<ll> st;
    
    int i = 0;
    while(i < k) {
        st.push(q.front());
        q.pop();
        ++i;
    }
    
    while(st.empty() == false) {
        q.push(st.top());
        st.pop();
    }
    
    for(int j = 0; j < (q.size() - k); ++j) {
        q.push(q.front());
        q.pop();
    }
    
    return q;
}
