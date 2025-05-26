#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 1) { this->radius = radius; }
	int getRadius() { return radius; }
};

template <class T>
T bigger(T a, T b) {
	if (a > b) return a;
	else return b;
}

Circle bigger(Circle a, Circle b) {
	if (a.getRadius() > b.getRadius()) return a;
	else return b;
}

int main() {
	int a = 20, b = 50, c;
	c = bigger(a, b);
	cout << "20과 50 중 큰 값은 " << c << endl;
	Circle waffle(10), pizza(20), y;
	y = bigger(waffle, pizza);
	cout << "waffle과 pizza 중 큰 것의 반지름은 " << y.getRadius() << endl;
}

/* 문제의 오류 main() 함수의 y = bigger(waffle, pizza); 에서 발생

	bigger 템플릿을 Circle 타입으로 구체화 필요
	이 코드에서 if(a > b)문의 연산자 > 가 작성 되어 있지 않기 때문에 컴파일 오류 발생
	해결 : Circle bigger(Circle a, Circle b); 함수 중복 작성
*/