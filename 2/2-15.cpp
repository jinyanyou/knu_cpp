#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int num1, num2;
	char op;

	while (1) {
		cout << "? ";
		cin >> num1 >> op >> num2;

		switch (op) 
		{
		case '+': cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
			break;
		case '-': cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
			break;
		case '*': cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
			break;
		case '/': cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
			break;
		case '%': cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
			break;
		default:
			cout << "�߸� �Է��ϼ̽��ϴ�.";
			break;
		}
	}
	return 0;
}