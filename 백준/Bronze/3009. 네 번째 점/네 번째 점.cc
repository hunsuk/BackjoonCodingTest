#include <iostream>

using namespace std;

int main(void)
{
	int xInput[3];
	int yInput[3];
	

	cin >> xInput[0] >> yInput[0];
	cin >> xInput[1] >> yInput[1];
	cin >> xInput[2] >> yInput[2];
	
	int xTarget;
	int yTarget;

	int xAnswer;
	int yAnswer;

	if (xInput[0] == xInput[1]) {
		xTarget = xInput[0];
	}
	else if (xInput[0] == xInput[2]) {
		xTarget = xInput[0];
	}
	else if (xInput[1] == xInput[2]) {
		xTarget = xInput[1];
	}

	if (yInput[0] == yInput[1]) {
		yTarget = yInput[0];
	}
	else if (yInput[0] == yInput[2]) {
		yTarget = yInput[0];
	}
	else if (xInput[1] == xInput[2]) {
		yTarget = yInput[1];
	}

	for (int i = 0; i < 3; i++) {
		if (xInput[i] != xTarget || yInput[i] != yTarget) {
			if (xInput[i] == xTarget) {
				yAnswer = yInput[i];
			}

			if (yInput[i] == yTarget) {
				xAnswer = xInput[i];
			}
		}
	}

	cout << xAnswer << " " << yAnswer << endl;

}