#include <iostream>
using namespace std;

int main() {
	int i = 0;
	cout << "�� ��ȣ�� �Է��ϼ���>>";

	char b1[11];
	cin >> b1;

	cout << "�� ��ȣ �ٽ� �� �� �Է��ϼ���>>";

	char b2[11];
	cin >> b2;

	if (b1[i] == b2[i]) cout << "�����ϴ�";
	else cout << "���� �ʽ��ϴ�";

	return 0;
}