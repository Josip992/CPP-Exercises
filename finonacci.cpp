//#include<iostream>
//#include<vector>
//using namespace std;
//
//
//
//vector<int> fibo(int donjaGranica,int gornjaGranica) {
//	
//	vector<int> fiboVec;
//	int tmp1 = donjaGranica - 2;
//	int tmp2 = donjaGranica - 1;
//	int tmp3 = tmp2 + tmp1;
//	int j = 0;
//	fiboVec.resize(gornjaGranica - donjaGranica + 1);
//
//	for (int i = donjaGranica; i <= gornjaGranica ; i++) {
//		fiboVec[j] = tmp3;
//		tmp1 = tmp2;
//		tmp2 = tmp3;
//		tmp3 = tmp2 + tmp1;
//		j++;
//	}
//	return fiboVec;
//}
//
//int main() {
//
//	vector<int> vec;
//
//	vec = fibo(2,100);
//
//	for (int i = 0;i<99;i++) {
//		cout << vec[i] << endl;
//	}
//	
//	return 0;
//}