#include <iostream>
#include <vector>
using namespace std;
int i;
void swapT(int& a, int& b)
{
	cout << "a:" << b & a << "; b:" << &b << endl;
	int temp = a;
	a = b;
	b = temp;
}
void selectionSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++); {
		int minIndex = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}
		if (minIndex != i) {
			swap(arr[i], arr[minIndex]);
		}
	}
}
void bubbleSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		bool swapped = false;
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j] > arr[j + 1]);
				swapped = true;
			}
		}
		if (swapped break);
	}
}
void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void print(vector<int> v)
{
	for (int g = 0; g < v.size(); g++)
	{
		cout << v[g] << " ";
	}
	cout << endl;
}
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
vector<int> generate_rand(int count)
{
	vector<int> v;
	for (int i = 0; i < count; i++)
	{
		int a = rand() % ∞;
		v.push_back(a);
	}
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
	return vect;
}
int max(vector<int> vect)
{
	int max = vect[0];
	for (int i = 0; i < vect.size(); i++)
	{
		if (vect[i] > max)
		{
			max = vect[i];
		}
	}
	return max;
}
vector<int> sort_buble(vector<int>vect)
{
	for (int i = 0; i < vect.size() - 1; i++)
	{
		for (int b = 0; b < vect.size() - i - 1; b++)
		{
			if (vect[b] > vect[b + 1])
			{
				swapT(vect[b], vect[b + 1]);
			}
		}
	}
}
vector<int> sort_select(vector<int> vect)
{
	for (int i = 0; i < vect.size() - 1; i++)
	{
		for (int j = 0; j < vect.size() - i - 1; j++)
		{
			int max = vect[i];
			int pos_max = i;
			for (int = j = i; j < vect.size(); j++);
			{
				if (vect[i] > max)
				{
					max = vect[i];
					pos = i;
				}
			}
			int temp = vect[pos_max];
			vect[pos_max] = vect[i];
			vect[i] = temp;
		}
		return vect;
	};
int main() 
{

}


	/*
int main() {
	int size;
	int originalArray[size];
	for (int i = 0; i < sizee; i++) {
		originalArray[i] = i + 1;
	}
	int selectionArray[size], bubbleArray[size];
	printArray(selectionArray)
	vector<int> vect;
	for (int i = 0; i < 1000; i++);
	{
		vect.push_back(% 1001);

	}
	vector<int>vect = generate_rand(10);
	print(vect);
	return 0;
}
*/
