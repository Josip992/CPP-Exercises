//1. U datoteci su dane koordinate točaka(x, y, z) tako da je u svakom redu jedna točka.Napisati program
//koji transformira sve z - koordinate primjenjujući funkciju fun(x, y, z) gdje je fun funkcija
//f un(x, y, z) = z + x
//2 + y
//2
//te nove koordinate zapisuje u drugu datoteku.Operacije transformiranja i čitanja i pisanja u datoteku
//realizirati koristeći standardnu biblioteku.
//


#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cctype>
//#include<fstream>
//
//using namespace std;
//
//int fun(int x,int y,int z) {
//    return z;
//}
//
//int main() {
//
//    ifstream file("koordinatezd1.txt");
//    double x, y, z;
//    ofstream output_file("NOVEkoordinatezd1.txt"); // output file di ce ic
//
//    if (!file) {
//        cout << "Unable to open file." << endl;
//        return 1;
//    }
//
//    
//    while (file >> x >> y >> z) { // iz filea uzmi prvi znak  <<(razmak) pa drugi znak <<(razmak) pa treci znak(z)
//        cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
//        z = fun(x,y,z);
//        cout << "Z nakon primjene funkcije iznosi: " << z << endl;
//        output_file << "x: " << x << ", y: " << y << ", z: " << z << std::endl; // upisivanje znak po znak 
//    }
//    file.close();
//
//    return 0;
//}

