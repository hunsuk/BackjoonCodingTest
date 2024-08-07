#include <iostream>
#include <stdio.h>
using namespace std;
int findRepu(string repuArr[], string repu) {
	for (int i = 0; i < 9; i++) {
		if (repuArr[i].compare(repu) == 0) {
			return i;
		}
	}
}
int main(void) {
	string reputaion[9] = {
		"A+",
		"A0",
		"B+",
		"B0",
		"C+",
		"C0",
		"D+",
		"D0",
		"F"
	};

	double point = 0;
	double amountPoint = 0;


	for (int i = 0; i < 20; i++) {
		string name;
		double inputPoint = 0.0;
		string repu;
		cin >> name >> inputPoint >> repu;
		if (repu.compare("F") == 0) {
			point += inputPoint;
		}
		else if (repu.compare("P") != 0) {
			point += inputPoint;
			amountPoint += inputPoint * (4.5 - (0.5 * findRepu(reputaion, repu)));
		}
	}


	printf("%0.6f", amountPoint / point);
}

	
