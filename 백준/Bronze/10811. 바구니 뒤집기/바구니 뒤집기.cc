#include<iostream>

using namespace std;

int main() {
	int bucket[100] = { 0 };

	int bucketCount;
	int lineCount;

	cin >> bucketCount >> lineCount;


	for (int i = 0; i < bucketCount; i++) {
		bucket[i] = i + 1;
	}

	for (int i = 0; i < lineCount; i++) {
		int start;
		int end;

		cin >> start >> end;

		start -= 1;
		end -= 1;
		
		int temp[100] = { 0 };

	
		
		for (int j = end, k = start; j >= start; j--, k++) {
			temp[k] = bucket[j];
		}
		
		for (int j = start; j <= end; j++) {
			bucket[j] = temp[j];
		}

	}
	
	for (int i = 0; i < bucketCount; i++) {
		cout << bucket[i] << " ";
	}

	cout << endl;
}