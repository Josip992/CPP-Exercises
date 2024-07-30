#pragma once
#include<iostream>
using namespace std;
namespace OOP {

	class vec3 {
		float x, y, z;
	public:
		vec3();
		friend istream& operator >> (istream&, vec3& vec);
		friend ostream& operator << (ostream& cout, const vec3& vec);
		vec3 operator = (const vec3& vec);
		vec3 operator = (float broj);
		vec3 operator + (const vec3& vec);
		vec3 operator - (const vec3& vec);
		vec3 operator * (float broj);
		vec3 operator / (float broj);
		vec3 operator += (const vec3& vec);
		vec3 operator -= (const vec3& vec);
		vec3 operator *= (const vec3& vec);
		vec3 operator /= (const vec3& vec);
		vec3 operator += (float broj);
		vec3 operator -= (float broj);
		vec3 operator *= (float broj);
		vec3 operator /= (float broj);
		bool operator == (const vec3& vec); //bool jer ne vraca vektor nego 1 ili 0
		bool operator != (const vec3& vec);
		float operator * (const vec3& vec);
		float operator [] (char znak);
		~vec3();
	};
}
void normalizacija(OOP::vec3& vec);