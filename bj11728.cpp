#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int* arr1 = NULL;
	int* arr2 = NULL;
	int* res = NULL;
	int i = 0, num1 = 0, num2 = 0;

	//배열 크기 2개 입력
	scanf("%d%d",&num1, &num2);
	////배열 2개 생성
	arr1 = new int[num1];
	arr2 = new int[num2];
	//배열 2개 컨텐츠 입력
	for (i = 0; i < num1; i++) {
		scanf("%d", &arr1[i]);
	}

	for (i = 0; i < num2; i++) {
		scanf("%d",&arr2[i]);
	}
	//합칠 배열 크기로 res동적할당
	res = new int[num1 + num2];
	//res에 합치기
	for (i = 0; i < num1; i++) {
		res[i] = arr1[i];
	}

	for (i = 0; i < num2; i++) {
		res[i+num1] = arr2[i];
	}
	/*for (i = 0; i < num1 + num2; i++) {
		scanf("%d", &res[i]);
	}*/
	//정렬
	stable_sort(res, res + num1 + num2);
	//출력 
	for (i = 0; i < num1 + num2; i++) {
		printf("%d ", res[i]);
	}
	//해제
	delete[] arr2;
	delete[] arr1;
	delete[] res;
}
