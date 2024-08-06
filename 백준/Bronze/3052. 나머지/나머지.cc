#include <iostream>

using namespace std;

int main(void) {
	int num[10] = { 0 };
	int result[10] = { -1 };
	int count = 10;
	for (int i = 0; i < 10; i++) {
		cin >> num[i];
	}

	int reuslt = 0;

	for (int i = 0; i < 10; i++) {
		result[i] = num[i] % 42;
	}

	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (result[i] == result[j]) {
				count--;
				break;
			}
		}
	}

	cout << count << endl;
}