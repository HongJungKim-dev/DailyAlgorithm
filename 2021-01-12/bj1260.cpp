#include <iostream>
#include <queue>
#include <cstring>
#define MAX 1001
using namespace std;

int map[MAX][MAX];
int visited[MAX];
queue<int> q;
int vertex_num = 0, edges = 0, start = 0;

void connect_vertex(int vertex1, int vertex2);
void dfs(int start);
void bfs(int start);

int main() {

	int i = 0;
	int vertex1 = 0, vertex2 = 0;
	memset(map, 0x0, sizeof(map));
	memset(visited, 0x0, sizeof(visited));

	cin >> vertex_num >> edges >> start;
	connect_vertex(vertex1, vertex2);

	visited[start] = 1;
	q.push(start);
	dfs(start);
	cout << endl;

	memset(visited, 0x0, sizeof(visited));
	bfs(start);
	cout << endl;
}

void connect_vertex(int vertex1, int vertex2) {
	int i = 0;
	for (i = 0; i < edges; i++) {
		cin >> vertex1 >> vertex2;
		map[vertex1][vertex2] = 1;
		map[vertex2][vertex1] = 1;
	}
}

void dfs(int start) {
	int i = 0;
	int popped = 0;

	while (!q.empty()) {
		popped = q.front();
		q.pop();
		cout << popped << " ";
		for (i = 1; i < vertex_num + 1; i++) {
			if (map[popped][i] == 1 && visited[i] == 0) {
				visited[i] = 1;
				q.push(i);
				dfs(popped);
			}
		}
	}
}

void bfs(int start) {
	int i = 0;
	int popped = 0;

	visited[start] = 1;
	q.push(start);

	while (!q.empty()) {
		popped = q.front();
		q.pop();
		cout << popped << " ";
		for (i = 1; i < vertex_num + 1; i++) {
			if (map[popped][i] == 1 && visited[i] == 0) {
				visited[i] = 1;
				q.push(i);
			}
		}
	}
}
