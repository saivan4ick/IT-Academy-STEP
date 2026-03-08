#pragma once
#include <iostream>
#include <vector>
using namespace std;
vector<int>create_vector(int count)
{
	vector<int>vect;
	for (int i = 0; i < count; i++)
	{
		int a = rand() % 101;
		vect.push_back(a);
	}
	return vect;
}
void sort_select(vector<int>&)
{
	vector<int>vect;
	for (int i = 0; i < vect.size(); i++)
	{
		print(vect);
		int b = i;
		for (int j = i; j < vect.size(); j++)
		{
			b = j;
			if (vect[i] < vect[b])
			{
				b = i;
			}
		}
		int a = vect[b];
		vect[b] = vect[i];
		vect[i] = a;
	}
}
void print(const vector<int>& vect)
{
	for (int i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << " ";
	}
}
