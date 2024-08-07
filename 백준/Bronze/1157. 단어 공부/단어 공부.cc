#include <iostream>

using namespace std;

int main() {
	int spelling[26];
	int maxCount = 0;
	string result = "";
	fill_n(spelling, 26, 0);
	string input;
	cin >> input;


	for (int i = 0; i < input.size(); i++) 
	{
		if (input[i] >= 95) {
			spelling[input[i] - 97] += 1;
		}
		else {
			spelling[input[i] - 65] += 1;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (maxCount < spelling[i]) {
			maxCount = spelling[i];
		}
	}

	for (int i = 0; i < 26; i++) {
		if (maxCount == spelling[i]) {
			char temp = i + 65;
			result.append(1, temp);
		}
	}

	if (result.size() == 1) {
		cout << result << endl;
	}
	else {
		cout << "?" << endl;
	}
}