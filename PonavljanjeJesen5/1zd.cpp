////1. (15) Proširite klasu
////class complex { double re, im; };
////tako da program
////int main()
////{
////	complex a(2, -1), b(-1, 5);
////	complex c = a + b;
////	cout << c;
////}
////ispisuje rezultat
////0.5 - i
//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//class Complex {
//public:
//	double re, im;
//	Complex(double x, double y)
//	{
//		re = x;
//		im = y;
//	}
//
//	friend ostream& operator<<(ostream& os, const Complex& a) {
//		if (a.re < 0) {
//			os << a.im << " -" << a.re << "*i";
//		}
//		os << a.im << "+" << a.re << "*i";
//		return os;
//	}
//	Complex& operator=(const Complex& other) {
//		re = other.re;
//		im = other.im;
//		return *this;
//	}
//	Complex operator+(const Complex& other) {
//		return Complex(this->re + other.re, this->im + other.im);
//	}
//};
//
//
//int main()
//{
//	Complex a(2, -1), b(-1, 5);
//	Complex c = a + b;
//	cout << c;
//}