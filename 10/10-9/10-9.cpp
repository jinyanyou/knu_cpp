#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	
	int n;
	while (1) {
		cout << "정수를 입력하세요(0을 입력하면 종료) >> ";
		cin >> n;
		if (n == 0) return 0;
		v.push_back(n);

		double sum = 0;
		for (int i = 0; i < size(v); i++) {
			cout << v[i] << " ";
			sum += v[i];
		}
		cout << endl;
		double avg = sum / size(v);
		cout << "평균 = " << avg << endl;
	}
}