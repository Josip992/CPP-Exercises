#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include <ctime>
using namespace std;

int unos() {
	int br;
	cout << "Upisite broj: ";
	cin >> br;
	if (cin.fail()) { //za intove
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		throw "Nije broj!";
	}return br;

}
char unos_operator() {
	char oper = 0;
	cout << "Upisite znak operatora: ";
	cin >> oper;
	if (oper != '+' && oper != '-' && oper != '*' && oper != '/') {
		throw "Nije valjan operator!";
	}return oper;
}
float rezultat(int a, int b, char znak) {
	if (b == 0 && znak == '/') {
		throw "Djeljenje s nulom!";
	}
	if (znak == '+') {
		return a + b;
	}
	else if (znak == '-') {
		return a - b;
	}
	else if (znak == '*') {
		return a * b;
	}
	else if (znak == '/'){
		return a / b;
	}
}
int main() {
	int broj1, broj2;
	char znak; 
	vector<string> greska;
	int i = 0;
	int n;
	cout << "Uneiste broj operacija: ";
	cin >> n;

	while(i<n){
		try {
			broj1 = unos();
			broj2 = unos();
			znak = unos_operator();
			cout << broj1 << znak << broj2 << '=' << rezultat(broj1, broj2, znak) << endl;
		}
		catch (char const* error) { //char* ne radi sa string | throw dode ode
			time_t sada = time(0);
			string vrijeme = ctime(&sada); 
			vrijeme.pop_back(); 
			cout << error << endl;
			greska.push_back(vrijeme + " " + error);

		}
		i++;
	}
	for (int i = 0;i<greska.size();i++) {
		cout << greska[i] << endl;
	}
}
