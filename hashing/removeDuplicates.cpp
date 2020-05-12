#include <iostream>
# include <map>
# include <string>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	cin.ignore();
	
	while(t--) {
	    string s;
        getline(cin, s);
	    map<char, bool> m;
	    for(int i=0; i<s.size(); i++) {
	        if(m[s[i]] == false) {
    	        m[s[i]] = true;
	        
	            cout << s[i];
	        } 
	    }
	    
	    cout << "\n";
	}
	return 0;
}
