#include <iostream>

using namespace std;

int main(void)
{
	int bukect[100] = { 0 };
	int bukectCount;
	int count;

	cin >> bukectCount >> count;

	for (int i = 0; i < bukectCount; i++) {
		bukect[i] = i + 1;
	}


	for (int i = 0; i < count; i++) {
		int left;
		int right;

		cin >> left >> right;

		int temp = bukect[left - 1];
		bukect[left - 1] = bukect[right - 1];
		bukect[right - 1] = temp;
	}

	for (int i = 0; i < bukectCount; i++) {
		cout << bukect[i] << " ";
	}
	
	cout << endl;
}