#include <iostream>
#include <cstring>
using namespace std;

int add(int num, int* add_case);

int main() {
	int loop = 0;
	int i = 0;
	int num = 0;
	int add_result = 0;
	int add_case[12] = { 0 };

	cin >> loop;
	for (i = 0; i < loop; i++) {
		cin >> num;
		add_result = add(num, add_case);
		cout << add_result << endl;
	}
}

int add(int num, int* add_case) {
	if (num == 1) {
		return 1;
	}
	if (num == 2) {
		return 2;
	}
	if (num == 3) {
		return 4;
	}
	return add_case[num] = add(num - 1, add_case) + add(num - 2, add_case) + add(num - 3, add_case);

}
