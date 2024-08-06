#include <iostream>
#include <list>
using namespace std;
int main(void) {
	list<int> left;
	list<int> right;

	while (true) {
		int num1;
		int num2;
		cin >> num1 >> num2;

		if (num1 == 0 && num2 == 0)
			break;
		left.push_back(num1);
		right.push_back(num2);
	}

	for (int i = 0; left.size(); i++) {
		int result = left.front() + right.front();
		cout << result << endl;
		left.pop_front();
		right.pop_front();
	}
}
