#include <iostream>

using namespace std;

int main(void)
{
	int arr[9];
	int max;
	int index;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
	}

	max = arr[0];
	index = 0;

	for (int i = 1; i < 9; i++) {
		if (max < arr[i]) {
			max = arr[i];
			index = i;
		}
	}

	cout << max << endl;
	cout << index + 1 << endl;
}