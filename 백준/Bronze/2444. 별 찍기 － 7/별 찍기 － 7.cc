#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int input;
	int startCount = 1;
	int spaceCount;
	cin >> input;
	spaceCount = input - 1;

	for (int i = 0; i < input * 2 - 1; i++) {
		

		for (int j = 0; j < spaceCount; j++) {
			cout << " ";
		}

		for (int j = 0; j < startCount; j++) {
			cout << "*";
		}
		cout << endl;
		if (i < input - 1) {
			startCount += 2;
			spaceCount--;
		}
		else {
			startCount -= 2;
			spaceCount++;
		}

	}
}