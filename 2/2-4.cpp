#include <iostream>
using namespace std;

int main() {
	cout << "5 ���� �Ǽ��� �Է��϶�>>";

	double max, num;
	cin >> max;

	for (int i = 1; i < 5; i++) {
		cin >> num;
		if (num > max) max = num;
	}

	cout << "���� ū �� = " << max;

	return 0;
}