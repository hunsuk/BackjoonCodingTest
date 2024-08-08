#include <iostream>
using namespace std;

int main(void) {
	int num;
	int result = 2;
	cin >> num;

	for (int i = 0; i < num; i++) {
		result = result + (result - 1);
	}
	cout << (result * result) << endl;
}