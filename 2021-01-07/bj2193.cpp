#include <iostream>
using namespace std;

long long i_chin_soo(int number_of_digit, long long* num);

int main() {
	int number_of_digit;
	long long num[91] = { 0 };

	cin >> number_of_digit;
	cout << i_chin_soo(number_of_digit, num);
}

long long i_chin_soo(int number_of_digit, long long* num) {
	int i = 0;
	num[1] = 1;
	num[2] = 1;

	for (i = 3; i < number_of_digit+1; i++) {
		num[i] = num[i - 1] + num[i - 2];
	}
	return num[i-1];
}
