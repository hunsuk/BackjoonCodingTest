#include <iostream>
#include <cmath>
#include <list>
using namespace std;

int checker(int start, int end , char input[], char map[]);


int main(void) {

	int n;
	int m;
	char input[50 * 50] = { -1 };
	char map1[50 * 50] = { -1 };
	char map2[50 * 50] = { -1 };
	int count1 = 0;
	list<long long> counts;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> input[j + m * i];
		}
	}

	char first = input[0];
	bool change = false;

	
	
	
	map1[0] = input[0];
	map2[0] = (input[0] == 'W') ? 'B' : 'W';
	
	
	for (int i = 0; i < n; i++) {
		bool change2 = false;
		if (change) {
			first = map1[7 + m * (i - 1)];
		}
		
		for (int j = 0; j < m; j++) {
		
			if (change2) {
				if (first == 'W') {
					map1[j + m * i] = 'B';
					map2[j + m * i] = 'W';
				}
				else {
					map1[j + m * i] = 'W';
					map2[j + m * i] = 'B';

				}
			}
			else {
				map1[j + m * i] = first;
				map2[j + m * i] = first == 'W' ? 'B' :'W';
			}

			change2 = !change2;
		}

		change = true;
	}



	for (int i = 0; i < n; i++) {
		if (i + 8 > n) {
			break;
		}
		for (int j = 0; j < m; j++) {
			if (j + 8 > m) {
				break;
			}

			long long count = 0;
			long long count2 = 0;
			for (int y = i; y < 8 + i; y++) {
				for (int x = j; x < 8 + j; x++) {
					if (input[x + m * y] != map1[x + m * y]) {
						count++;
					}

					if (input[x + m * y] != map2[x + m * y]) {
						count2++;
					}
				}
			}
			counts.push_back(count);
			counts.push_back(count2);

		}
	}
	int count = counts.size();
	int min = counts.front();
	counts.pop_front();
	for (int i = 1; i < count; i++) {
		int target = counts.front();
		if (min > target) {
			min = target;
		}

		counts.pop_front();
	}
	cout << min << endl;
}

