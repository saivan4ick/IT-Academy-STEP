a#include <iostream>
#include <string>
#include "Header.h"
#include <vector>
#include <fstream>
using namespace std;

int count(int a, vector<int> v)
{
	int x = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] == a)
		{
			x++;
		}
	}
	return x;
}

vector<int>c_read()
{
	int a = 0;
	vector<int> v;
	int kolv = 0;
	cin >> kolv;
	for (int i = 0; i < kolv; i++)
	{
		cin >> a;
		v.push_back(a);
	}
	return v;
}

vector<int> sort()
{
	return vector<int>();
}

vector<int> read(string file_name)
{
	int a = 0;
	vector<int> v;
	int kolv = 0;
	ifstream inp(file_name);
	inp >> kolv;
	for (int i = 0; i < kolv; i++)
	{
		inp >> a;
		v.push_back(a);
	}
	return v;
}