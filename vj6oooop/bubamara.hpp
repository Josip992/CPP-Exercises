#pragma once
#include "kukac.hpp"

class Bubamara : public Kukac {
	string ime;
public:
	void postavi_naziv(string naziv) override;
	string vrati_ime()override;
};