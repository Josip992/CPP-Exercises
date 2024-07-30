#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
#include "crna_udovica.hpp"
#include "bubamara.hpp"
#include "cesljugar.hpp"
#include "Brojac.hpp"

int main()
{
	Crna_udovica zivotinja;
	zivotinja.postavi_naziv("Crna_udovica");
	zivotinja.postavi_broj(8);
	Bubamara zivotinja2;
	zivotinja2.postavi_naziv("Bubamara");
	zivotinja2.postavi_broj(6);
	Cesljugar zivotinja3;
	zivotinja3.postavi_naziv("Cesljugar");
	zivotinja3.postavi_broj(2);
	Brojac B;
	B.prebroji(zivotinja);
	B.prebroji(zivotinja2);
	B.prebroji(zivotinja3);
	cout << "ukupno nogu: " << B.ukupan_br();
}
