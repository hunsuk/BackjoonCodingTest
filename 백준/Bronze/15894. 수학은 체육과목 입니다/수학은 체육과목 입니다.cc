#include <iostream>

using namespace std;

int main(void) {
	long  input;
	cin >> input;

	if (input == 1) {
		cout << 4 << endl;
	}
	else {

		long result = ((input - 1) * 2) + 1 + input + 2 + (input - 1);
		cout << result << endl;
	}
}
