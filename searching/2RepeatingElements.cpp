#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n) {
    if(n == 0) {
        return 1;
    }
    
    return n * factorial(n - 1);
}

void printRepeated(int arr[], int size)  
{  

    int s = 0;
    int p = 1;
    int x, y;
    int D;
    int n = size - 2;
    
    
    for(int i = 0; i < size; ++i) {
        s += arr[i];
        p *= arr[i];
    }
    
    s -= n * (n + 1) / 2;
    p /= factorial(n);
    
    D = sqrt(s * s - 4 * p);
    
    x = (s + D) / 2;
    y = (s - D) / 2;
    
    cout << x << " " << y << endl;
}  

int main() {
	int t;
	cin >> t;
	
	while(t--) {
	    int n;
	    cin >> n;
	    
	    int * arr = new int[n + 2];
	    for(int i = 0; i < (n + 2); ++i) {
	        cin >> arr[i];
	    }
	    
	    printRepeated(arr, n + 2);
	    
	    delete[] arr;
	}
	return 0;
}
