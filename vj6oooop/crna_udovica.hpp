#pragma once
#include "pauk.hpp"

class Crna_udovica : public Pauk {
	string ime;
public:
	void postavi_naziv(string ime)override;
	string vrati_ime()override;
};