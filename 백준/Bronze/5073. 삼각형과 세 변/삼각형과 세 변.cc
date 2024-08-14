#include <iostream>
#include <list>
using namespace std;

int main(void) {


	while (true) {
		int inputs[3];
		int max;
		int max_index;

		cin >> inputs[0] >> inputs[1] >> inputs[2];


		if (inputs[0] == 0 && inputs[1] == 0 && inputs[2] == 0) {
			return 0;
		}

		max = inputs[0];
		max_index = 0;
		for (int i = 1; i < 3; i++) {
			if (max < inputs[i]) {
				max_index = i;
			}
		}

		int sum = 0;

		for (int i = 0; i < 3; i++) {
			if (i != max_index)
				sum += inputs[i];
		}

		if (sum <= inputs[max_index]) {
			cout << "Invalid" << endl;
			continue;
		}



		if (inputs[0] == inputs[1] && inputs[0] == inputs[2] && inputs[1] == inputs[2]) {
			cout << "Equilateral" << endl;
			continue;
		}
		else if (inputs[0] != inputs[1] && inputs[0] != inputs[2] && inputs[1] != inputs[2]) {
			cout << "Scalene" << endl;
			continue;
		}
		else if (inputs[0] == inputs[1] || inputs[0] == inputs[2] || inputs[1] == inputs[2]){
			cout << "Isosceles" << endl;
			continue;

		}


	
	}

}