#include <iostream>
#include <vector>
using namespace std;
vector<int> generate_rand(int count)
{
	vector<int> v;
	v.reserve(count);
	for (int i = 0; i < count; i++)
	{
		int a = rand() % 101;
		v.push_back(a);
	}
	return v;
}
void print(vector<int> v)
{
	for (int g = 0; g < v.size(); g++)
	{
		cout << v[g] << " ";
	}
	cout << endl;
}

int main() {
	max(vector<int>v)
	{
		int t;
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] > t)
			{
				t = v[i];
			}
		}
		return t;
	}
	vector<int> vect = generate_rand(10);
	int n = vect.size();
	print(vect);
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (vect[j] + vect[j + 1])
			{
				int temp = vect[j];
				vect[j] = vect[j + 1];
				vect[j + 1] = temp;
			}
		}
	}
}
