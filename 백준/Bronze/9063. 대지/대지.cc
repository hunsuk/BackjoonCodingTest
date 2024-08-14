#include <iostream>
#include <list>
using namespace std;

int main(void) {
	
	int count;
	int first[100000];
	int second[100000];


	fill_n(first, 100000, 0);
	fill_n(second, 100000, 0);

	
	cin >> count;

	for (int i = 0; i < count; i++) {
		cin >> first[i] >> second[i];
	}

	if (count == 1) {
		cout << 0 << endl;
		return 0;
	}

	int min_x = first[0];
	int max_x = first[0];

	int min_y = second[0];
	int max_y = second[0];

	for (int i = 1; i < count; i++) {
		if (min_x > first[i]) {
			min_x = first[i];
		}

		if (max_x < first[i]) {
			max_x = first[i];
		}

		if (min_y > second[i]) {
			min_y = second[i];
		}

		if (max_y < second[i]) {
			max_y = second[i];
		}
	}


	cout << ((max_x - min_x) * (max_y - min_y)) << endl;
}