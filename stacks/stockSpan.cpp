#include <iostream>
# include <stack>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	
	while(t--) {
	    int n;
	    cin >> n;
	    
	    int * arr = new int[n];
	    for(int i = 0; i < n; ++i) {
	        cin >> arr[i];
	    }
	    
	    stack<int> spans;
	    int p;
	    
	    for(int i = 0; i < n; ++i) {
	        
	        while(spans.empty() == false and arr[i] >= arr[spans.top()]) {
	            spans.pop();   
	        }
	        
	        if(spans.empty() == true) {
	            p = -1;
	        } else {
	            p = spans.top();
	        }
	        
	        cout << i - p << " ";
	        spans.push(i);
	    }
	    
	    cout << endl;
	}
	return 0;
}
