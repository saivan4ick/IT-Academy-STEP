#include <iostream>
#include <vector>
using namespace std;
int main() {
	int i;
	vector<string> v;
	vector<int> vect{ 680,-12,35,25,7,-9,0,666,89,111 };
	// vector<int> vect{ 0,1,3,5,7,9,78,56,66,122 };
	for (int i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << " ";
	}
	cout << endl;

	int g = 0;
	for (int i = 0; i < vect.size(); i++)
	{
		if (g < vect[i]) // ???????? 
		{
			g = vect[i];
		}
	}
	cout << g << " " << endl;
	return 0;
}




/* for (int i = 0; i < vect.size(); i++)
{
	cout << vect[i] << " ";
}
	cout << endl;
	return 0;
}*/
/* 
int A[100];
int* a = new int;
*/
/*
	for (int i = 0; i < 10; i++)
	{
		vect.push_back(rand() % 100);
	}
*/