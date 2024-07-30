////3. (10) Napišite interface za geometrijski lik te implementaciju za krug i kvadrat.U programu u listu pointera
////na lik stavite jedan krug i jedan kvadrat i pozovite funkciju koja ispisuje ukupnu površinu svih likova.
////Obavezno obrisati sve alocirane objekte.
//
//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//
//using namespace std;
//
//class GeomLik {
//public:
//	virtual double povrsina() = 0;
//	
//};
//
//class Krug :public GeomLik {
//public:
//	double r;
//
//	Krug(double radius) {
//		r = radius;
//	}
//	double povrsina() {
//		return (r * r * 3.14);
//	}
//};
//
//class Kvadrat :public GeomLik {
//public:
//	double a, b;
//	Kvadrat(double x,double y) {
//		a = x;
//		b = y;
//	}
//	double povrsina() {
//		return (a*b);
//	}
//};
//
//
//
//int main() { 
//
//	vector<GeomLik*> shape;
//	Krug* k1 = new Krug(69.0);
//	Kvadrat* KVADRATINJO1 = new Kvadrat(2.5, 3.7);
//	shape.push_back(k1);
//	shape.push_back(KVADRATINJO1);
//	k1->povrsina();
//	KVADRATINJO1->povrsina();
//	double suma = 0;
//
//	for (int i = 0;i<shape.size();i++) {
//		suma +=shape[i]->povrsina();
//	}
//	cout << suma << endl ;
//
//	for (int i = 0; i < shape.size(); i++) {
//		delete shape[i];
//	}
//
//	return 0;
//}