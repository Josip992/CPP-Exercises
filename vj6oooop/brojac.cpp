#include <iostream>
using namespace std;
#include "Brojac.hpp"
#include "Ptica.hpp"
#include "Pauk.hpp"
#include "Kukac.hpp"

void Brojac::prebroji(Kukac& kukac)
{
	suma += kukac.uzmi_broj();
	cout << "dodan: " << kukac.vrati_ime() << endl;
}

void Brojac::prebroji(Pauk& pauk)
{
	suma += pauk.uzmi_broj();
	cout << "dodan: " << pauk.vrati_ime() << endl;
}

void Brojac::prebroji(Ptica& ptica)
{
	suma += ptica.uzmi_broj();
	cout << "dodan: " << ptica.vrati_ime() << endl;
}

int Brojac::ukupan_br()
{
	return suma;
}

