#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
    return (abs(a) < abs(b));
}

int pairSum(int * arr, int n) {
    
    sort(arr, arr + n, compare);
    int min = INT_MAX;
    int sum = 0;
    
    for(int i = 1; i < n; ++i) {
        if(abs(arr[i] + arr[i - 1]) < abs(min)) {
            min = arr[i] + arr[i - 1];
        }
    }
    
    return min;
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
	    
	    cout << pairSum(arr, n) << endl;
	    
	    delete[] arr;
	}
	return 0;
}
