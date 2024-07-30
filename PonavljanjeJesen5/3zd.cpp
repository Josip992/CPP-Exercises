////3. (20) U datoteci wimbledon_double_faults.txt dana je statistika dvostrukih pogrešaka igraˇcica.Napišite program koji koriste´ci standardne algoritme :
////(a)uˇcita sve igraˇcice u vektor„
////(b) izbaci iz vektora sve koji su imale više od ˇcetiri dvosturke pogreške u meˇcu po meˇcu,
////(c)pronade igra ¯ ˇcicu sa najmanje dvostrukih pogrešaka po meˇcu i ispiše njeno ime i prezime,
////(d)sortira uzlazno po broju dvostrukih pogrešaka po meˇcu,
////(e)ispiše sortirane u obliku "redni_broj ime prezime broj_dvostrukih_pogrešaka_po_meˇcu".
//
//
//
//
//
//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<fstream>
//
//using namespace std;
//
////SORTSOOOOOOOOOOOOOOOOOOOOOOOOOOOOOSRTSORTSITISESORTASOOOOOOOOOOOORTSORT
//
//class Igrac {
//public:
//	string ime;
//	string prezime;
//	int brojDvosPog;
//
//	Igrac(string a, string b, int c){
//		ime = a;
//		prezime = b;
//		brojDvosPog = c;
//	}
//};
//
//bool compareByBrojDvosPog(Igrac a, Igrac b) {
//	return a.brojDvosPog < b.brojDvosPog; //za silazno obrnut znak, sortirat ce po compareByBrojDvosPog funkciji a usporedivat ce po brojDvosPog
//}
//
//int main()
//{
//	vector<Igrac> igraci;
//	string ime, prezime, stringBrDvosPog;
//	int intBrDvosPog;
//	int minBrojDvosPog;
//	Igrac igracWithMinValue("", "", 0);
//
//	ifstream file("wimbledon_double_faults.txt");
//
//	while (file >> ime >> prezime >> stringBrDvosPog) {
//		intBrDvosPog = stoi(stringBrDvosPog);
//		Igrac igrac(ime, prezime, intBrDvosPog);
//		igraci.push_back(igrac);
//	}
//
//	for (int i = 0; i<igraci.size();i++ ) {
//		if (igraci[i].brojDvosPog > 4) {
//			igraci.erase(igraci.begin() + i); //iz nekoga razloga ne izbrise sve sa priko 4 iz vektora NEGO KAKO MU DODE, nisan uspia skuzit zasto, nisan ima vrimena(3:57am)
//		}
//	}
//
//	minBrojDvosPog = igraci[0].brojDvosPog;
//	for (Igrac igrac : igraci) {
//		if (igrac.brojDvosPog < minBrojDvosPog) {
//			minBrojDvosPog = igrac.brojDvosPog;
//			igracWithMinValue = igrac;
//		}
//	}
//	
//	cout << "Igrac s najmanje duplih pogresaka je: " << igracWithMinValue.ime << " " << igracWithMinValue.prezime << " s " << igracWithMinValue.brojDvosPog << " greske!" << endl;
//
//	sort(igraci.begin(), igraci.end(), compareByBrojDvosPog);
//
//	for (int j = 0;j<igraci.size();j++) {
//		cout << j+1 << " ";
//		cout << igraci[j].ime << " ";
//		cout << igraci[j].prezime << " ";
//		cout << igraci[j].brojDvosPog << endl;
//	}
//
//	return 0;
//}
