#include <iostream>
#include <algorithm>
using namespace std;

typedef struct node {
	int x;
	int y;
} Node;


bool compare(Node a, Node b) {
	if (a.x == b.x) {			// x좌표가 같으면
		return a.y < b.y;		// b의 y좌표가 더 크도록 정렬 
	}
	else {						// x좌표가 다르면
		return a.x < b.x;		// b의 x좌표가 더 크도록 정렬 (=x좌표가 증가하는 순으로)
	}
}

int main(void) {
	
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	node nodes[100001];
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> nodes[i].x >> nodes[i].y;
	}

	sort(nodes, nodes + n, compare);

	for (int i = 0; i < n; i++) {
		cout << nodes[i].x << " " << nodes[i].y << "\n";
	}
	return 0;
	
}