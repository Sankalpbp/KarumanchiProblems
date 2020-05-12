#include <iostream>
using namespace std;

int findPivot(int * arr, int start, int end) {
    
    if(start > end) {
        return -1;
    }
    if(start == end) {
        return start;
    } else if (start == end - 1) {
        if(arr[start] > arr[end]) {
            return start;
        } else {
            return end;
        }
    } else {
        int mid = start + (end - start) / 2;
        
        if(arr[mid - 1] < arr[mid] and arr[mid] > arr[mid + 1]) {
            return mid;
        } else if (arr[mid - 1] < arr[mid] and arr[mid] < arr[mid + 1]) {
            return findPivot(arr, mid + 1, end) ;
        } else {
            return findPivot(arr, start, mid - 1);
        }
    }
    
    return -1;
}

int ascendingBinarySearch(int * arr, int start, int end, int x) {
    
    while(start <= end) {
        
        if(start == end) {
            if(arr[start] == x)
                return start;
            else {
                return -1;
            }
        }
        
        int mid = start + (end - start) / 2;
        if(arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    
    return -1;
}

int descendingBinarySearch(int * arr, int start, int end, int x) {
    
    while(start <= end) {
        if(start == end) {
            if(arr[start] == x)
                return start;
            else {
                return -1;
            }
        }
        
        int mid = start + (end - start) / 2;
        
        if(arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    
    return -1;
}

int bitonicSearch(int * arr, int n, int x) {
    
    int pivot = findPivot(arr, 0, n - 1);
    
    if(pivot == -1) {
        return ascendingBinarySearch(arr, 0, n - 1, x);
    }
    if(arr[pivot] == x) {
        return pivot;
    } else if (arr[pivot] < x) {
        return -1; 
    } else {
        int index = ascendingBinarySearch(arr, 0, pivot - 1, x);
        if(index != -1) {
            return index;
        }
        
        index = descendingBinarySearch(arr, pivot + 1, n - 1, x);
        return index;
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
        
        cout << bitonicSearch(arr, n, k) << endl;
        
        delete[] arr;
    }	
	return 0;
}
