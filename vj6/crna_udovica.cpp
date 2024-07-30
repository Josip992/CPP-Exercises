#include "crna_udovica.hpp"

void Crna_udovica::postavi_naziv(string naziv) {
	ime = naziv;
}
string Crna_udovica::vrati_ime() {
	return ime;
};