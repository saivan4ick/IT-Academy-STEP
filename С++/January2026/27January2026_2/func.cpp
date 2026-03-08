#include <iostream>
#include <string>
#include "func.h"
using namespace std;
int res;
int raznost(int a, int b)
{
	return a - b;
}
int summa(int a, int b)
{
	return a + b;
}
int ymnozhenie(int a, int b)
{
	return a * b;
}
int delenie(int a, int b)
{
	return a / b;
}
int ostatok(int a, int b)
{
	return a % b;
}
int perevod(string t)
{
	string res;
	return res;
}
void calc() {
	char znak;
	int a = 0;
	int b = 0;
	setlocale(LC_ALL, "RU");
	cout << "������� ������ �����" << endl;
	cin >> a;
	cin >> znak;
	cin >> b;
	if (znak == '+')
	{
		res = summa(a, b);
	}
	if (znak == '-')
	{
		res = raznost(a, b);
	}
	if (znak == '*')
	{
		res = ymnozhenie(a, b);
	}
	if (znak == '/')
	{
		res = delenie(a, b);
	}
	if (znak == '%')
	{
		res = ostatok(a, b);
	}
	cout << a << znak << b << "=" << res << endl;
	return 0;
}
