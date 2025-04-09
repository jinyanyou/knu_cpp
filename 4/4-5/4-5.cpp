#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	string str;
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;

	while (1) {
		cout << ">>";
		getline(cin, str);
		if (str.compare("exit") == 0) break;

		srand((unsigned)time(0));
		int n = rand() % str.length();

		srand((unsigned)time(0));
		char ch = 'a' + rand() % 26;

		str[n] = ch;

		cout << str << endl;
	}
	return 0;
}