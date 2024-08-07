#include <iostream>
#include <list>
using namespace std;

int main(void) {
	list<int> matrix;
	int row = 0;
	int col = 0;
	int max = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			int input;
			cin >> input;
			matrix.push_back(input);
		}
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			int result = matrix.front();

			if (max <= result) {
				max = result;
				row = i + 1;
				col = j + 1;
			}

			matrix.pop_front();
		}
	}

	cout << max << endl;
	cout << row << " " << col << endl;


}