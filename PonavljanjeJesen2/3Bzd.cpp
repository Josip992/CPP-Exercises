//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<fstream>
//
////3. Napisati funkciju count_letter
//// koja prima jedan po jedan znak sa ulaza.
//// Funkcija broji broj samoglasnika
////i suglasnika i baca iznimku u slučaju da je unesen znak koji nije slovo.
//
//#include <cctype>
//
//using namespace std;
//
//class X {
//public:
//    string err;
//    X(const char* s) : err(s) {}
//};
//
//
//string count_letter(char ch) {
//    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
//        return "samoglasnik"; 
//    }
//    else {
//        return "suglasnik"; 
//    }
//}
//
//int main() {
//    char ch;
//    int samoglasnici = 0;
//    int suglasnici = 0;
//
//    cout << "Unesite znakove (za prekid unesite '.' ili '0'): ";
//    while (1) {
//        cin >> ch;
//        if (ch == '.' || ch == '0') {
//            break;
//        }
//
//        try {
//            if (isalpha(ch)) {
//                string letterType = count_letter(ch);
//                if (letterType == "samoglasnik") {
//                    samoglasnici++;
//
//                    cout << "Broj samoglasnika: " << samoglasnici << ", Broj suglasnika: " << suglasnici << endl;
//                }
//                else {
//                    suglasnici++;
//
//                    cout << "Broj samoglasnika: " << samoglasnici << ", Broj suglasnika: " << suglasnici << endl;
//                }
//            }
//            else {
//                throw X("Nije slovo!");
//
//                cout << "Broj samoglasnika: " << samoglasnici << ", Broj suglasnika: " << suglasnici << endl;
//            }
//        }
//        catch (X x) {
//            cout << "error: " << x.err << endl;
//        }
//    }
//
//    cout << "Broj samoglasnika: " << samoglasnici << endl;
//    cout << "Broj suglasnika: " << suglasnici << endl;
//
//    return 0;
//}
