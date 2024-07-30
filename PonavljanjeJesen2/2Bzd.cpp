//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<fstream>
//
//using namespace std;
//
////2. Napisati apstraktnu klasu Quad koja predstavlja četverokut zadan sa četiri stranice i funkcije za opseg
////i površinu.Stranice četverokuta su privatne varijable.Napisati izvedene klase za kvadrat i pravokutnik
////i potrebne funkcije. Napisati funkciju koja za vektor četverokuta računa onaj najveće površine.U main
////funkciji napuniti vektor pravokutnicima i kvadratima te ispisati duljine stranica i vrstu četverokuta najveće
////površine
//
//class Quad {
//public:
//	float a = 0.0;
//	float b = 0.0;
//	float c = 0.0;
//	float d = 0.0;
//	virtual float povrsina() = 0;
//	virtual float opseg() = 0;
//};
//
//class Kvadrat :public Quad {
//	float povrsina(){
//		return (a * a);
//	}
//	float opseg() {
//		return (4 * a);
//	}
//};
//
//class Pravokutnik :public Quad {
//	float povrsina(){
//		return (a * b);
//	}
//	float opseg() {
//		return ((2*a)+(2*b));
//	}
//};
//
//Quad* findLargestAreaQuad(vector<Quad*> quadrilaterals) {
//    Quad* largestQuad = nullptr;
//    float largestArea = 0.0;
//
//    for (Quad* quad : quadrilaterals) {
//        float area = quad->povrsina();
//        if (area > largestArea) {
//            largestArea = area;
//            largestQuad = quad;
//        }
//    }
//
//    return largestQuad;
//}
//
//
//
//int main() {
//
//    vector<Quad*> quadrilaterals;
//    Pravokutnik p1;
//    p1.a = 5.450;
//    p1.b = 8.1230;
//    quadrilaterals.push_back(&p1);
//
//    Kvadrat k1;
//    k1.a = 6.50;
//    quadrilaterals.push_back(&k1);
//
//    Quad* largestQuad = findLargestAreaQuad(quadrilaterals);
//
//    if (typeid(*largestQuad) == typeid(Pravokutnik)) { //usporedba radi li se o pravokutniku ili kvadratu
//        cout << "Najveci cetverokut je pravokutnik sa A stranicom duljine: "<< largestQuad->a << " i B stranicom duljine: " << largestQuad->b << endl;
//
//    }
//    if (typeid(*largestQuad) == typeid(Kvadrat)) { //usporedba radi li se o pravokutniku ili kvadratu
//        cout << "Najveci cetverokut je kvadrat sa A stranicom duljine: " << largestQuad->a << endl;
//    }
//
//    return 0;
//}