#include <iostream>
using namespace std;

int main() {
	cout << "5 개의 실수를 입력하라>>";

	double max, num;
	cin >> max;

	for (int i = 1; i < 5; i++) {
		cin >> num;
		if (num > max) max = num;
	}

	cout << "제일 큰 수 = " << max;

	return 0;
}