#include <iostream>
using namespace std;

int lastOccurence(int * arr, int n, int x) {
    
    int start = 0;
    int end = n - 1;
    
    while(start <= end) {
        
        int mid = start + (end - start) / 2;
        
        if((mid == end and arr[mid] == x) or (arr[mid] == x and arr[mid + 1] > x)) {
            return mid;
        } else if (arr[mid] <= x) {
            start = mid + 1;
        } else if (arr[mid] > x) {
            end = mid - 1;
        } else {
            return -1;
        }
    }
    
    return -1;
}

int firstOccurence(int * arr, int n, int x) {
    
    int start = 0;
    int end = n - 1;
    
    while(end >= start) {
        
        int mid = start + (end - start) / 2;
        
        if((mid == start and arr[mid] == x) or (arr[mid] == x and arr[mid - 1] < x)) {
            return mid;
        } else if (arr[mid] >= x) {
            end = mid - 1;   
        } else if (arr[mid] < x) {
            start = mid + 1;
        } else {
            return -1;
        }
    }
    
    return -1;
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
	    
	    if(firstOccurence(arr, n, x) == -1) {
	        cout << -1 << endl;
	        continue;
	    }
	    cout << lastOccurence(arr, n, x) - firstOccurence(arr, n, x) + 1 << endl;
	    
	    delete[] arr;
	}
	return 0;
}
