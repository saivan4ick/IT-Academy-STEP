#include <iostream>
using namespace std;

int main()
{
	int array[10];

	for (int array = 0; array < 10; array++)
	{
		cout << array;
	}
}

/* 
define array_size 200
int main()
{
	int a[200];
	int s = 200;
	for (int b = 0; b < 200; b++)
	{
		cout << a[b] << endl;
	}

	for (int b = 0; b < 10; b++)
	{
		a[b] = 0;
	}
	for (int w = 0; w < 10; w++)
	{
		cout << w << ") " << a[w] << endl;
	}
	for (int b = 0; b < 10; b++)
	{
		a[b] = b;
	}
	for (int w = 0; w < 10; w++)
	{
		cout << w << ") " << a[w] << endl;
	}
	cout << "+++" << endl;
	for (int w = 0; w < 10; w++)
	{
		cout << w << endl;
	}
	for (int b = 0; b < s; b++)
	{
		a[b] = 0;
	}
	cout << s << endl;
	return 0;
}
*/