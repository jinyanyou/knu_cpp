#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char ch[11];

	while (1) {
		cout << "종료하고싶으면 yes를 입력하세요>>";
		cin.getline(ch, 11, '\n');
		if (strcmp(ch, "yes") == 0) break;
	}
	cout << "종료합니다...";

	return 0;
}