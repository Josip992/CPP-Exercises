#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ctime>
#include <fstream>
#include <iterator>
#include<ctype.h>

using namespace std;


class Vec3
{
	float x, y, z;
	float dot_product;

public:

	Vec3()
	{
		x = 0;
		y = 0;
		z = 0;
		dot_product = 0;
	}

	/*void vector_set(float x_axis, float y_axis, float z_axis)
	{
		x = x_axis;
		y = y_axis;
		z = z_axis;
	}

	float get_x() const
	{
		return x;
	}

	float get_y() const
	{
		return y;
	}

	float get_z() const
	{
		return z;
	}*/

	float get_dot_product() const
	{
		return dot_product;
	}

	/*Vec3(Vec3& vector3d)
	{
		x = vector3d.x;
		y = vector3d.y;
		z = vector3d.z;
	}*/
	friend istream& operator>>(istream& is, Vec3& vector3);
	friend ostream& operator<<(ostream& os, Vec3& vector3);

	//istream& operator>>(istream& is, Vec3& vector3)
	//{
	//	cout << "Unesite x: ";
	//	is >> vector3.x;
	//	cout << "Unesite y: ";
	//	is >> vector3.y;
	//	cout << "Unesite z: ";
	//	is >> vector3.z;
	//	return is;
	//}

	//ostream& operator<<(ostream& os, Vec3& vector3)
	//{
	//	os << "x= " << vector3.x << ", y= " << vector3.y << ", z= " << vector3.z << ".\n";
	//	//os << vector3.x << "i " << vector3.y << "y " << vector3.z << "k"<<endl;  // za normalizaciju vektora
	//	return os;
	//}


	/*Vec3& operator= (const Vec3& vector3)
	{
		x = vector3.x;
		y = vector3.y;
		z = vector3.z;
		return *this;
	}*/

	Vec3 operator+ (const Vec3& vector3)
	{
		Vec3 plus_vector;
		plus_vector.x = x + vector3.x;
		plus_vector.y = y + vector3.y;
		plus_vector.z = z + vector3.z;
		return plus_vector;
	}

	Vec3 operator- (const Vec3& vector3)
	{
		Vec3 minus_vector;
		minus_vector.x = x - vector3.x;
		minus_vector.y = y - vector3.y;
		minus_vector.z = z - vector3.z;
		return minus_vector;
	}

	Vec3 operator* (const Vec3& vector3)
	{
		Vec3 multi_vector_scalar;
		multi_vector_scalar.x = x * vector3.x;
		multi_vector_scalar.y = y * vector3.y;
		multi_vector_scalar.z = z * vector3.z;
		multi_vector_scalar.dot_product = multi_vector_scalar.x + multi_vector_scalar.y + multi_vector_scalar.z;

		return multi_vector_scalar;
	}

	Vec3 operator* (float num)
	{
		Vec3 multi_vector;
		multi_vector.x = x * num;
		multi_vector.y = y * num;
		multi_vector.z = z * num;
		return multi_vector;
	}

	Vec3 operator/ (const Vec3& vector3)
	{
		Vec3 divide_vector;
		divide_vector.x = x / vector3.x;
		divide_vector.y = y / vector3.y;
		divide_vector.z = z / vector3.z;
		return divide_vector;
	}

	Vec3 operator/ (float num)
	{
		Vec3 divide_vector;
		divide_vector.x = x / num;
		divide_vector.y = y / num;
		divide_vector.z = z / num;
		return divide_vector;
	}

	Vec3& operator+= (float number)
	{
		
		x += number;
		y += number;
		z += number;
		return *this;
	
	}

	Vec3& operator-= (float number)
	{
		x -= number;
		y -= number;
		z -= number;
		return *this;
	}

	Vec3& operator*= (float number)
	{
		x *= number;
		y *= number;
		z *= number;
		return *this;
	}

	Vec3& operator/= (float number)
	{
		x /= number;
		y /= number;
		z /= number;
		return *this;
	}

	bool operator == (Vec3 vector3)
	{
		if (x == vector3.x && y == vector3.y && z == vector3.z)
		{
			return true;
		}
		return false;
	}

	bool operator != (Vec3 vector3)
	{
		if (x == vector3.x && y == vector3.y && z == vector3.z)
		{
			return false;
		}
		return true;
	}

	/*float& operator[] (float num)
	{
		Vec3 multi_vector;
		if (num == 0)
		{
			return this->x;
		}
		if (num == 1)
		{
			return this->y;
		}
		if (num == 2)
		{
			return this->z;
		}
	}*/

	float& operator[] (char c)
	{
		Vec3 multi_vector;
		if (c == 'x')
		{
			return this->x;
		}
		if (c == 'y')
		{
			return this->y;
		}
		if (c == 'z')
		{
			return this->z;
		}

	}

