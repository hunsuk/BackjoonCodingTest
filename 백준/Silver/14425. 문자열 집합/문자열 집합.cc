#include<iostream>
#include<algorithm>
#include <string.h>
using namespace std;

bool compare(const void* a, const void* b) {
	char* first = (char*)a;
	char* second = (char*)b;
	

	for (int i = 0; i < 501; i++) {

		if (*(first + i) > *(second + i)) {
			return false;
		}
		else if (*(first + i) < *(second + i)) {
			return true;
		}
	}

	return true;
	
}


int main(void) {
	int n;
	int m;
	int result = 0;
	char** inputs;
	char** cases;

	cin >> n >> m;

	inputs = new char* [n];
	cases = new char* [m];

	for (int i = 0; i < n; i++) {
		inputs[i] = new char[501];
	}

	for (int i = 0; i < m; i++) {
		cases[i] = new char[501];
	}
	
	
	for (int i = 0; i < n; i++) {
		
		cin >> inputs[i];
	}

	for (int i = 0; i < m; i++) {
		cin >> cases[i];
	}

	sort(inputs, inputs + n, compare);

	for (int i = 0; i < m; i++) {
	
		char* target = cases[i];
		int left = 0;
		int right = n - 1;
		int middle = 0;
		

		while (left <= right) {
			middle = (left + right) / 2;

			if (memcmp(inputs[middle], target, 501) < 0) {
				left = middle + 1;
			}
			else if (memcmp(inputs[middle], target, 501) > 0) {
				right = middle - 1;
			}
			else {
				result++;
				break;
			}
		}		
	}
	
	for (int i = 0; i < n; i++) {
		delete[] inputs[i];
	}

	for (int i = 0; i < m; i++) {
		delete[] cases[i];
	}
	delete[] inputs;
	delete[] cases;
	
	cout << result << endl;
	return 0;
}