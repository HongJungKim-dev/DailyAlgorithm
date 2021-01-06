#include <stdio.h>

int main() {
	int n = 0, i = 0;
	int d[1001] = { 0 };
	d[1] = 1;
	d[2] = 2;
	scanf("%d", &n);
	for (i = 3; i <= n; i++) {
		d[i] = (d[i - 2] + d[i - 1]) % 10007;
	}
	printf("%d", d[n]);
}
