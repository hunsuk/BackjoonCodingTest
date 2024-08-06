#include<iostream>
#include<utility>
using namespace std;

int main() {
	int count;
	int arr[1000000];
	int min;
	int max;

	cin >> count;

	for (int i = 0; i < count; i++) {

		cin >> arr[i];
	}

	min = arr[0];
	max = arr[0];

	for (int i = 1; i < count; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}

		if (max < arr[i]) {
			max = arr[i];
		}
	}
	cout << min << " " << max << endl;
}