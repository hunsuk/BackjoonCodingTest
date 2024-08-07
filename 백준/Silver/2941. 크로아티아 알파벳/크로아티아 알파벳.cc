#include <iostream>

using namespace std;

int main() {

	
	int croatiaSpell[8] = {
		'c' + '=',
		'c' + '-',
		'd' + 'z' + '=',
		'd' + '-',
		'l' + 'j',
		'n' + 'j',
		's' + '=',
		'z' + '='
	};
	int count = 0;
	string input;
	cin >> input;

	for (int i = 0; i < input.size(); i) {
		if (input[i] == 'c') {
			if (input.size() > i + 1) {
				if (input[i + 1] == '=' || input[i + 1] == '-') {
					count++;
					i += 2;
					continue;
				}
			}
		}
		else if (input[i] == 'd') {
			if (input.size() > i + 2) {
				if (input[i + 1] == 'z' && input[i + 2] == '=') {
					count++;
					i += 3;
					continue;
				}
			}

			if (input.size() > i + 1) {
				if (input[i + 1] == '-') {
					count++;
					i += 2;
					continue;
				}
			}
		}
		else if (input[i] == 'l') {
			if (input.size() > i + 1) {
				if (input[i + 1] == 'j') {
					count++;
					i += 2;
					continue;
				}
			}
		}
		else if (input[i] == 'n') {
			if (input.size() > i + 1) {
				if (input[i + 1] == 'j') {
					count++;
					i += 2;
					continue;
				}
			}
		}
		else if (input[i] == 's') {
			if (input.size() > i + 1) {
				if (input[i + 1] == '=') {
					count++;
					i += 2;
					continue;
				}
			}
		}
		else if (input[i] == 'z') {
			if (input.size() > i + 1) {
				if (input[i + 1] == '=') {
					count++;
					i += 2;
					continue;
				}
			}
		}


		i++;
		count++;
	}

	cout << count << endl;
}