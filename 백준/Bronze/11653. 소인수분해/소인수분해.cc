#include <iostream>
using namespace std;

int main(void) {

	int input;
	cin >> input;
	int share = 0;
	if (input != 1) {
		while (input != 1) {
			for (int i = 2; i <= input; i++) {
				if (input % i == 0) {
					cout << i << endl;
					input = input / i;
					break;
				}
			}
		}
	}
	return 0;
}