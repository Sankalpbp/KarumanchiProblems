# include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	
	while(t--) {
	    int n;
	    cin >> n;
	    
	    int * arr = new int[n - 1];
	    for(int i = 0; i < n - 1; i++) {
	        cin >> arr[i];
	    }
	    
	    long long int sum = 0;
	    for(int i = 0; i < n - 1; i++) {
	        sum += arr[i];
	    }
	    
	    cout << (n * (n + 1) / 2) - sum << endl;
	}
	return 0;
}
