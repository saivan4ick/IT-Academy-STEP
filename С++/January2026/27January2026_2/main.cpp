#include <iostream>
#include <string>
#include "func.h"
using namespace std;
void calc();
int perevod(string t)
{
	for (int i = 0; i < t.size(); i++)
	{
		cout << t[i] << endl;
	}
	int res = 0;
	return res;
}
int main()
{
	setlocale(LC_ALL, "RU");
	string s = "123";
	perevod(s);
	// cin >> s;
	/* std::getline(�in, s) // ��������� ������
	cout << "s:" << s << endl;*/
	return 0;
}
