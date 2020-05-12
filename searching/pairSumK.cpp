#include <iostream>
# include <algorithm>
using namespace std;

bool there(int * arr, int n, int k) {
    sort(arr, arr + n);
    
    int low = 0;
    int high = n - 1;
    
    while(low < high) {
        int sum = arr[low] + arr[high];
        if(sum == k) {
            return true;
        } else if(sum < k) {
            ++low;
        } else {
            --high;
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
	    int k;
	    cin >> k;
	    
	    int * arr = new int[n];
	    for(int i = 0; i < n; ++i) {
	        cin >> arr[i];
	    }
	    
	    if(there(arr, n, k)) {
	        cout << "Yes\n";
	    } else {
	        cout << "No\n";
	    }
	    
	    delete[] arr;
	}
	return 0;
}
