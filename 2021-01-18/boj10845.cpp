#include <iostream>
#include <cstring>
#include <queue>

char str[6];
int num;
int loop;

using namespace std;

int main() {
	int i = 0;
	queue<int> q;
	
	cin >> loop;
	for (i = 0; i < loop; i++) {
		cin >> str;
		//cin.clear();
		if (strcmp(str, "push") == 0) {
			cin >> num;
			q.push(num);
		}
		else if (strcmp(str, "pop") == 0) {
			if (!q.empty()) {
				cout << q.front() << endl;
				q.pop();
			}
			else {
				cout << "-1" << endl;
			}
		}
		else if (strcmp(str, "size") == 0) {
			cout << q.size() << endl;
		}
		else if (strcmp(str, "empty") == 0) {
			if (!q.empty()) {
				cout << "0" << endl;
			}
			else {
				cout << "1" << endl;
			}
		}
		else if (strcmp(str, "front") == 0) {
			if (!q.empty()) {
				cout << q.front() << endl;
			}
			else {
				cout << "-1" << endl;
			}
		}
		else if (strcmp(str, "back") == 0) {
			if (!q.empty()) {
				cout << q.back() << endl;
			}
			else {
				cout << "-1" << endl;
			}
		}
	}
}
