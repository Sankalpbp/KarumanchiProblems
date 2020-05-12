#include <iostream>
#include <algorithm>
using namespace std;

int triplet(int * arr, int n, int x) {
    
    sort(arr, arr + n);
    
    for(int i = n - 1; i >= 2; --i) {
        int low = 0;
        int high = i - 1;
        
        while(low < high) {
            int sum = arr[i] + arr[low] + arr[high];
            
            if(sum == x) {
                return 1;
            } else if(sum < x) {
                ++low;
            } else {
                --high;
            }
        }
    }
    
    return 0;
}

int main() {
	//code
	
	int t;
	cin >> t;
	
	while(t--) {
	    int n, x;
	    cin >> n >> x;
	    
	    int * arr = new int[n];
	    for(int i = 0; i < n; ++i) {
	        cin >> arr[i];
	    }
	    
	    cout << triplet(arr, n, x) << endl;
	    
	    delete[] arr;
	}
	return 0;
}
