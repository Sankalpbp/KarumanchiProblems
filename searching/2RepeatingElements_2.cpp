using namespace std;

void printRepeated(int * arr, int n) {
    
    int Xor = arr[0];
    int size = n - 2;
    for(int i = 1; i < n; ++i) {
        Xor ^= arr[i];
    }
    
    for(int i = 1; i <= size; ++i) {
        Xor ^= i;
    }
    
    int setBitNumber = Xor & ~(Xor - 1);
    
    int x = 0, y = 0;
    
    for(int i = 0; i < n; ++i) {
    
        if(arr[i] & setBitNumber) {
            x ^= arr[i];
        } else {
            y ^= arr[i];
        }
    }
    
    for(int i = 1; i <= size; ++i) {
        if(i & setBitNumber) {
            x ^= i;
        } else {
            y ^= i;
        }
    }
    
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
