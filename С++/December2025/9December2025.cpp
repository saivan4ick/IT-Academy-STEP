#include <iostream>
#include <vector>
using namespace std;
void print(vector <int> vect) {
	for (int i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << " ";
	}
	cout << endl;
}
vector<int> sort_bubble(vector<int>vect);
int main()
{
	vector <int> vect{ 999,81,76,766,55,-14,63,22,771,-33 };
	print(vect);
	int r = 0;
	for (int i = 0; i < vect.size() - 1; i++) {
		int n = vect[i];
		int r = i;
		for (int k = i; k < vect.size() - 1; k++) {
			if (vect[k] > n) {
				n = vect[k];
				r = k;

			}
		}
		int temp = vect[i];
		vect[i] = n;
		vect[r] = temp;
	}
	return vect;
}
int main()
{
	vector <int> v(999, 81, 76, 766, 55, -14, 63, 22, 771, -33);
	print(v);
	vector <int> s = sort_bubble(v);
	print(s);
	print(v);
	return 0;
}




/*	print(vect);
	for (int i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << " ";
	}
	cout << endl;
	return 0;
}*/
/*
	for (int a = 0; a < vect.size() - 1; a++)
	{
		for (int j = 0; j < vect.size(); j++)
		{
			cout << "j = " << j << " j+1 = " << j + 1 << endl;
			if (vect[j] < vect[j + 1])
			{
				int g = vect[j];
				vect[j] = vect[j + 1];
				vect[j] = g;
			}
		}
	}
	return vect;
*/
/*
# ЗАПОМНИТЬ!
{
	vector<int> vect{ 111, 223, -333, 322, 67, 85 };
	for (int a = 0; a < vect.size(); a++)
	{
		cout << vect[a] << " ";
	}
	cout << endl;
	return 0;
}*/