#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char cof[100];
	int n;
	int total = 0;
	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�.\n";
	
	while (1) {
		cout << "�ֹ�>> ";
		cin >> cof >> n;

		int price = 0;
		if (strcmp(cof, "����������") == 0) {
			price = 2000;
		}
		else if (strcmp(cof, "�Ƹ޸�ī��") == 0) {
			price = 2300;
		}
		else if (strcmp(cof, "īǪġ��") == 0) {
			price = 2500;
		}
		else {
			cout << "���� �޴��Դϴ�.\n";
			break;
		}

		int order = n * price;
		total += order;

		cout << order << "���Դϴ�. ���ְ� �弼��\n";

		if (total > 20000) {
			cout << "���� " << total << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~";
			break;
		}
	}

	return 0;
}