#include<iostream>
using namespace std;

int main(void)
{
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
	    
	    int xored = arr[0];
	    for(int i = 1; i < n; ++i) {
	        xored ^= arr[i];
	    }
	    
	    cout << xored << endl;
	}
	return 0;
	
}
