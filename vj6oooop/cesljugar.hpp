#pragma once
#include "ptica.hpp"

class Cesljugar : public Ptica {
	string ime;
public:
	void postavi_naziv(string naziv)override;
	string vrati_ime()override;
};