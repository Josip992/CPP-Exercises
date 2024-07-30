//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<fstream>
//#include<stdexcept>
//
//using namespace std;
//
//class Instrument {
//public:
//	string name;
//	string manufacturer;
//	virtual void play() = 0;
//};
//
//class Guitar : public Instrument {
//	void play() {
//		cout << "PLaying Guitar..." << endl;
//	}
//};
//
//class Accordion : public Instrument {
//	void play() {
//		cout << "Playing accordion..." << endl;
//	}
//};
//
//class Piano : public Instrument {
//	void play() {
//		cout << "Playing piano..." << endl;
//	}
//};
//
//int main() {
//
//	vector<Instrument*> instrumenti;
//	instrumenti.push_back(new Guitar);
//	instrumenti.push_back(new Piano);
//	instrumenti.push_back(new Accordion);
//
//	for (size_t i = 0; i < instrumenti.size(); i++) {
//		instrumenti[i]->play();
//	}
//	for (size_t i = 0; i < instrumenti.size(); i++) {
//		delete instrumenti[i];
//	}
//
//	return 0;
//}