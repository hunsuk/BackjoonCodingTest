#include <iostream>
#include <algorithm>
using namespace std;

class Node{
public:
	int age;
	char name[101];
};


bool compare(const void* first, const void* second) {
	
	Node* a = (Node*)first;
	Node* b = (Node*)second;

	return (*a).age < (*b).age;
}


int main(void) {
	int n;
	Node* users[100000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		Node* user = new Node();
		cin >> user->age >> user->name;
		users[i] = user;
	}

	/*for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			Node* temp = users[j + 1];
			if (compare(users[j], users[j + 1]) == 1) {
				users[j + 1] = users[j];
				users[j] = temp;	
			}
		}
	}*/

	stable_sort(users, users + n, compare);
	for (int i = 0; i < n; i++) {
		cout << (*users[i]).age << " " << (*users[i]).name << "\n";
	}

}