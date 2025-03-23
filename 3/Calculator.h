#ifndef CALCULATOR_H
#define CALCULATOR_H

class Add {
protected:
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();
};

class Sub {
protected:
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();
};

class Mul {
protected:
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();
};

class Div {
protected:
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();
};
#endif // !CALCULATOR_H