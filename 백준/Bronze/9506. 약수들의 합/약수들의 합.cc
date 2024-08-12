#include<iostream>
#include<list>
using namespace std;

int main(void) {

	while (true) {
		int input;
		list<int> measuer;
		list<int> out;
		cin >> input;

		if (input == -1) {
			break;
		}

		for (int i = 1; i < input - 1; i++) {
			if (input % i == 0) {
				measuer.push_back(i);
			}
		}
		int sum = 0;
		while (measuer.size() != 0) {
			sum += measuer.front();
			out.push_back(measuer.front());
			measuer.pop_front();
		}

		if (input == sum) {
			cout << input << " " << "= ";
			int count = out.size();
			
			for (int i = 0; i < count - 1; i++) {
				cout << out.front() << " + ";
				out.pop_front();
			}
			cout << out.front() << endl;
		}
		else {
			cout << input << " is NOT perfect." << endl;
		}

	}
	return 0;
}
