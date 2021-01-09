#include <iostream>

using namespace std;

int main() {
	double num[4] = { 0.0 };
	double res[4] = { 0.0 };
	int len = 0, i = 0, idx = 0;
	double max_num = 0.0;

	len = sizeof(num) / sizeof(double);
	for (i = 0; i < len; i++) {
		scanf("%d", &num[i]);
	}

	res[0] = num[0] / num[2] + num[1] / num[3];
	res[1] = num[2] / num[3] + num[0] / num[1];
	res[2] = num[3] / num[1] + num[2] / num[0];
	res[3] = num[1] / num[0] + num[3] / num[2];
	
	max_num = res[0];
	for (i = 1; i < len; i++) {
		if (max_num < res[i]) {
			max_num = res[i];
			idx = i;
		}
	}
	printf("%d\n", idx);
}
