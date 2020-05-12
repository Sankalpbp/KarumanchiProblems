#include <iostream>
using namespace std;

void segregate(int * arr, int n) {
    
    int start = 0;
    int end = n - 1;
    
    while(start < end) {
        
        while(arr[start] == 0 and (end > start)) {
            ++start;
        }
        
        while(arr[end] == 1 and end > start) {
            --end;
        }
        
        if(start < end) {
            arr[start] = 0;
            arr[end] = 1;
            
            ++start;
            --end;
        }
    }
}

void print(int * arr, int n) {
    
    for(int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    
    cout << endl;
}
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
	    
	    segregate(arr, n);
	    print(arr, n);
	}
	return 0;
}
