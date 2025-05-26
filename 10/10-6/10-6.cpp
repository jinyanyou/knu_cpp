#include <iostream>
using namespace std;

template <class T>
T* remove(T src[], int sizeSrc, T minus[], int sizeMinus, int& retSize) {
    int j;
    T* x = new T[sizeSrc];
    for (int i = 0; i < sizeSrc; i++) {
        for (j = 0; j < sizeMinus; j++) {
            if (src[i] == minus[j]) {
                --j;
                break;
            }
        }
        if (j == sizeMinus) {
            x[retSize] = src[i];
            retSize++;
        }
    }
    return x;
}

int main(){
    int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int b[] = { 1, 3, 5, 7, 9 };
    int rsize = 0;
    int* x = remove(a, 10, b, 5, rsize);

    for (int i = 0; i < rsize; i++) cout << x[i] << ' ';
    cout << endl;

    delete[] x;
}