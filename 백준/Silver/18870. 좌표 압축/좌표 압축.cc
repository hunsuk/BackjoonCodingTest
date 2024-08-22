#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int compare(const void* a, const void* b) {

	if ((*(int*)a > *(int*)b)) {
		return -1;
	}

	return 1;
}



int main(void) {
	int n;
	cin >> n;
	vector<int> sort_inputs(n);
	vector<int> inputs(n);


	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		inputs[i] = temp;
		sort_inputs[i] = temp;
	}
	
	sort(sort_inputs.begin(), sort_inputs.end());
	sort_inputs.erase(unique(sort_inputs.begin(), sort_inputs.end()),sort_inputs.end());

	int count = 0;

	for (int i : sort_inputs)
		count++;


	for (int target : inputs) {	
		int left = 0;
		int right = count - 1;
	
		while (left <= right) {
			int middle = (left + right) / 2;

			if (sort_inputs[middle] < target) {
				left = middle + 1;
			}
			else if (sort_inputs[middle] > target) {
				right = middle - 1;

			}
			else {
				cout << middle << " ";
				break;
			}
		}
	}
	


}