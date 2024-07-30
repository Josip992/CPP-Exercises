#include "vektor.hpp"
using namespace OOP;

int main() {
	
	vec3 b;
	vec3 a;
	cin >> a;
	cout << a;
	b = a;
	cout << b;
	b = 5;
	cout << b;
	vec3 c = a + b;
	cout << c;
	c = a * 3;
	cout << c;
	c = a / 5;
	cout << c;
	a += b;
	cout << a;
	a -= b;
	cout << a;
	a *= b;
	cout << a;
	a /= b;
	cout << a;
	a += 3;
	cout << a;
	a -= 3;
	cout << a;
	a *= 3;
	cout << a;
	a /= 3;
	cout << a;
	if (a == b) {
		cout << "Jednaki!"<<endl;
	}
	else {
		cout << "Nisu jednaki!"<<endl;
	}
	cout << a*b << endl;
	cout << a['y'] << endl;
	normalizacija(a);
	cout << a;

	return 0;
}