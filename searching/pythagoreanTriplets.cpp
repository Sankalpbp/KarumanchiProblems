#include <iostream>
#include <algorithm>
using namespace std;

bool triplet(int * arr, int n) {
    
    for(int i = 0; i < n; ++i) {
        arr[i] *= arr[i];
    }
    
    sort(arr, arr + n);
    
    int low = 0;
    int high = n - 1;
    
    for(int i = n - 1; i >= 2; --i) {
        int low = 0; 
        int high = i - 1;
        
        while(low < high) {
            int sum = arr[low] + arr[high];
            if(sum == arr[i]) {
                return true;
            } else if(sum < arr[i]) {
                ++low;
            } else {
                --high;
            }
        }
    }
    
    return false;
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
	    
	    if(triplet(arr, n)) {
	        cout << "Yes" << endl;
	    } else {
	        cout << "No" << endl;
	        
	    }
	    
	    delete[] arr;
	}
	return 0;
}
