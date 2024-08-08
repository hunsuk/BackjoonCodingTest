#include <iostream>

using namespace std;

int main(void) {

	int whitePeper[100][100];
	int paperCount;
	int result = 0;
	for (int i = 0; i < 100; i++) {
		fill_n(whitePeper[i], 100, 0);
	}

	cin >> paperCount;

	for (int i = 0; i < paperCount; i++) {
		int width;
		int hight;

		cin >> width >> hight;
	
		for (int i = hight; i < hight + 10; i++) {
			for (int j = width; j < width + 10; j++) {
				whitePeper[i][j] = 1;
			}
		}
	}

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			result += whitePeper[i][j];
		}
	}
	cout << result << endl;
}