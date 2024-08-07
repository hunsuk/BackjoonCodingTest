#include <iostream>

using namespace std;

int main(void) {
	int caseCount;
	string input;
	int result = 0;
	cin >> caseCount;
	cin >> input;

	for (int i = 0; i < caseCount; i++) {
		result += (int)input[i] - 48;
	}

	cout << result << endl;
	
}