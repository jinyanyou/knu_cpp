#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int a = 0, index = 0;

	cout << "문자열 입력 >> ";
	getline(cin, str);

	while (true) {
		index = str.find('a', index + 1);
		if (index == -1) break;
		else a++;
	}
	cout << "문자 a는 " << a << "개 있습니다." << endl;

	return 0;
}