//#include<string>
//#include<vector>
//#include<algorithm>
//#include<fstream>
//#include<iostream>
//using namespace std;
//
//
//class Student {
//public:
//	string Name;
//	string Jmbag;
//	void set_name(string name){
//	Name = name;
//	}
//	void set_jmbag(string jmbag) {
//	Jmbag = jmbag;
//	}
//	
//};
//
//class Exam:public Student {
//public:
//	double prviK;
//	double drugiK;
//	double kol12;
//	void set_exam_score(float kol1, float kol2) {
//		prviK = kol1;
//		drugiK = kol2;
//		kol12 = (0.35 * (prviK + drugiK));
//	}
//};
//
//class Project :public Student {
//public:
//	double projekt;
//	double project;
//	void set_project_score(float proj_score) {
//		projekt = proj_score;
//		project = (0.3 * projekt);
//	}
//};
//
//class Result : public Exam,public Project {
//public:
//	double rez;
//	void display() {
//		rez = (kol12 + project);
//		cout << Student::Name << ",";
//		cout << Student::Jmbag << ",";
//		cout << rez;
//	}
//};
//
//int main() {
//
//	Result student1;
//	student1.Student::set_name("Ante Antic");
//	student1.Student::set_jmbag("12345");
//	student1.set_exam_score(50,80);
//	student1.set_project_score(90);
//	student1.display();
//
//
//	//12345, Ante Antic, 72.5
//
//	return 0;
//}