#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char name[5][100];
	cout << "5 ���� �̸���';'���� �����Ͽ� �Է��ϼ���\n>>";

	for (int i = 0; i < 5; i++) {
		cin.getline(name[i], 100, ';');
	}

	int max = 0, maxi = 0;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ":" << name[i] << "\n";
		int len = strlen(name[i]);
		if (len > max) {
			max = len;
			maxi = i;
		}
	}

	cout << "���� �� �̸��� " << name[maxi];

	return 0;
}