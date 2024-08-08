#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	
	int formation[26];
	int result = 0;
	for (int i = 0; i < 26; i++) {
		formation[i] = 10 + i;
	}

	string n;
	int b;

	cin >> n >> b;

	for (int i = 0; i < n.size(); i++) {
		int num = (int)n[i];

		if (num >= 65) {
			result += formation[num - 65] * pow(b, n.size() - (i + 1));
		}
		else {
			result += (num - 48) * pow(b, n.size() - (i + 1));
		}
	}
	cout << result << endl;
}