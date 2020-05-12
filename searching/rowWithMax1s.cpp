#include <iostream>
using namespace std;

int rowWithMax(int ** arr, int n, int m) {
    
    int i = 0;
    int j = m - 1;
    
    int answer = 0;
    
    while(i < n and j >= 0) {
        
        if(arr[i][j] == 1) {
            answer = i;
            --j;
        } else if (arr[i][j] == 0) {
            ++i;
        }
    }
    
    return answer;
}

int main() {
	//code
	int t;
	cin >> t;
	
	while(t--) {
	    
	    int n, m;
	    cin >> n >> m;
	    
	    int ** arr = new int* [n];
	    for(int i = 0; i < n; ++i) {
	        arr[i] = new int[m];
	        for(int j = 0; j < m; ++j) {
	            cin >> arr[i][j];
	        }
	    }
	    
	    cout << rowWithMax(arr, n, m) << endl;
	    
	    for(int i = 0; i < n; ++i) {
	        delete[] arr[i];
	    }
	    
	    delete[] arr;
	}
	return 0;
}
