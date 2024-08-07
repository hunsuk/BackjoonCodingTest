#include <iostream>

using namespace std;

int main() {
	char temp[100];
	fill_n(temp, 100, '0');
	int index = 0;
	string input;

	cin >> input;

	for (int i = input.size() - 1; i >= 0; i--) {
		temp[index++] = input[i];
	}

	for (int i = 0; i < input.size(); i++) {
		if (temp[i] - input[i] != 0) {
			cout << 0 << endl;
			return 0;
		}
	}

	cout << 1 << endl;
	return 0;
}