#include <climits>
#include <unordered_map>
#include <iostream>
using namespace std;

int first(int * arr, int n) {
    
    unordered_map<int, int> um;
    
    for(int i = 0; i < n; ++i) {
        
        if(um.find(arr[i]) == um.end()) {
            um[arr[i]] = i + 1;
            continue;
        }
        
        if(um[arr[i]] < 0) {
            continue;
        }
        
        if(um.find(arr[i]) != um.end()) {
            um[arr[i]] *= -1;
        }
    }
    
    int max = INT_MIN;
    
    
    for(auto it = um.begin(); it != um.end(); ++it) {
        if(it -> second < 0 and it -> second > max) {
            max = it -> second;
        }
    }
    
    if(max == INT_MIN) {
        return -1;
    }
    return (-1 * max);
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
	   int answer = first(arr, n);

	   cout << answer << endl;
	   
	   delete[] arr;
	}
	return 0;
}
