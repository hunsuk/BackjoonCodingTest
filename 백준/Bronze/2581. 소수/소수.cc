#include <iostream>

using namespace std;

int main(void) {
	int min;
	int max;
	int min_prime = 0;
	int sum_prime = 0;
	cin >> min;
	cin >> max;

	for (int i = min; i <= max; i++) {
		bool check = true;

		
		if (i == 1) {
			continue;
		}

		for (int j = 2; j < i - 1; j++) {
			if (i % j == 0) {
				check = false;
				break;
			}
		}

		if (check) {
			if (min_prime == 0) {
				min_prime = i;
			}
			
			sum_prime += i;
		}
	}
	if (min_prime != 0) {
		cout << sum_prime << endl;
		cout << min_prime << endl;
	}
	else {
		cout << "-1" << endl;
	}
	
}