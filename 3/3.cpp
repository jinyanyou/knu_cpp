// 1
/*
#include <iostream>
using namespace std;

class Tower {
public:
    int height;
    Tower(int h = 1) : height(h) {}

    int getHeight() {
        return height;
    }
};

int main() {
    Tower myTower;
    Tower seoulTower(100);
    cout << "높이는 " << myTower.getHeight() << "미터" << endl;
    cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;

    return 0;
}*/

//2
/*
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Date {
private:
    int year, month, day;

public:
    Date(int y, int m, int d) : year(y), month(m), day(d) {}

    Date(string date) {
        stringstream ss(date);
        string token;
        getline(ss, token, '/');
        year = stoi(token);
        getline(ss, token, '/');
        month = stoi(token);
        getline(ss, token, '/');
        day = stoi(token);
    }

    int getYear() {
        return year;
    }

    int getMonth() {
        return month;
    }

    int getDay() {
        return day;
    }

    void show() {
        cout << year << "년" << month << "월" << day << "일" << endl;
    }
};

int main() {
    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");
    independenceDay.show();
    cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;

    return 0;
}*/

//3
/*
#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    string owner;
    int id;
    int balance;
public:
    Account(string owner, int id, int b);

    string getOwner() {
        return owner;
    }
    void deposit(int amount) {
        balance += amount;
    }
    int withdraw(int amount) {
        if (amount <= balance) {
            balance -= amount;
            return amount;
        }
        else return 0;
    }
    int inquiry() {
        return balance;
    }
};

Account::Account(string owner, int id, int b)
    : owner(owner), id(id), balance(b) {}

int main() {
    Account a("kitae", 1, 5000);
    a.deposit(50000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
    int money = a.withdraw(20000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}*/

//4
/*
#include <iostream>
using namespace std;

class CoffeeMachine {
private:
    int coffee;
    int water;
    int sugar;

public:
    CoffeeMachine(int c, int w, int s)
        : coffee(c), water(w), sugar(s) {}

    void drinkEspresso() {
        if (coffee >= 1 && water >= 1) {
            coffee -= 1;
            water -= 1;
        }
    }

    void drinkAmericano() {
        if (coffee >= 1 && water >= 2) {
            coffee -= 1;
            water -= 2;
        }
    }

    void drinkSugarCoffee() {
        if (coffee >= 1 && water >= 2 && sugar >= 1) {
            coffee -= 1;
            water -= 2;
            sugar -= 1;
        }
    }

    void show() {
        cout << "커피 머신 상태, 커피:" << coffee << "  물:" << water << "   설탕:" << sugar << endl;
    }

    void fill() {
        coffee = 10;
        water = 10;
        sugar = 10;
    }
};

int main() {
    CoffeeMachine java(5, 10, 3);
    java.drinkEspresso();
    java.show();
    java.drinkAmericano();
    java.show();
    java.drinkSugarCoffee();
    java.show();
    java.fill();
    java.show();
}*/

//5
/*
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
public:
    Random() {
        srand(time(0));
    }

    int next() {
        return rand();
    }

    int nextInRange(int a, int b) {
        return a + rand() % (b - a + 1);

    }
};

int main() {
    Random r;
    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개 --" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.next();
        cout << n << ' ';
    }
    cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10 개 --" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.nextInRange(2, 4);
        cout << n << ' ';
    }
    cout << endl;
}*/

//6
/*
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom {
public:
    EvenRandom() {
        srand((unsigned int)time(0));
    }

    int next() {
        int n = rand();
        return (n % 2 == 0) ? n : n + 1;
    }

    int nextInRange(int a, int b) {
        if (a % 2 != 0) a++;
        if (b % 2 != 0) b--;

        int n = a + (rand() % ((b - a) / 2 + 1)) * 2;
        return n;
    }
};

int main() {
    EvenRandom r;
    cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10 개 --" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.next();
        cout << n << ' ';
    }
    cout << endl << endl << "-- 2에서 " << "10 까지의 짝수 랜덤 정수 10 개 --" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.nextInRange(2, 10);
        cout << n << ' ';
    }
    cout << endl;
}*/

//7
/*
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom {
public:
    EvenRandom() {
        srand((unsigned int)time(0));
    }

    int next() {
        int n = rand();
        return (n % 2 == 0) ? n : n + 1;
    }

    int nextInRange(int a, int b) {
        if (a % 2 == 0) a++;
        if (b % 2 == 0) b--;

        int n = a + (rand() % ((b - a) / 2 + 1)) * 2;
        return n;
    }
};

int main() {
    EvenRandom r;
    cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10 개 --" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.next();
        cout << n << ' ';
    }
    cout << endl << endl << "-- 2에서 " << "9 까지의 홀수 랜덤 정수 10 개 --" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.nextInRange(2, 9);
        cout << n << ' ';
    }
    cout << endl;
}*/

