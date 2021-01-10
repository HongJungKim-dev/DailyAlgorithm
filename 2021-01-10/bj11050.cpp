#include <iostream>

using namespace std;

int binomial(int n, int k);

int main() {
	int n = 0;
	int k = 0;
	cin >> n;
	cin >> k;
	cout << binomial(n, k);
}

int binomial(int n, int k) {
	if (n == k || k == 0) { return 1; }
	else { return binomial(n - 1, k) + binomial(n - 1, k - 1); }
}
