#include <iostream>

using namespace std;

int main(void) {
	int n = 0, k = 0;
	int arr[1000];

	fill_n(arr, n, 0);
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	for (int i = 0; i < n - 1; i++) {
		int min = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[min] > arr[j]) {
				min = j;
			}
		}
		swap(arr[min], arr[i]);
	}

	cout << arr[n - k] << endl;
}