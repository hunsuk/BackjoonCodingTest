#include <iostream>

using namespace std;

int main() {
	int spelling[26] = {2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
	int latestTime = 0;
	string input;


	cin >> input;

	for (int i = 0; i < input.size(); i++) {
		latestTime += spelling[(int)input[i] - 65] + 1;
	}

	cout << latestTime;

}