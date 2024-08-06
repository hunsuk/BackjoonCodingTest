#include<iostream>

using namespace std;

int main() {
	int count;
	int arr[100] = { -101 };
	int target;
	int result = 0;
	cin >> count;

	for (int i = 0; i < count; i++) {
		cin >> arr[i];
	}
	
	cin >> target;
	for (int i = 0; i < count; i++) {
		if (arr[i] == target) {
			result++;
		}
	}
	cout << result;

	return 0;
}