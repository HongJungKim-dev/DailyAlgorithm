#include <iostream>
#include <queue>
#include <vector>
#define MAX 101

using namespace std;

queue<int> infected_computer;
int computer_num = 0; 
bool network[MAX][MAX];
bool visited[MAX]; 

void connect_computer(int connected_num);
int infect(int computer_num, int start);

int main() {
	int pair = 0;
	int start = 1;
	cin >> computer_num;
	cin >> pair;
	connect_computer(pair);
	cout << infect(computer_num, start);
}

void connect_computer(int pair) {
	int i = 0;
	int to = 0;
	int from = 0;

	for (i = 0; i < pair; i++) {
		cin >> from;
		cin >> to;
		network[from][to] = 1;
		network[to][from] = 1;
	}
}

int infect(int computer_num, int start) {
	int i = 0;
	int popped = 0;
	int cnt = 0;

	visited[start] = 1;
	infected_computer.push(start);

	while (!infected_computer.empty()) {
		popped = infected_computer.front();
		infected_computer.pop();
		for (i = 1; i < computer_num + 1; i++) {
			if (network[popped][i] == 1 && visited[i] == 0) {
				visited[i] = 1;
				infected_computer.push(i);
				cnt++;
			}

		}
	}
	return cnt;
}
