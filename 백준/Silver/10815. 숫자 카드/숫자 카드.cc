#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
	int first = a;
	int second = b;

	return first > second;

	
}



int main(void) {
	int n;
	int* inputs;
	int* cases;
	int m;


	cin >> n;
	inputs = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> inputs[i];
	}
	cin >> m;
	cases = new int[m];
	for (int i = 0; i < m; i++) {
		cin >> cases[i];
	}

	sort(inputs, inputs+n);
	
	
	for (int i = 0; i < m; i++) {
		int target = cases[i];
		int left = 0;
		int right = n - 1;
		bool find_target = false;
		while (left <= right) {
			int middle = (left + right) / 2;
			if (inputs[middle] < target) {
				left = middle + 1;
			}
			else if (inputs[middle] > target) {
				right = middle - 1;
			}
			else {
				cout << "1 ";
				find_target = true;
				break;
			}
		}
		if (!find_target)
			cout << "0 ";
	}
	cout << endl;
}