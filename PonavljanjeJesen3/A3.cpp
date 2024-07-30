////3. Napisati funkciju koja puni vektor stringova linijama unesenim sa tipkovnice.Napisati drugu funkciju
////	 koja svaki string iz vektora preslaže tako da svaku riječ u stringu okrene naopako iskljucujući znakove
////	 interpunkcije.
//
//#include<string>
//#include<vector>
//#include<cmath>
//#include<cstring>
//#include<cctype>
//#include<algorithm>
//#include<iostream>
//
//using namespace std;
//
////string preokreni(string rijec) {
////
////	string preokrenutStr = rijec;
////
////	reverse(preokrenutStr.begin(), preokrenutStr.end());
////
////	return preokrenutStr;
////}
//// This function reverses a word while keeping punctuation in place
//
//string okreniRijec(const std::string& rijec) {
//	std::string okrenutaRijec = rijec; // Create a new string as a copy of the input
//	size_t i = 0; // Starting point at the beginning of the word
//	size_t j = okrenutaRijec.length() - 1; // Starting point at the end of the word
//
//	// Keep swapping characters until the middle of the word is reached
//	while (i < j) {
//		// Skip over punctuation at the beginning of the word
//		if (ispunct(okrenutaRijec[i])) {
//			i++; // Move to the next character
//			continue; // Skip the rest of the loop and start again
//		}
//
//		// Skip over punctuation at the end of the word
//		if (ispunct(okrenutaRijec[j])) {
//			j--; // Move to the previous character
//			continue; // Skip the rest of the loop and start again
//		}
//
//		// Swap characters at positions i and j
//		std::swap(okrenutaRijec[i], okrenutaRijec[j]);
//
//		// Move the pointers towards the middle
//		i++; // Move the start pointer forward
//		j--; // Move the end pointer backward
//	}
//	return okrenutaRijec; // Return the reversed word with preserved punctuation
//}
//
//
//int main() {
//
//	vector<string> vekStr;
//	string uneseniStr;
//	bool broj = false;
//
//	while (1) {
//		cout << "Upisite string(za prekid upisite /): " << endl;
//		cin >> uneseniStr;
//		if (uneseniStr == "/") {
//			break;
//		}
//		for (char c:uneseniStr) {
//			if (!isalpha(c) && !ispunct(c)) {
//				broj = true;
//				break;
//			}
//		}
//		if (broj == true) {
//			break;
//		}
//		uneseniStr = okreniRijec(uneseniStr);
//		vekStr.push_back(uneseniStr);
//		for (int i = 0;i<vekStr.size();i++) {
//			cout << vekStr[i] << " " << endl;
//		}
//	}
//
//	return 0;
//}