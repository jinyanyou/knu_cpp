#include <iostream>
using namespace std;

int main() {
	char ch[100];
	int cnt = 0;

	cout << "���ڵ��� �Է��϶�(100�� �̸�).\n";
	cin.getline(ch, 100, '\n');

	for (int i = 0; i < 100; i++) {
		if (ch[i] == 'x') cnt++;
	}
	cout << "x�� ������ " << cnt;

	return 0;
}