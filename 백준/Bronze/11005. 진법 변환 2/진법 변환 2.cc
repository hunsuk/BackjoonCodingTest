#include <iostream>
#include <list>
using namespace std;

int main() {
	list<char> result;
	int input;
	int formatation;


	cin >> input >> formatation;
	int share = input;

	while (share != 1 && share !=0) {
		int remain = 0;
		remain = share % formatation;
		share = share / formatation;

		if (remain < 10) {
			result.push_back((char)(remain+ 48));
		}
		else {
			result.push_back((char)('A' + remain - 10));
		}
	}
	
	if (share == 1) {
		result.push_back('1');
	}

	if (share == 0 && result.size() == 0) {
		cout << "0" << endl;
	}

	int count = result.size();
	
	for (int i = 0; i < count; i++) {
		cout << result.back();
		result.pop_back();
	}
	cout << endl;
}