//8
/*
#include <iostream>
#include <string>
using namespace std;

class Integer {
private:
    int value;
public:
    Integer(int a) {
        value = a;
    }
    Integer(string s) {
        value = stoi(s);
    }
    int get() {
        return value;
    }
    void set(int a) {
        value = a;
    }
    bool isEven() {
        return value % 2 == 0;
    }
};

int main() {
    Integer n(30);
    cout << n.get() << ' ';
    n.set(50);
    cout << n.get() << ' ';

    Integer m("300");
    cout << m.get() << ' ';
    cout << m.isEven();
}*/

//9
/*
#include <iostream>
using namespace std;

class Oval {
private:
    int width;
    int height;
public:
    Oval() {
        width = 1; height = 1;
    }
    Oval(int x, int y) {
        width = x; height = y;
    }
    int getWidth() {
        return width;
    }
    int getHeight() {
        return height;
    }
    void set(int w, int h) {
        width = w; height = h;
        cout << "width = " << width << ", height = " << height << endl;
    }
    void show() {
        cout << "Oval 소멸 : width = " << width << ", height = " <<  height << endl;
    }
};

int main() {
    Oval a, b(3, 4);
    a.set(10, 20);
    cout << b.getWidth() << ", " << b.getHeight() << endl;
    b.show();
    a.show();
}*/

//10.1
/*
#include <iostream>
using namespace std;

class Add {
private:
    int a, b;
public:
    void setValue(int x, int y) {
        a = x; b = y;
    }
    int calculate() {
        return a + b;
    }
};

class Sub {
private:
    int a, b;
public:
    void setValue(int x, int y) {
        a = x; b = y;
    }
    int calculate() {
        return a - b;
    }
};

class Mul {
private:
    int a, b;
public:
    void setValue(int x, int y) {
        a = x; b = y;
    }
    int calculate() {
        return a * b;
    }
};

class Div {
private:
    int a, b;
public:
    void setValue(int x, int y) {
        a = x; b = y;
    }
    int calculate() {
        return a / b;
    }
};

int main() {
    Add a;
    Sub s;
    Mul m;
    Div d;

    while (1) {
        int x, y;
        char op;
        cout << "두 정수와 연산자를 입력하세요>> ";
        cin >> x >> y >> op;

        switch (op) {
        case'+':
            a.setValue(x, y);
            cout << a.calculate() << endl;
            break;
        case'-':
            s.setValue(x, y);
            cout << s.calculate() << endl;
            break;
        case'*':
            m.setValue(x, y);
            cout << m.calculate() << endl;
            break;
        case'/':
            d.setValue(x, y);
            cout << d.calculate() << endl;
            break;
        default:
            cout << "잘못된 연산자입니다." << endl;
        }
    }
    return 0;
}*/


//10.2
/*
#include <iostream>
#include "Calculator.h"
using namespace std;

int main() {
    Add a;
    Sub s;
    Mul m;
    Div d;

    while (1) {
        int x, y;
        char op;
        cout << "두 정수와 연산자를 입력하세요>> ";
        cin >> x >> y >> op;

        switch (op) {
        case'+':
            a.setValue(x, y);
            cout << a.calculate() << endl;
            break;
        case'-':
            s.setValue(x, y);
            cout << s.calculate() << endl;
            break;
        case'*':
            m.setValue(x, y);
            cout << m.calculate() << endl;
            break;
        case'/':
            d.setValue(x, y);
            cout << d.calculate() << endl;
            break;
        default:
            cout << "잘못된 연산자입니다." << endl;
        }
    }
    return 0;
}*/

//11
/*
#include <iostream>
#include "Box.h"
using namespace std;

int main() {
    Box b(10, 2);
    b.draw();
    cout << endl;
    b.setSize(7, 4);
    b.setFill('^');
    b.draw();
}*/

//12

#include <iostream>
#include "Ram.h"
using namespace std;

int main() {
    Ram ram;
    ram.write(100, 20);
    ram.write(101, 30);
    char res = ram.read(100) + ram.read(101);
    ram.write(102, res);
    cout << "102 번지의 값 = " << (int)ram.read(102) << endl;
}