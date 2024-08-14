#include <iostream>
#include <list>
#include <cmath>
using namespace std;

int main(void) {
	int px;
	int py;
	int rx;
	int ry;

	int min_case[4];
	int min = 0;
	cin >> px >> py >> rx >> ry;

	min_case[0] = px;
	min_case[1] = rx - px;
	min_case[2] = py;
	min_case[3] = ry - py;


	min = min_case[0];

	for (int i = 1; i < 4; i++) {
		if (min > min_case[i]) {
			min = min_case[i];
		}
	}

	cout << min << endl;
}