	Vec3 member(Vec3 vector3)
	{
		Vec3 multi_vector;
		multi_vector.x = vector3.x * vector3.x;
		multi_vector.y = vector3.y * vector3.y;
		multi_vector.z = vector3.z * vector3.z;
		float square = sqrt(multi_vector.x + multi_vector.y + multi_vector.z);
		if (square == 0)
		{
			cout << "Vektor je nula\n";
			return multi_vector;
		}
		else
		{
			multi_vector.x = vector3.x / square;
			multi_vector.y = vector3.y / square;
			multi_vector.z = vector3.z / square;
			return multi_vector;
		}
	}

};

istream& operator>>(istream& is, Vec3& vector3)
{
	cout << "Unesite x: ";
	is >> vector3.x;
	cout << "Unesite y: ";
	is >> vector3.y;
	cout << "Unesite z: ";
	is >> vector3.z;
	return is;
}

ostream& operator<<(ostream& os, Vec3& vector3)
{
	os << "x= " << vector3.x << ", y= " << vector3.y << ", z= " << vector3.z << ".\n";
	//os << vector3.x << "i " << vector3.y << "y " << vector3.z << "k"<<endl;  // za normalizaciju vektora
	return os;
}


int main()
{
	//Vec3 vector3, vec;
	////vector3.vector_set(10,23,30);
	//cout << "Prvi vektor:\n";
	//cin >> vector3;
	//cout << vector3;
	//vec = vector3;
	//cout << "Drugi vektor:\n";
	//cout << vec;

	//cout << "Zbrajanje prvog i drugog vektora:\n";
	//Vec3 vec_plus = vec + vector3;
	//cout << vec_plus;

	//cout << "Oduzimanje prvog vektora sa drugim vektorom:\n";
	//Vec3 vec_minus = vector3 - vec;
	//cout << vec_minus;

	//cout << "Mnozenje dva vektora:\n";
	//Vec3 vec_multiplication = vec * vector3;
	//cout << vec_multiplication;

	//cout << "Mnozenje sa skalarom:\n";
	//float skalar;
	//cout << "Unesite skalar: \n";
	//cin >> skalar;
	//Vec3 vec_multiplication_skalar = vec * skalar;
	//cout << vec_multiplication_skalar;

	//cout << "djeljenje sa skalarom:\n";
	//cout << "Unesite skalar: \n";
	//cin >> skalar;
	//Vec3 vec_division_skalar = vec / skalar;
	//cout << vec_division_skalar;

	//cout << "Djeljenje dva vektora:\n";
	//Vec3 vec_division = vec / vector3;
	//cout << vec_division;

	//cout << "Unesite broj s kojim zelite zbrojiti prvi vektor: \n";
	//float num;
	//cin >> num;
	//vec += num;
	//cout << "Prvi vektor zbrojen sa brojem " << num << ".\n";
	//cout << vec;

	//cout << "Unesite broj s kojim zelite oduzeti prvi vektor: \n";
	//cin >> num;
	//vec -= num;
	//cout << "Prvi vektor umanjen sa brojem " << num << ".\n";
	//cout << vec;

	//cout << "Unesite broj s kojim zelite mnoziti prvi vektor: \n";
	//cin >> num;
	//vec *= num;
	//cout << "Prvi vektor pomnozen sa brojem " << num << ".\n";
	//cout << vec;

	//cout << "Unesite broj s kojim zelite podijeliti prvi vektor: \n";
	//cin >> num;
	//vec /= num;
	//cout << "Prvi vektor podjeljen sa brojem " << num << ".\n";
	//cout << vec;

	//if (vec == vector3)
	//{
	//	cout << "Vektori su istovjetni" << endl;
	//}

	//if (vec != vector3)
	//{
	//	cout << "Vektori nisu istovjetni" << endl;
	//}

	//cout << "Skalarni produkt:\n";
	//Vec3 dot_product = vec * vector3;
	//cout << dot_product.get_dot_product() << endl;

	//cout << "Pristupanje x koordinati:\n";
	////cout << vec[1];
	//cout << vec['x'] << endl;

	//Vec3 normalization;
	//cin >> normalization;
	//normalization = normalization.member(normalization);
	//cout << normalization;
	Vec3 vecc, vec, minus;
	cin >> vecc;
	cout << vecc;
	cin >> vec;
	cout << vec;
	minus = vecc - vec;
	cout << minus;

	/*Vec3 operator- (const Vec3 & vector3)
	{
		Vec3 minus_vector;
		minus_vector.x = x - vector3.x;
		minus_vector.y = y - vector3.y;
		minus_vector.z = z - vector3.z;
		return minus_vector;
	}*/

}