# include <iostream>

using namespace std;

class node {
	public:
		int val;
		node * next;

		node(int data) {
			this -> val = data;
			this -> next = NULL;
		}
};

int josephus(int n) {
		
	node * p, * q;
	p = new node(1);
	q = p;

	for(int i = 2; i <= n; ++i) {
		p -> next = new node(i);
		p = p -> next;
	}

	p -> next = q;

	while(p -> next != p) {
		cout << p -> next -> val << " ";
		p -> next = p -> next -> next;
		p = p -> next;
	}

	return p -> val;
}

int main(void) {
		
	int n;
	cin >> n;

	int answer = josephus(n);

	cout << endl << answer << endl;

	return 0;
}
