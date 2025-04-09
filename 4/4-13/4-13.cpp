#include <iostream>
#include <string>
using namespace std;

class Histogram {
	string txt;
	int apl[26];
public:
	Histogram();
	Histogram(string txt);
	void putc(char c);
	void put(string txt);
	void print();
	~Histogram() { }
};

Histogram::Histogram() {
	this->txt = "";
}

Histogram::Histogram(string txt) {
	this->txt = txt;
}

void Histogram::put(string txt) {
	this->txt.append(txt);
}

void Histogram::putc(char c) {
	char buf[] = { c, '\0' };
	this->txt.append(buf);
}

void Histogram::print() {
	for (int i = 0; i < 26; i++)
		apl[i] = 0;

	cout << txt << endl << endl;

	for (int i = 0; i < txt.length(); i++) {
		if (isalpha(txt[i])) { 
			char c = tolower(txt[i]);
			apl[c - 'a']++;
		}
	}

	int n = 0;
	for (int i = 0; i < 26; i++) n += apl[i];
	cout << "ÃÑ ¾ËÆÄºª ¼ö " << n << endl;
	cout << endl;

	for (int i = 0; i < 26; i++) {
		cout << char('a' + i) << " (" << apl[i] << ")" << '\t' << ": ";
		for (int j = 0; j < apl[i]; j++)
			cout << '*';
		cout << endl;
	}
}

int main() {
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
}