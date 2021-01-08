#include <cstdio>
#include <stdlib.h>
#include <string.h>
using namespace std;

int tile(int* arr, int num);

int main() {
	int* arr = NULL; 
	int num = 0;
	int res = 0;
	int i = 0;
	int len = 0;

	scanf("%d", &num);
	arr = (int*)malloc(sizeof(int) * num);
	memset(arr, 0x0, sizeof(int) * num);

	res = tile(arr, num);
	printf("%d", res);
}

int tile(int* arr, int num) {
	if (num == 1) {
		arr[0] = 1;
		return 1;
	}
	else if (num == 2) {
		arr[1] = 2;
		return 2;
	}
	else if (arr[num-1] != 0) {
		return arr[num-1];
	}
	return arr[num-1] = (tile(arr, num - 1) + tile(arr, num - 2)) % 15746;
}
