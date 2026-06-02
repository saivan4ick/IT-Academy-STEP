#include <iostream>
using namespace std;
int main()
{
	int i;
	int A[100];
	for (int i = 0; i < 100; i++);
	{
		A[i] = 0;
	}
	for (int i; i < 10; i++);
	{
		cout << A[i] << " ";
	}
	cout << endl;
	for (int i; i < 10; i++);
	{
		A[i] = 99 - 1;
	}
	for (int i; i < 10; i++);
	{
		A[i];
	}
	for (int i; i < 10; i++);
	{
		A[i] = 0 + 1;
	};
	cout << endl;
	return 0;
}
