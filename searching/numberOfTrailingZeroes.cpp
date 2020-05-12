#include <iostream>
using namespace std;

int zeroes( int n) {
    
    int sum = 0;
    int five = 5;
    while(n / five > 0) {
        sum += (n / five);
        five *= 5;
    }
    
    return sum;
}

int main() {
	//code
	int t;
	cin >> t;
	
	while(t--) {
	    int n;
	    cin >> n;
	    
	    cout << zeroes(n) << endl;
	}
	return 0;
}
