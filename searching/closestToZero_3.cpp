#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm>
using namespace std;

int pairSum(int * arr, int n) {
    
    sort(arr, arr + n);
    int i = 0;
    int j = n - 1;
    int temp;
    int posClosest = INT_MAX;
    int negClosest = INT_MIN;
    
    while(i < j) {
        temp = arr[i] + arr[j];
        
        if(temp > 0) {
            if(temp < posClosest) {
                posClosest = temp;
                
            }
            --j;
        } else if(temp < 0) {
            if(temp > negClosest) {
                negClosest = temp;
                
            }
            ++i;
        } else {
            return 0;    
        }
    }

    if(abs(negClosest) > posClosest) {
        return posClosest;
    }     
    return negClosest;
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
