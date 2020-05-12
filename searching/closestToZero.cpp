#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm>
using namespace std;

int pairSum(int * arr, int n) {
    
    int closestSum = arr[0] + arr[1];
    int sum = 0;
    
    for(int i = 0; i < n - 1; ++i) {
        sum = 0;
        for(int j = i + 1; j < n; ++j) {
            sum = arr[i] + arr[j];
            if(abs(sum) < abs(closestSum)) {
                closestSum = sum;
            }
        }
    }
    
    return closestSum;
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
