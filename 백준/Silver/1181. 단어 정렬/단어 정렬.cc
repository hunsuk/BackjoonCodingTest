#include <iostream>
#include <algorithm>
using namespace std;


bool compare(string first, string second) {
	string a = first;
	string b = second;
	if (a.size() > b.size()) {
		return false;
	}
	else if (a.size() < b.size()) {
		return true;
	}
	else {
		for (int i = 0; i < a.size(); i++) {
			if (a[i] > b[i]) {
				return false;
			}
			else if (a[i] < b[i]) {
				return true;
			}
		}
	}
	return false;
}


int main(void) {
	string inputs[20000];
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> inputs[i];
	}


	sort(inputs, inputs + n, compare);

	for (int i = 1; i <= n; i++) {
		if (inputs[i-1].compare(inputs[i]) != 0)
		cout << inputs[i - 1] << "\n";
	}
}