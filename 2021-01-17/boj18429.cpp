#include <iostream>
#define WEIGHT 500

using namespace std;

int day, decreased_weight;
int increased_weight[51];
int over_case = 0;
bool visited[51];
int weight = 500;

int cnt_over_weight(int count);

int main(void) {
	cin >> day;
	cin >> decreased_weight;
	for (int i = 0; i < day; i++) {
		cin >> increased_weight[i];
		increased_weight[i] -= decreased_weight;
	}
	cout << cnt_over_weight(0);
}

int cnt_over_weight(int count) {
	if (count == day) {
		over_case++;
	}
	else {
		for (int i = 0; i < day; i++) {
			if (!visited[i]) {
				visited[i] = true;
				if (weight + increased_weight[i] >= WEIGHT) {
					weight += increased_weight[i];
					cnt_over_weight(count + 1);
					weight -= increased_weight[i];
					visited[i] = false;
				}
				else {
					visited[i] = false;
				}

			}
		}
	}
	return over_case;
}
