#include <iostream>
using namespace std;

int rotatedSearch(int * arr, int start, int end, int k) {
    
    int mid = start + (end - start) / 2;
    
    if(start > end) {
        return -1;
    }
    
    if(k == arr[mid]) {
        return mid;
    } else if (arr[start] <= arr[mid]) {
        if(k >= arr[start] and k < arr[mid]) {
            return rotatedSearch(arr, start, mid - 1, k);   
        } else {
            return rotatedSearch(arr, mid + 1, end, k);
        }
    } else {
        if(k > arr[mid] and k <= arr[end]) {
            return rotatedSearch(arr, mid + 1, end, k);
        } else {
            return rotatedSearch(arr, start, mid - 1, k);   
        }
    }
    
    return -1;
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
	    
	    int k;
	    cin >> k;
	    
	    cout << rotatedSearch(arr, 0, n - 1, k) << endl;
	}
	return 0;
}
