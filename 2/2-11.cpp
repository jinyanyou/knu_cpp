#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "�� ���� �Է��ϼ���>>";
	cin >> n;

	int sum = 0;
	for (int k = 1; k <= n; k++) {
		sum += k;
	}
	cout << "1���� " << n << "������ ���� " << sum << "�Դϴ�.";

	return 0;
}