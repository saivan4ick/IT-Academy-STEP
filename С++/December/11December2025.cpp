/* #include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int>vect{ 1,2,3,4,89,322,777 };
	for (int a = 0; a < vect.size(); a++)
	{
		cout << vect[a] << " ";
	}
	cout << endl;
	return 0;
}
*/

#include <iostream>
#include <vector>
#include <time.h>
using namespace std;
vector<int> generate_rand(int count) 
{
	vector<int> v;
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
int main()
{
	vector<double> v;
	srand(time(NULL));
	int cout_array = 90;
	for (int i = 0; i < 10; i++)
	{
		int a = rand() % 101;
		v.push_back(a);
	}
	for (int g = 0; g < 10; g++)
	{
		cout << v[g] << " ";
	}
	return 0;
}
