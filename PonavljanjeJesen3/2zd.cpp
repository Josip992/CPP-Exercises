//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<fstream>
//
//using namespace std;
//
////2. Napisati klasu BasePoint za točke u dvodimenzionalnom prostoru sa pozicijom(double x, y) i brzinom
////vx, vy.Napisati funkcije članove :
////• init() postavlja pozicije x i y na nulu.
////• setvelocity() čisto virtualna funkcija
////• move(double dt) mijenja poziciju točke po formuli x = x + dx, y = y + dy
////• display() ispisuje x i y na terminal
////Napisati dvije izvedene klase za koje vrijedi(v x, v y) = (−y, x) za prvu i(v x, v y) = (x, y) za drugu.
////Definirate pointer na BasePoint tako da sljedeći kôd radi :
///// / d o N = 1 0 s t e p s w i t h t i m e s t e p d t = 0 . 1
////p - > init();
////for (int i = 0; i < 10; ++i)
////{
////	p - > setvelocity();
////	p - > move(0.1);
////}
////p - > display();
//
//class BasePoint {
//public:
//	double x;
//	double y;
//	double vx; //brzina x i brzina y
//	double vy;
//
//	void init() {
//		x = 0;
//		y = 0;
//	}
//
//	virtual void setvelocity() = 0;
//
//	void move(double dt) {
//		x += dt;
//		y += dt;
//	}
//
//	void display() {
//		cout << "X: " << x << endl;
//		cout << "Y: " << y << endl;
//	}
//};
//
//class Point2 :public BasePoint {
//	void setvelocity() {
//		vx = x;
//		vy = y;
//	}
//};
//
//class Point1 :public BasePoint {
//	void setvelocity() {
//		vx = -y;
//		vy = x;
//	}
//};
//int main() {
//
//	BasePoint* p;
//	Point1 p1;
//	p = &p1;
//
//	p->init();
//	for (int i = 0; i < 10; ++i)
//	{
//		p->setvelocity();
//		p->move(0.1);
//	}
//	p->display();
//
//
//	return 0;
//}