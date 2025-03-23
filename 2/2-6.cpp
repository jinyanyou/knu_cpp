#include <iostream>
using namespace std;

int main() {
	int i = 0;
	cout << "새 암호를 입력하세요>>";

	char b1[11];
	cin >> b1;

	cout << "새 암호 다시 한 번 입력하세요>>";

	char b2[11];
	cin >> b2;

	if (b1[i] == b2[i]) cout << "같습니다";
	else cout << "같지 않습니다";

	return 0;
}