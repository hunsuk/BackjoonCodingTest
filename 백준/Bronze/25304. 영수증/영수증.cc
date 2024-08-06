#include<iostream>

using namespace std;

int main() {
	int amount;
	int typeCount;
	int result = 0;
	string answer = "";
	cin >> amount;
	cin >> typeCount;

	for (int i = 0; i < typeCount; i++) {
		int value;
		int count;

		cin >> value >> count;
		result += value * count;
	}
	answer = (amount == result) ? "Yes" : "No";
	cout << answer;
	return 0;
}