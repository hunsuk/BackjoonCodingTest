#include <iostream>
#include <list>
using namespace std;

int main() {
	int count;
	list<int>nums;
	cin >> count;

	for (int i = 0; i < count; i++) {
		int input;
		cin >> input;

		if (input != 1) {
			bool check = true;
			for (int j = 2; j < input - 1; j++) {
				if (input % j == 0) {
					check = false;
					break;
				}
			}

			if (check)
				nums.push_back(input);
		}
	}

	cout << nums.size() << endl;
}