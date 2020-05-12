bool pairWiseConsecutive(stack<int> s)
{
    //Code here
    stack<int> aux;
    while(s.empty() == false) {
        aux.push(s.top());
        s.pop();
    }
    
    while(aux.size() > 1) {
        int x = aux.top();
        aux.pop();
        
        int y = aux.top();
        aux.pop();
        
        if(abs(x - y) != 1) {
            return false;
        }
        
        s.push(y);
        s.push(x);
    }
    
    return true;
}
