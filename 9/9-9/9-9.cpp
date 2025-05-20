#include <iostream>
using namespace std;

class Printer {
protected:
	string model;
	string manufacturer;
	int printedCount;
	int availableCount;
public:
	virtual void print(int pages) = 0;
	virtual void show() = 0;
};

class InkJetPrinter : public Printer {
protected:
	int ink{ 10 };
public:
	InkJetPrinter() {
		model = "Officejet V40";
		manufacturer = "HP";
		availableCount = 5;
		show();
	}
	int availableInk() { return ink; }
	void print(int pages) {
		if (availableCount < pages || ink < pages) {
			cout << "용지가 부족하여 출력할 수 없습니다." << endl;
		}
		else
		{
			availableCount -= pages;
			ink -= pages;
			cout << "프린트하였습니다." << endl;
		}
	}
	void show()
	{
		cout << "잉크젯 : " << model << ", " << manufacturer << ", 남은 종이 " << availableCount << ", 남은 잉크 " << availableInk() << endl;
	}
};

class LaserPrinter : public Printer {
protected:
	int toner{ 20 };
public:
	LaserPrinter() {
		model = "SCX-6x45";
		manufacturer = "삼성전자";
		availableCount = 3;
		show();
	}
	int availableToner() { return toner; }
	void print(int pages) {
		if (availableCount < pages || toner < pages) {
			cout << "용지가 부족하여 출력할 수 없습니다." << endl;
		}
		else
		{
			availableCount -= pages;
			toner -= pages;
			cout << "프린트하였습니다." << endl;
		}
	}
	void show()
	{
		cout << "잉크젯 : " << model << ", " << manufacturer << ", 남은 종이 " << availableCount << ", 남은 토너 " << availableToner() << endl;
	}
};

int main()
{
	cout << "현재 작동중인 2 대의 프린터는 아래와 같다." << endl;
	InkJetPrinter inkjet;
	LaserPrinter laser;
	int p, count;
	char c;
	while (1)
	{
	reInput:
		cout << "프린터(1: 잉크젯, 2: 레이저)와 매수 입력 >> ";
		cin >> p >> count;
		if (p == 1)
		{
			inkjet.print(count);
		}
		else if (p == 2)
		{
			laser.print(count);
		}
		else
		{
			cout << "입력이 잘못되었습니다. 다시 입력해주세요. " << endl;
			goto reInput;
		}
		inkjet.show();
		laser.show();

		cout << "계속 프린트 하시겠습니까(y/n) >> ";
		cin >> c;
		if (c == 'y') {
			cout << endl;
			continue;
		}
		else if (c == 'n')
		{
			cout << endl;
			break;
		}
	}
}