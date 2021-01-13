#include <iostream>
#include <queue>

using namespace std;
#define MAX 25
bool MAP[MAX][MAX] = { false };
char str[MAX] = { false };
bool visited[MAX][MAX] = { false };
int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };
int len = sizeof(dx) / sizeof(int);
int m = 0;

int bfs(int x, int y);

int main() {
	int i = 0;
	int j = 0;
	int danji = 0;
	char c = 0;
	priority_queue<int, vector<int>, greater<int>>pq;

	cin >> m;
	//array input
	for (i = 0; i < m; i++) {
		cin >> str;
		for (j = 0; j < m; j++) {
			MAP[i][j] = str[j] - '0';
		}
	}

	//bfs , priority_queue create
	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			if (visited[i][j] == false && MAP[i][j] == true) {
				danji = bfs(i, j);
				pq.push(danji);
			}
		}
	}

	//priority_queue print
	cout << pq.size() << endl;
	while (!pq.empty()) {
		cout << pq.top() << endl;
		pq.pop();
	}
}

int bfs(int x, int y) {
	int cnt = 0;
	int i = 0;
	int nx = 0;
	int ny = 0;
	queue<pair<int, int>> q;
	q.push(make_pair(x, y));
	visited[x][y] = true;
	cnt++;

	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (i = 0; i < len; i++) {
			nx = dx[i] + x;
			ny = dy[i] + y;
			if (0 <= nx && nx < m && 0 <= ny && ny < m 
					&& MAP[nx][ny] == true && visited[nx][ny] == false) {
				q.push(make_pair(nx, ny));
				visited[nx][ny] = true;
				cnt++;
			}
		}
	}
	return cnt;
}
