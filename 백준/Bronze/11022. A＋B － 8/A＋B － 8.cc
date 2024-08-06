#include <iostream>
#include <list>
using namespace std;

int main(void) {
	int testCase;
	list<int> left;
	list<int> right;
	cin >> testCase;

	for (int i = 0; i < testCase; i++) {
		int a, b;
		cin >> a >> b;
		left.push_back(a);
		right.push_back(b);
	}

	for (int i = 0; i < testCase; i++) {
		cout << "Case #" << i + 1 << ": " << left.front() << " + " << right.front() << " = " << left.front() + right.front() << endl;
		left.pop_front();
		right.pop_front();
	}

}