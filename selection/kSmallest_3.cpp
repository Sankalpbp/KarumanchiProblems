#include <algorithm>
#include <set>
using namespace std;

int partition(int * arr, int start , int end) {
    
    int pivot = arr[end];
    int i = start - 1;
    
    for(int j = start; j < end; ++j) {
        if(pivot >= arr[j]) {
            ++i;
            swap(arr[i], arr[j]);
        }
    }
    
    swap(arr[i+ 1], arr[end]);
    
    return (i + 1);
}

void doPartition(int * arr, int start, int end, int k) {
    
    int pivot = partition(arr, start, end);
    
    if (pivot == k - 1) {
        return;
    } else if (pivot > k - 1) {
        doPartition(arr, 0, pivot - 1, k);
    } else {
        doPartition(arr, pivot + 1, end, k);
    }
}

int kthSmallest(int * arr, int n, int k) {
    
    doPartition(arr, 0, n - 1, k);
    
    sort(arr, arr + k);
    return arr[k - 1];
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
	    
	    cout << kthSmallest(arr, n, k) << endl;
	}
	return 0;
}
