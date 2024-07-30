////1. (15) Napišite klasu array tako da sljede´ci program ispisuje sve elemente polja.Klasa ima polje kao privatni
////ˇclan.U konstruktoru se svi elementi postavljaju na zadanu vrijednost.
////int main()
////{
////	std::ostream_iterator < double > os(std::cout, " ␣ ");
////	array < double, 16 > a(1);
////	a[0] = a[1] = 3.14;
////	std::copy(a.begin(), a.end(), os);
////}
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//#include<array>
//
//using namespace std;
//NJEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE RiSEN ZADATAKK!!
//class myArray {
//private:
//    array<double, 16>a;
//public:
//    myArray(int n) {
//        for (int i = 0; i < 16; i++) {
//            myArray[i] = n;
//        }
//    }
//};
//
//int main() {
//    std::ostream_iterator<double> os(std::cout, " ");
//    std::myArray<double, 16> a(1);
//    a[0]=a[1]= 3.14;
//    std::copy(a.begin(), a.end(), os);
//    return 0;
//}