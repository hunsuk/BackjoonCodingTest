#include <iostream>

using namespace std;

int main(void) {
	int caseCount;

	cin >> caseCount;

	for (int i = 0; i < caseCount; i++) {
		string input;
		cin >> input;

		cout << input[0] << input[input.size() - 1] << endl;
	}
}