#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char ch[11];

	while (1) {
		cout << "�����ϰ������ yes�� �Է��ϼ���>>";
		cin.getline(ch, 11, '\n');
		if (strcmp(ch, "yes") == 0) break;
	}
	cout << "�����մϴ�...";

	return 0;
}