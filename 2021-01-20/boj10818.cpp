#include <stdio.h>

int main() {
	int arr_len = 0, i = 0, max = 0, min = 0;
	int* arr = NULL;

	scanf("%d", &arr_len);
	arr = (int*)malloc(sizeof(int)*arr_len);
	for (i = 0; i < arr_len; i++) {
		scanf("%d", &arr[i]);
	}

	min = arr[0];
	max = arr[0];
	for (i = 1; i < arr_len; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
		else if(min > arr[i]){
			min = arr[i];
		}
	}
	printf("%d %d", min, max);
}
