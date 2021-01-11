#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int loop = 0;
	vector<int> input;
	vector<int> subTotal;
	int num = 0;
	int i = 0;
	int res = -1000;

	cin >> loop;
	input.assign(loop, 0);
	subTotal.assign(loop, 0);

	for (i = 0; i < loop; i++) {
		cin >> input[i];
	}

	subTotal[0] = input[0];
	for (i = 1; i < loop; i++) {
		subTotal[i] = max(subTotal[i-1] + input[i], input[i]);
		res = max(res, subTotal[i]);
	}
	res = max(res, subTotal[0]);
	cout << res;
}
