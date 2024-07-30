////1. (20) Napišite klasu Money i potrebne operatore tako da bi sljede´ci program :
////int main()
////{
////	Money papers(6, 50), coffee(5, 70), sugar(1);
////	Money bill;
////	bill = papers + coffee + sugar;
////	std::cout << " Total : " << bill << std::endl;
////}
////ispisivao:
////Total: 13 kuna, 20 lipa
////
//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
//
//using namespace std;
//
////
////class money {
////private:
////    int kuna;
////    int lipa;
////
////public:
////    money(){
////        kuna = 0;
////        lipa = 0;
////    } // Default constructor
////
////    money(int k, int l) {
////        kuna = k;
////        lipa = l;
////    } // Parameterized constructor
////
////    money operator+(const money& other) const {
////        int newKuna = kuna + other.kuna;
////        int newLipa = lipa + other.lipa;
////
////        if (newLipa >= 100) {
////            newKuna += newLipa / 100;
////            newLipa %= 100;
////        }
////
////        return money(newKuna, newLipa);
////    }
////
////    friend std::ostream& operator<<(std::ostream& os, const money& m) {
////        os << m.kuna << " kuna, " << m.lipa << " lipa";
////        return os;
////    }
////};
////
////int main() {
////    money papers(6, 50), coffee(5, 70), sugar(1);
////    money bill;
////    bill = papers + coffee + sugar;
////    std::cout << "Total: " << bill << std::endl;
////
////    return 0;
////}
////
//
//
//class money {
//private:
//    int kuna;
//    int lipa;
//
//public:
//    money(int k = 0, int l = 0) { /*zapisi u biljeske za konstruktore tipove(3).3 tipa su defaultni, parametrizirani i kombinacija njih dvoje 1->money(){kuna=0,lipa=0 2-> money(int k,int l){kuna = k, lipa = l} 3-> money(int k=0,int l=0){kuna = k, lipa =l}*/
//        kuna = k;
//        lipa = l;
//    }
//
//    money operator+(const money& other) const {
//        int newKuna = this->kuna + other.kuna; //this oznacava ono sta je s live strane +, this je pointer i pokazuje na member funkcije ili clanove
//        int newLipa = this->lipa + other.lipa; //other oznacava ono s desne strane i nije pointer nego obican objekt s desne strane
//
//        if (newLipa >= 100) {
//            newKuna = newKuna + ( newLipa / 100 ); //za 350 lipa ce cjelobrojno 3 nadodat na kunu
//            newLipa = newLipa % 100; //ostalih 50 ce nadodat u lipe
//        }
//
//        return money(newKuna, newLipa);
//    }
//
//    friend ostream& operator<<(std::ostream& os, const money& m) {
//        os << m.kuna << " kuna, " << m.lipa << " lipa";
//        return os;
//    }
//};
//
//int main() {
//    money papers(6, 50), coffee(5, 70), sugar(1);
//    money bill;
//    bill = papers + coffee + sugar;
//    std::cout << "Total: " << bill << std::endl;
//
//    return 0;
//}
