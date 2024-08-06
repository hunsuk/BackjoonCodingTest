#include <iostream>

using namespace std;

int main(void) {
	int students[30] = { 0 };
	
	for (int i = 1; i <= 28; i++) {
		int number;
		cin >> number;
		students[(int)number - 1] = 10;
	}


	for (int i = 0; i < 30; i++) {
		if (students[i] == 0) {
			cout << (i + 1) << endl;
		}
	}
}