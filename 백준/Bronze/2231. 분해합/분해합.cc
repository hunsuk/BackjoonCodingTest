#include <iostream>

using namespace std;

int main(void) {

	long input;
	cin >> input;

	for (int i = 1; i <= input; i++) {
		long target = i;
		long sum = i;



		while (true) {
			
			if (target < 10) {
				sum += target;
				break;
			}
			else {
				sum += target % 10;
				target = target / 10;
			}			
		}
		
		if (sum == input) {
			cout << i << endl;
			return 0;
		}
	}
	cout << 0 << endl;
}