#include <iostream>

using namespace std;

int main(void) {
	int caseCount;
	cin >> caseCount;

	for (int i = 0; i < caseCount; i++) {
		int input;
		int quarter = 0;
		int dime = 0;
		int nickel = 0;
		int penny = 0;
		
		cin >> input;
		
		quarter = input / 25;
		input = input % 25;
		
		dime = input / 10;
		input = input % 10;

		nickel = input / 5;
		input = input % 5;

		penny = input / 1;
		
		cout << quarter << " " << dime << " " << nickel << " " << penny << endl;
	}


}