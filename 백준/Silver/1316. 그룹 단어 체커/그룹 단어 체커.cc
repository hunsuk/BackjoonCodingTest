#include <iostream>

using namespace std;

int main() {

	int countCase;
	int spelling[26];
	cin >> countCase;
	int result = countCase;


	for (int i = 0; i < countCase; i++) {
		fill_n(spelling, 26, -1);
		string input;
		cin >> input;

		for (int j = 0; j < input.size(); j++) {
			
			if (spelling[input[j] - 97] == -1 || j - spelling[input[j] - 97] == 1) {
				spelling[input[j] - 97] = j;
			}
			else {
				result--;
				break;
			}
		}
	}

	cout << result << endl;
}