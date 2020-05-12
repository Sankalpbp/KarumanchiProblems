#include <set>
using namespace std;

int kthSmallest(int * arr, int n, int k) {
    
    set<int> s;
    for(int i = 0; i < k; ++i) {
        s.insert(arr[i]);
    }
    
    for(int i = k; i < n; ++i) {
        if(arr[i] > *(s.rbegin())) {
            continue;
        } else {
            set<int> :: reverse_iterator it = s.rbegin();
            int data = *it;
            // remove data, insert arr[i]
            s.erase(data);
            s.insert(arr[i]);
        }
    }
    
    return *(s.rbegin());
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
	    
	    int k;
	    cin >> k;
	    
	    cout << kthSmallest(arr, n, k) << endl;
	}
	return 0;
}
