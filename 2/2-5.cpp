#include <iostream>
using namespace std;

int main() {
	char ch[100];
	int cnt = 0;

	cout << "문자들을 입력하라(100개 미만).\n";
	cin.getline(ch, 100, '\n');

	for (int i = 0; i < 100; i++) {
		if (ch[i] == 'x') cnt++;
	}
	cout << "x의 개수는 " << cnt;

	return 0;
}