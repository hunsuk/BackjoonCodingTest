#include <iostream>

using namespace std;

int main(void) {
	// 1 6 12 18
	int input;
	int range = 1;
	int current = 1;
	cin >> input;
	
	if (input == range) {
		cout << 1 << endl;
	}
	else {
		while(input > current){
			current += 6 * range;
			range++;
		}
		cout << range << endl;
	}
	
}