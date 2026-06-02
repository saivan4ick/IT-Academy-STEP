#include <iostream>
#include <fstream>
#include <vector>
#include "func.h"
using namespace std;
int j;
void selectionSort(vector<int>& vect)
{
	int number = 0;
	for (int i = 0; i < vect.size(); i++)
	{
		int minIndex = i;
		number = vect[i];
		for (int j = i + 1; j < vect.size(); j++)
		{
			if (number < vect[j])
			{
				number = vect[j];
				minIndex = j;
			}
		}
	if (minIndex != i)
		{
			int temp = number;
			vect[j] = vect[minIndex];
			vect[minIndex] = temp;
		}
	}
}
vector <int> input_file()
{
	int a = 0;
	int count = 0;
	vector<int>vect;
	ifstream inp("main.txt");
	inp >> count;
	for (int i = 0; i < count; i++)
	{
		inp >> a;
		vect.push_back(a);
	}
	inp.close();
	return vect;
}
void output_file(vector<int>&vect)
{
	ofstream out("qqq.log");
}