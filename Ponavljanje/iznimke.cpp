#include <iostream>
#include <vector>
#include <ctype.h>
#include <string>
#include <ctime>

using namespace std;

class Exceptions
{
public:
	virtual string get_message() = 0;
	virtual ~Exceptions() = 0;
};

class NotANumber : public Exceptions
{
protected:
	string message = "Not a number";
public:
	string get_message()
	{
		return message;
	}

};

class ZeroDivision : public Exceptions
{
protected:
	string message = "Divided by zero";
public:
	string get_message()
	{
		return message;
	}
};


class InvalidOperation : public Exceptions
{
protected:
	string message = "Invalid operation";
public:
	string get_message()
	{
		return message;
	}
};

Exceptions :: ~Exceptions() {}


int put_number(const string& num)
{

	for (char const& c : num)
	{
		if (num[0] == '-' && isdigit(num[1]))
		{
			continue;
		}
		if (isdigit(c) == 0)
		{
			throw NotANumber();
		}
	}
	return stoi(num);
}

char put_operator(char operation)
{
	string operators = "-+*/";
	if (operators.find(operation) == string::npos)
	{
		throw InvalidOperation();
	}
	return operation;
}

int result(int first, char operation, int second)
{
	if (second == 0)
	{
		throw ZeroDivision();
	}
	else if (operation == '+')
	{
		return (first + second);
	}
	else if (operation == '-')
	{
		return (first - second);
	}
	else if (operation == '*')
	{
		return (first * second);
	}
	else if (operation == '/')
	{
		return (first / second);
	}
}

int main()
{

	vector <string> vs;
	time_t tt;
	struct tm* ti;


	while (1)
	{

		try
		{
			string first;
			cout << "Unesite prvi broj: ";
			cin >> first;
			int first_num = put_number(first);
			cout << first_num << endl;

			char operation;
			cout << "Unesite neki od ovih operatora (+,-,*,/):" << endl;;
			cin >> operation;
			char op = put_operator(operation);

			string second;
			cout << "Unesite drugi broj:" << endl;
			cin >> second;
			int second_num = put_number(second);

			int res_operation = result(put_number(first), put_operator(operation), put_number(second));
			cout << put_number(first) << put_operator(operation) << put_number(second) << '=' << res_operation << endl;
		}

		catch (Exceptions& exception)
		{
			time(&tt);
			ti = localtime(&tt);
			vs.push_back(asctime(ti));
			vs.push_back(exception.get_message());
			break;
		}
	}
	cout << endl;
	for (string s : vs)
	{
		cout << s;
	}
	return 0;
}