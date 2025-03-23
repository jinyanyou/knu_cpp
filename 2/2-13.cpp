#include <iostream>
using namespace std;

int main() {
	int m, n;
	cout << "***** 승리장에 오신 것을 환영합니다. *****\n";
	while (1) {
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>> ";
		cin >> m;
		if (m < 1 || m > 4) {
			cout << "다시 주문하세요!!\n";
			continue;
		}
		if (m == 4) {
			cout << "오늘 영업은 끝났습니다.";
			return 0;
		}
		cout << "몇인분?";
		cin >> n;

		switch (m)
		{
		case 1:
			cout << "짬뽕 ";
			break;
		case 2:
			cout << "짜장";
			break;
		case 3:
			cout << "군만두";
			break;
		}
		cout << n << "인분 나왔습니다\n";
	}

	return 0;
}