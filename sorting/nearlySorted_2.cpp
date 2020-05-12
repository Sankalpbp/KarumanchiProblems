#include <iostream>
# include <algorithm>
using namespace std;

void sorting(int * arr, int n, int k) {
    
    if(n <= k) {
        sort(arr, arr + n);
    }
    
    for(int i = 0; i <= (n - k); ++i) {
        sort(arr + i, arr + i + k);
    }
}

int main() {
	//code
    int t;
    cin >> t;
    
    while(t--) {
        
        int n, k;
        cin >> n >> k;
        
        int * arr = new int[n];
        for(int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        sorting(arr, n, k);        

        for(int i = 0; i < n; ++i) {
            cout << arr[i] << " ";
        }

        cout << endl;        
        delete[] arr;
    }
	return 0;
}
