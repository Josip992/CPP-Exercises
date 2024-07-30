#pragma once
#include "zivotinje.hpp"

class Ptica : public Zivotinja {
	int br_n;
public:
	int uzmi_broj()override;
	void postavi_broj(int x);
	
};