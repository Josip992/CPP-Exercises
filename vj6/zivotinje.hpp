#pragma once
using namespace std;
#include<string>

class Zivotinja {
public:
	virtual int uzmi_broj() = 0;
	virtual void postavi_broj(int x) = 0;
	virtual void postavi_naziv(string ime) = 0;
	virtual string vrati_ime() = 0;
};
