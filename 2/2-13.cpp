#include <iostream>
using namespace std;

int main() {
	int m, n;
	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****\n";
	while (1) {
		cout << "«��:1, ¥��:2, ������:3, ����:4>> ";
		cin >> m;
		if (m < 1 || m > 4) {
			cout << "�ٽ� �ֹ��ϼ���!!\n";
			continue;
		}
		if (m == 4) {
			cout << "���� ������ �������ϴ�.";
			return 0;
		}
		cout << "���κ�?";
		cin >> n;

		switch (m)
		{
		case 1:
			cout << "«�� ";
			break;
		case 2:
			cout << "¥��";
			break;
		case 3:
			cout << "������";
			break;
		}
		cout << n << "�κ� ���Խ��ϴ�\n";
	}

	return 0;
}