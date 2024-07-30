#include "Ptica.hpp"
#include "Pauk.hpp"
#include "Kukac.hpp"

class Brojac {
	int suma = 0;
public:
	void prebroji(Ptica& ptica);
	void prebroji(Pauk& pauk);
	void prebroji(Kukac& kukacs);
	int ukupan_br();
};

