#include "vektor.hpp"
using namespace OOP;

vec3::vec3() {
	x = 0;
	y = 0;
	z = 0;
}
vec3::~vec3() {
}

istream& OOP::operator >> (istream& cin, OOP::vec3& vec) {
	cout << "Upisite x: ";
	cin >> vec.x;
	cout << "Upisite y: ";
	cin >> vec.y;
	cout << "Upisite z: ";
	cin >> vec.z;
	return cin;
}
ostream& OOP::operator << (ostream& cout, const OOP::vec3& vec) {
	cout << vec.x << " " << vec.y << " " << vec.z << endl;
	return cout;
}
vec3 vec3::operator = (const vec3& vec) {
	this->x = vec.x;
	this->y = vec.y;
	this->z = vec.z;
	return *this;
}
vec3 vec3::operator = (float broj) { //prvi vec3 je sta funkcija vraca
	this->x = this->y = this->z = broj;
	return *this;
}
vec3 vec3::operator + (const vec3& vec) {
	vec3 novi;
	novi.x = this->x + vec.x; //novi je c, this je a, vec je b
	novi.y = this->y + vec.y;
	novi.z = this->z + vec.z;
	return novi;
}
vec3 vec3::operator - (const vec3& vec) {
	vec3 novi;
	novi.x = this->x - vec.x;
	novi.y = this->y - vec.y;
	novi.z = this->z - vec.z;
	return novi;
}
vec3 vec3::operator * (float broj) {
	vec3 novi;
	novi.x = this->x * broj;
	novi.y = this->y * broj;
	novi.z = this->z * broj;
	return novi;
}
vec3 vec3::operator / (float broj) {
	vec3 novi;
	novi.x = this->x / broj;
	novi.y = this->y / broj;
	novi.z = this->z / broj;
	return novi;
}
vec3 vec3::operator += (const vec3& vec) {
	this->x += vec.x;
	this->y += vec.y;
	this->z += vec.z;
	return *this;
}
vec3 vec3::operator -= (const vec3& vec) {
	this->x -= vec.x;
	this->y -= vec.y;
	this->z -= vec.z;
	return *this;
}
vec3 vec3::operator *= (const vec3& vec) {
	this->x *= vec.x;
	this->y *= vec.y;
	this->z *= vec.z;
	return *this;
}
vec3 vec3::operator /= (const vec3& vec) {
	this->x /= vec.x;
	this->y /= vec.y;
	this->z /= vec.z;
	return *this;
}
vec3 vec3::operator += (float broj) {
	this->x += broj;
	this->y += broj;
	this->z += broj;
	return *this;
}
vec3 vec3::operator -= (float broj) {
	this->x -= broj;
	this->y -= broj;
	this->z -= broj;
	return *this;
}
vec3 vec3::operator *= (float broj) {
	this->x *= broj;
	this->y *= broj;
	this->z *= broj;
	return *this;
}
vec3 vec3::operator /= (float broj) {
	this->x /= broj;
	this->y /= broj;
	this->z /= broj;
	return *this;
}
bool vec3::operator == (const vec3& vec) {
	if (this->x == vec.x) {
		if (this->y == vec.y) {
			if (this->z == vec.z) {
				return 1;
			}
		}
	}return 0;
}
bool vec3::operator != (const vec3& vec) {
	if (this->x != vec.x) {
		if (this->y != vec.y) {
			if (this->z != vec.z) {
				return 1;
			}
		}
	}return 0;
}
float vec3::operator * (const vec3& vec) {
	return (this->x * vec.x + this->y * vec.y + this->z * vec.z);
}
float vec3::operator [] (char znak) {
	if (znak == 'x') {
		return this->x;
	}
	if (znak == 'y') {
		return this->y;
	}
	if (znak == 'z') {
		return this->z;
	}
}
void normalizacija(OOP::vec3& vec) {
	float duljina = sqrt(vec * vec);
	vec /= duljina;
}