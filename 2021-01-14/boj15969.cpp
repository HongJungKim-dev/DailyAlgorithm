#include <iostream>
#include <vector>

using namespace std;

int main() {
	int len = 0, i = 0;
	int min = 0, max = 0;

	vector<int> arr;

	scanf("%d", &len);
	//배열 생성
	arr.assign(len, 0);
	//배열 입력
	for (i = 0; i < len; i++) {
		scanf("%d", &arr[i]);
	}

	min = arr[0];
	max = arr[0];
	// 최대, 최소 수 저장
	for (i = 1; i < len; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
		else if (max < arr[i]) {
			max = arr[i];
		}
	}
	printf("%d", max - min);
}
