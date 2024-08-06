#include <iostream>

using namespace std;

int main(void)
{
	int buket[100] = { 0 };
	int buketCount;
	int ballCount;

	cin >> buketCount >> ballCount;

	for (int i = 0; i < ballCount; i++) {
		int start;
		int end;
		int ball;

		cin >> start >> end >> ball;

		for (int j = start; j <= end; j++) {
			buket[j - 1] = ball;
		}
	}


	for (int i = 0; i < buketCount; i++) {
		cout << buket[i] <<" ";
	}
	cout << endl;
}