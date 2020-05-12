#include <iostream>
# include <climits>
using namespace std;

void countingSort(int * arr, int n, int expo) {
    
    int * count = new int[n];
    for(int i = 0; i < n; ++i) {
        count[i] = 0;
    }
    
    for(int i = 0; i < n; ++i) {
        ++count[(arr[i] / expo) % n];
    }
    
    for(int i = 1; i < n; ++i) {
        count[i] += count[i - 1];
    }
    
    int * output = new int[n];
    
    for(int i = n - 1; i >= 0; --i) {
        output[count[(arr[i] / expo) % n] - 1] = arr[i];
        --count[(arr[i] / expo) % n];
    }
    
    for(int i = 0; i < n; ++i) {
        arr[i] = output[i];
    }
    
    delete[] count;
    delete[] output;
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
	    
	    countingSort(arr, n, 1);
	    countingSort(arr, n, n);
	    
	    for(int i = 0; i < n; ++i) {
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	    
	    delete[] arr;
	}
	return 0;
}
