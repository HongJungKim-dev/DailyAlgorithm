#include <iostream>
#include <algorithm>
using namespace std;
void make_one(int* arr, int N);

int main() {
	int arr[1000001] = { 0 };
	int N = 0;

	cin >> N;
	make_one(arr, N);
	cout << arr[N];
}

void make_one(int* arr, int N) {
	int i = 0;
	arr[1] = 0;
	for (i = 2; i < N+1; i++) {
		arr[i] = arr[i - 1] + 1;
		if (i % 2 == 0) { arr[i] = min(arr[i], arr[i / 2] + 1); }
		if (i % 3 == 0) { arr[i] = min(arr[i], arr[i / 3] + 1); }	
	}
}
