#include <iostream>

using namespace std;

int main() {
	int result[26];
	fill_n(result, 26, -1);
	
	string input;
	cin >> input;

	for (int i = 0; i < input.size(); i++) {
		if (result[(int)input[i] - 97] == -1) {
			result[(int)input[i] - 97] = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << result[i] << " ";
	}
}